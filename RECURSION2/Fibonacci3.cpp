#include <bits/stdc++.h>
using namespace std;
int fib(int n){return (n<=1)?n:fib(n-1)+fib(n-2);}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Fibonacci = " << fib(n);
}
