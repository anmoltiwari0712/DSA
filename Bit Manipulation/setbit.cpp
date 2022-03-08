int setbitl(int n,int pos){
    return ((n | 1<<pos));
}
int setbitr(int n,int pos){
    return ((n | 1>>pos));
}
#include<iostream>
using namespace std;
int main(){
    cout<<setbitl(7,3);
}