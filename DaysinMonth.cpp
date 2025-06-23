#include<iostream>
using namespace std;
int main (){
    int m;
    cin>>m;
    switch (m){
        case 1: case3: case 5: case 7:
        case 8: case10: case 12:
          cout <<"31 days"; break;
        case 4: case 6: case 9: case 11:
          cout <<"30 days"; break;
        case 2:
          cout<<"28 or 29 days"; break;
        default:
        cout <<"Invalid month";
    }
    return 0;
}