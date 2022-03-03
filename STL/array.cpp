#include<iostream>
#include<array>//to use stl array
using namespace std;
int main(){
    array<int,6> ar={1,2,3,4,5,6};
    int z=ar.size();
    cout<<"Size of array -> "<<z<<endl;
    cout<<"Element at 2nd index -> "<<ar.at(2)<<endl;
    cout<<"empty or not ->"<<ar.empty()<<endl;
    cout<<"First element ->"<<ar.front()<<endl;
    cout<<"Last element ->"<<ar.back()<<endl;


}