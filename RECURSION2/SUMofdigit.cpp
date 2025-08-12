#include <bits/stdc++.h>
using namespace std;
int sumDig(int n){return (n==0)?0:n%10+sumDig(n/10);}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Sum of digits = " << sumDig(n);
}
