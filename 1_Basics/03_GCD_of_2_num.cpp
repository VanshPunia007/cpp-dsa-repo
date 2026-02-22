#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if(a > b)
            a = a%b;
        else
            b = b%a;
    }
    return max(a,b);
}

int main() {
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << ": " << gcd(a,b) << endl;
    return 0;
}