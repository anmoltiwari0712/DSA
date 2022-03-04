#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(7);
    l.push_front(1);
    int a=l.size();
    cout<<"no of elements -> "<<a<<endl;
    
    //l.pop_back();
    cout<<"elements  are ->"<<endl;
    for(int i:l){
        cout<<i<<endl;
    }
    //cout<<l.front();
    cout<<l.empty();
}