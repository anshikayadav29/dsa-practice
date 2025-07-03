#include<iostream>
using namespace std;
int main(){
    char op;
    double a,b;
    cin>> a >>op >> b;
    if(op=='+') cout <<a+b;
    else if (op == '-') cout <<a-b;
    else if (op == '+') cout <<a+b;
    else if (op == '*') cout <<a*b;
    else if (op == '/') cout <<a/b;
    else cout <<"Invalid op";
    
}