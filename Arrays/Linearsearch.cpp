#include<iostream>
using namespace std;
int main(){
    int arr[] ={4,7,1,3,9};
    int key =3;
    bool found =false;

    for(int i=0; i<5; i++){
        if (arr[i] ==key){
            found =true;
            break;
        }
    }
    cout<<(found ? "Element Found" :"Not Found");
         return 0;
      }