<<<<<<< HEAD
#include<iostream>
using namespace std;
int main (){
    char ch;
    cin>>ch;
    switch (tolower(ch)){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        cout<<"Vowel" ; break;
    default:
    if(isalpha(ch)) cout <<"Consonant";
    else cout <<"Not alphabate";
    }
    return 0;
=======
#include<iostream>
using namespace std;
int main (){
    char ch;
    cin>>ch;
    switch (tolower(ch)){
        case 'a': case 'e': case 'i': case 'o': case 'u':
        cout<<"Vowel" ; break;
    default:
    if(isalpha(ch)) cout <<"Consonant";
    else cout <<"Not alphabate";
    }
    return 0;
>>>>>>> 71389b6cdb03b02d56bd4dbce0e8dc2ecf76e24f
}