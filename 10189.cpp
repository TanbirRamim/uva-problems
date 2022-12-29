// problem: 10189 - Minesweeper
// Language: C++
// solved by: Tanbir Hossain Ramim
// Institution: SMUCT
// Batch: 29th
// ID: 221071034

#include <bits/stdc++.h>
#define MAX_N 100
#define MAX_M 100
#define MINE -100
using namespace std;
int main()
{
    int n, m, field_num = 0;
    char square;
    while (scanf("%d%d", &n, &m) != EOF && !(n == 0 && m == 0))
    {
        getchar();
        if (field_num)
            printf("\n");
        int field[MAX_N + 5][MAX_M + 5] = {0};
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                square = getchar();
                if (square == '*')
                {
                    field[i][j] = MINE;
                    for (int k = -1; k <= 1; k++)
                        for (int l = -1; l <= 1; l++)
                            field[i + k][j + l]++;
                }
            }
            getchar();
        }
        printf("Field #%d:\n", ++field_num);
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                if (field[i][j] < 0)
                    printf("*");
                else
                    printf("%d", field[i][j]);
            printf("\n");
        }
    }
    return 0;
}