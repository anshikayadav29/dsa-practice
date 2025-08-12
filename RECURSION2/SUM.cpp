#include <bits/stdc++.h>
using namespace std;
int sumN(int n){return (n==0)?0:n+sumN(n-1);}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Sum = " << sumN(n);
}
