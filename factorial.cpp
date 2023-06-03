#include<bits/stdc++.h>
using namespace std;
int factorial(int n,int f = 1) {
    if(n == 0) return f;
    return factorial(n-1,f*n);
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "The factorial of " << n << "is " << factorial(n) << endl;
}
