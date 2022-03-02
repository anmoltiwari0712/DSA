#include<iostream>
#include<string>
#include<algorithm>
//to include builtin sort algo
using namespace std;
int main(){
    string str="ufedcba";
    cout<<str<<endl;
    sort(str.begin(),str.end());
    cout<<str;


}
