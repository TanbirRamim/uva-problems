// problem: 272 - TEX Quotes
// Language: C++
// solved by: Tanbir Hossain Ramim
// Institution: SMUCT
// Batch: 29th
// ID: 221071034

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    long count = 0;
    while (scanf("%c", &ch) == 1)
    {
        if (ch == '"')
        {
            count++;

            if (count % 2 == 1)
                printf("``");
            else if (count % 2 == 0)
                printf("''");
        }
        else
            printf("%c", ch);
    }
}
