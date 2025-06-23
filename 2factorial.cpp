#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, fact =1;
    cin>> n;
    int i=1;
    do{
        fact *=i++;
    }
    while (i<=n);
    cout<<fact;
    return 0;
}