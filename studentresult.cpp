#include<bits/stdc++.h>
using namespace std;
int main () {
    int marks;
    cout<<"Enter your marks";
    cin>>marks;
    if(marks<50){
        cout<<"you are fail in the exam ";
    }
     else if(marks<70){
        cout<<"you are pass in the exam ";
    }
     else if(marks<80){
        cout<<"you are very good astudent";
    }
    else{
    cout<<"you are good student ";
    }
    
    return 0;

}
