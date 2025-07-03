#include<bits/stdc++.h>
using namespace std;

void print1(int n){}
void print2(int n){}
void print3(int n){}
void print4(int n){}
void print5(int n){}
void print6(int n){}
void print7(int n){}
void print8(int n){
    int start = -1;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0)
            start = 1;
        else
            start = 0;

        for(int j = 0; j <= i; j++){
            cout << start;
            start = 1 - start;
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
        print8(n); 
    }
    return 0;
}