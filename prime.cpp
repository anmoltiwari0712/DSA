#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER ANY NUMBER "<<endl;
    cin>>n;

    bool flag=0;
    for(int i=2; i<n; i++){
        if(n%i==0){
            cout<<"NON PRIME"<<endl;
            flag = 1;
            break;
        }
    }

    if(flag==0){
        cout<<"PRIME"<<endl;
    }
    return 0; 
}