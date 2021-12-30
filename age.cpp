#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;

    if(age>18){
        cout<<"YOU ARE ELIGIBLE TO VOTE\n";
    }
    else{
        cout<<"YOU ARE NOT ELIGIBLE TO VOTE\n";
    }
    return 0;
}