#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(5);
    d.push_front(1);
    d.push_front(7);
    d.push_back(8);
    d.pop_front();

    int a=d.size();
    cout<<"No of elements in deque  -> "<<a<<endl;
    cout<<"Elements are -> "<<endl;
    for(int i=0;i<a;i++){
        cout<<d[i]<<endl;
    }

    cout<<"first element is ->"<<d.front()<<endl;
    cout<<"last element is ->"<<d.back()<<endl;

    cout<<"element at 2nd index is ->"<<d.at(2)<<endl;

    cout<<d.empty();
    d.erase(d.begin(),d.end()-1);

    

}