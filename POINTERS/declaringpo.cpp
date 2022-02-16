#include<iostream>
using namespace std;
int main(){
    int a=10;
    int*apotr=&a;
    cout<<apotr<<endl;
    apotr++;
    cout<<apotr;

}