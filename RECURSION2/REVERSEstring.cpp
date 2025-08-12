#include <bits/stdc++.h>
using namespace std;
void rev(string &s,int i){if(i<0)return;cout<<s[i];rev(s,i-1);}
int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << "Reversed = ";
    rev(s,s.size()-1);
}
