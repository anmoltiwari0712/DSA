#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int sp=0;sp<n;sp++){
        for(int ep=sp; ep<n; ep++){
            for(int k=sp;k<=ep;k++){
                cout<<array[k]<<" ";
            
            
            }
            cout<<endl;
            
        }
    }
}