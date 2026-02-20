#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
    long long int num = 0;
    while(n != 0){
        num = num*10 + n%10;
        n /= 10;
    }
    // To check reversing doesn't make the number go out of range
    if(num > INT_MAX || num < INT_MIN)
        return 0;
    return num;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Reversed Number: " << reverse(n) << endl;
    return 0;
}