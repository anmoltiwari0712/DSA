#include<iostream>
using namespace std;
int main(){
    char cxc[6]="abcde";//one extra for null character
    cout<<cxc<<endl;//prints whole abcde
    cout<<"cout implementation for char arrays varies"<<endl;
    cout<<cxc[0]<<endl;
    cout<<"Now using pointers......"<<endl;
    char *x=&cxc[0];
    cout<<x<<endl;//prints entire string instead of printing address





}