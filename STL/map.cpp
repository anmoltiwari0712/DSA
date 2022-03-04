#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m.insert({1,"Love"});
    m.insert({2,"babbar"});
    m.insert({3,"yash"});
    m.insert({4,"garg"});
    m.insert({5,"nishant"});
    m.insert({6,"chahar"});
    m.insert({7,"badal"});
    cout<<"Values in the Map are before erasing: "<<endl;
    cout<<" "<<endl;

    for(auto i:m){
        cout<<i.first<<"  ->   "<<i.second<<endl;
    }
    m.erase(7);
    cout<<"Values in the Map are after erasing: "<<endl;
    cout<<" "<<endl;

    for(auto i:m){
        cout<<i.first<<"  ->   "<<i.second<<endl;
    }
    cout<<" "<<endl;

    cout<<"13 is present or not in map: -> "<<m.count(13)<<endl;

    cout<<" "<<endl;

    cout<<"13 is present or not in map: -> "<<m.count(5)<<endl;


}
    