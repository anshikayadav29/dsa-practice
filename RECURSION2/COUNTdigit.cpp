#include <bits/stdc++.h>
using namespace std;
int countDig(int n){return (n==0)?0:1+countDig(n/10);}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Digits = " << countDig(n);
}
