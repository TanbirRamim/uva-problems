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
    int start, firstNumber, secondNumber, thirdNumber;
    while (scanf("%d%d%d%d", &start, &firstNumber, &secondNumber, &thirdNumber) && (start || secondNumber || firstNumber || thirdNumber))
    {
        int count = 1080;
        // formula: distance = 1080 + ( (start-first+40) % 40 + (second-first+40)%40 + (second - third+40)%40) * 9 //
        count += ((start >= firstNumber) ? (start - firstNumber) : (start + 40 - firstNumber)) * 9;
        count += ((firstNumber > secondNumber) ? (40 - firstNumber + secondNumber) : (secondNumber - firstNumber)) * 9;
        count += ((secondNumber >= thirdNumber) ? (secondNumber - thirdNumber) : (secondNumber + 40 - thirdNumber)) * 9;
        printf("%d\n", count);
    }

    return 0;
}