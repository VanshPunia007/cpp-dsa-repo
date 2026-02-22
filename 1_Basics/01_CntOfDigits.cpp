#include <bits/stdc++.h>
using namespace std;

int DigitCount(int n)
{
    // Brute force
    // int cnt = 0;
    // while (n > 0)
    // {
    //     cnt++;
    //     n /= 10;
    // }
    // return cnt;

    // Optimal
    return int(log10(n)+1);
}

int main()
{
    // brute force
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Number of digits: " << DigitCount(n) << endl;
    return 0;
}