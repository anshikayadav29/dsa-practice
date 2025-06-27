#include<iostream>
using namespace std;

bool isEven(int num){
    return num %2 ==0;
}
int main(){
    int n =10;
    cout<<(isEven(n) ? "Even" : "odd");
    return 0;

}