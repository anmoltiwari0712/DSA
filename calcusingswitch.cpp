#include<iostream>
using namespace std;

int main(){
    int a,b;
    char opt;
    cout<<"ENTER ANY TWO NUMBERS "<<endl;
    cin>>a>>b;
    cout<<"ENTER THE OPERATOR "<<endl;
    cout<<"(+,-,*,/)"<<endl;
    cin>>opt;

    switch(opt)
    {
    case '+':
        cout<<a+b<<endl;
        break;

    case '-':
        cout<<a-b<<endl;
        break;

    case '*':
        cout<<a*b<<endl;
        break;

    case '/':
        cout<<a/b<<endl;
        break;


    default:
        cout<<"I AM STILL LEARNING MORE..PLS WAIT FOR ME TO GET UPDATED "<<endl;
        break;
    }
}