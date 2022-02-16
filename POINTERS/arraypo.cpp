#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,3};
    cout<<arr<<endl;//output will be address of first element
    cout<<&arr[0]<<endl;
    cout<<"**********"<<endl;
    //cout<<*arr[2];  this cannot be done as it will result an error

    //arr[i]=*(arr+i)
    cout<<*(arr+2)<<endl;//prints element at 2nd index
    cout<<*(arr+1)<<endl;//prints element at 1st index

}