#include<iostream>
using namespace std;

int main(){
    char c;

    int islowercasevowel, isupprecasevowel;
    cout<<"ENTER THE ALPHABET"<<endl;
    cin>>c;


    islowercasevowel=(c=='a' || c=='e' || c=='i' ||c=='o' || c=='u');
    isupprecasevowel=(c=='A' || c=='E' || c=='I' ||c=='O' || c=='U');


    if(isupprecasevowel || islowercasevowel){
        cout<<c<<"IS A VOWEL"<<endl;

    }
    else{
        cout<<c<<"IS A CONSONANT"<<endl;


    }
    

    

 return 0;
}