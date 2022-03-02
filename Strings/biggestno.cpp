#include<iostream>
#include<string>
#include<Algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    //less, greater are builtinfunctions of stl
    sort(str.begin(),str.end(),greater<int>());
    cout<<str;

}