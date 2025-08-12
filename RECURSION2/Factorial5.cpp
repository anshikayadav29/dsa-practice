#include <bits/stdc++.h>
using namespace std;

unsigned long long fact_iter(int n){
    unsigned long long res = 1;
    for(int i = 2; i <= n; ++i) res *= i;
    return res;
}

int main(){
    int n; if(!(cin >> n)) return 0;
    cout << fact_iter(n) << '\n';
}

