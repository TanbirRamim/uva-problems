// problem: 10550 - Combination Lock
// Language: C++
// solved by: Tanbir Hossain Ramim
// Institution: SMUCT
// Batch: 29th
// ID: 221071034

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int st, a, b, c;
    while (scanf("%d%d%d%d", &st, &a, &b, &c) && (st || b || a || c))
    {
        int count = 1080;
        // formula: distance = 1080 + ( (start-first+40) % 40 + (second-first+40)%40 + (second - third+40)%40) * 9 //
        count += ((st >= a) ? (st - a) : (st + 40 - a)) * 9;
        count += ((a > b) ? (40 - a + b) : (b - a)) * 9;
        count += ((b >= c) ? (b - c) : (b + 40 - c)) * 9;
        printf("%d\n", count);
    }

    return 0;
}