#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    string str2;
    getline(cin,str);
    int a=str.length();
    
    
    for(int i=a;i>=0;i--){
        str2=str2+str[i];
    }
    cout<<str2;
    
    //for(int i=size(str);i>=0;i++){

    //}
}