#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int sum =0;
    for(int i=0; i<5; i++)sum +=arr[i];
    cout<<"Sum: "<<sum <<sum <<endl;
    cout<<"Average: "<<sum/5.0;
    return 0;
}