<<<<<<< HEAD
#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp =x;
    x =y;
    y=temp;
}
int main (){
    int a =2, b=3;
    swap (a, b);
    cout<<"After swap: a ="<< a<<", b=" <<b;
    return 0;
}
=======
#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp =x;
    x =y;
    y=temp;
}
int main (){
    int a =2, b=3;
    swap (a, b);
    cout<<"After swap: a ="<< a<<", b=" <<b;
    return 0;
}
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
