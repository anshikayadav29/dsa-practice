#include <bits/stdc++.h>
using namespace std;

void print1(int n){}
void print2(int n){}
void print3(int n){}
void print4(int n){}
void print5(int n){}
void print6(int n){}
void print7(int n){}
void print8(int n){}
void print9(int n){}
void print10(int n){}
void print11(int n){}
void print12(int n){}
void print13(int n){}
void print14(int n){}
void print15(int n){}
void print16(int n){}
void print17(int n){}
void print18(int n){}
void print19(int n){}
void print20(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == i || j == n - i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        print20(n);  
    }
    return 0;
}