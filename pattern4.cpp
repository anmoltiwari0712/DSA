#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"ENTER THE NUMBER OF ROWS";
    cin>>r;
    for(int i=r;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }   
        cout<<endl;
    }
    return 0;
}