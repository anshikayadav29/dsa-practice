#include <bits/stdc++.h>
using namespace std;

void print1(int n){}
void print2(int n){}
void print3(int n){}
void print4(int n){}
void print5(int n){}
void print6(int n){}
void print7(int n){}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        for(int i = 0; i < n; i++) {
            // Print leading spaces
            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }

            // Print stars
            for(int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }

            // Move to next line
            cout << endl;
        }
    }
    return 0;
}