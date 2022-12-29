// problem: 11044 - Searching for Nessy
// Language: C++
// solved by: Tanbir Hossain Ramim
// Institution: SMUCT
// Batch: 29th
// ID: 221071034
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int firstNumber, secondNumber;
        cin >> firstNumber >> secondNumber;
        cout << (firstNumber / 3) * (secondNumber / 3) << endl;
    }
    return 0;
}
