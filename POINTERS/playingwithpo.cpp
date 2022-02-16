#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *poi=&a;
    cout<<&a<<endl;
    cout<<*poi<<endl;
    
    cout<<"pointer arithmetic...."<<endl;

    int num=89;
    int *ptr=&num;
    cout<<"before...."<<endl;
    cout<<*ptr<<endl;
    cout<<&num<<endl;
    (*ptr)++;//updating value of a using pointer
    cout<<"after...."<<endl;
    cout<<*ptr<<endl;
    cout<<&num<<endl;



}