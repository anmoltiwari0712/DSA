#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    char array[n+1];
    cin>>array;

    bool check=true;

    for(int i=0;i<n;i++){
        if(array[i]!=array[n-i-1]){
            check=false;
        }
        
    }
    if(check==true){
        cout<<"palindrome";
    }
    else{
        cout<<"not a palindrome"; 
    }


}