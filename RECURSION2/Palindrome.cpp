#include <bits/stdc++.h>
using namespace std;
bool pal(string s,int l,int r){return (l>=r)?1:(s[l]==s[r] && pal(s,l+1,r-1));}
int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << (pal(s,0,s.size()-1)?"Palindrome":"Not Palindrome");
}
