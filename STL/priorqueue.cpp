#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;//declaring max heap
    maxi.push(1);
    maxi.push(12);
    maxi.push(0);
    maxi.push(21);

    int a=maxi.size();//size
    cout<<"MAX HEAP"<<endl;

    for(int i=0;i<a;i++){
        cout<<maxi.top()<<endl;
        maxi.pop();
    }

    //mini heap
    priority_queue<int,vector<int>, greater<int>> mini;
    mini.push(5);
    mini.push(0);
    mini.push(15);
    mini.push(1);

    int b=mini.size();
    cout<<"MINI HEAP"<<endl;

    for(int i=0;i<b;i++){
        cout<<mini.top()<<endl;
        mini.pop();
    }

    
    


}