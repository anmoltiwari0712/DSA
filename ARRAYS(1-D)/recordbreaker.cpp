#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    int counter=0;
    int mx=-1;

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    if(n==1){
        counter=1;//agar ek hi din input diya toh
    }
    else{

        for(int i=0;i<=n;i++){
            if(array[i]>mx && array[i]>array[i+1]){
                counter++;
                mx=max(mx,array[i]);
            }
        }


    
        
    }
    cout<<"no of days"<<counter;

    
}