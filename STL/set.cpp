#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(12);
    s.insert(2);
    s.insert(21);
    s.insert(15);
    s.insert(121);
    s.insert(12);
    s.insert(2);

    int a=s.size();
    cout<<"Before erasing -> "<<endl;

    for(int i:s){
        cout<<i<<endl;
    }
    cout<<"   "<<endl;

    cout<<"After erasing -> "<<endl;


    

    //setting iterator to use erase function

    set<int>::iterator it=s.begin();//iterator is at intial location
    it++;//we use it to increment iterator by +1
    s.erase(it);

    for(int i:s){
        cout<<i<<endl;
    }
    cout<<"   "<<endl;

    cout<<"21 is present or not: "<<s.count(21)<<endl;
    cout<<"   "<<endl;
    cout<<"5 is present or not: "<<s.count(5)<<endl;

}