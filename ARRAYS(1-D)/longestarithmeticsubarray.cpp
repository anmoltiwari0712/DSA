#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];

    }

    int ans=2;///since an arithmetic subarray is an array which contains 
    //atleast two elements
    int pd=array[0]-array[1];
    int i=2;//i is the iterator which we are going to use.
    //it begins with 2 since we have already checked for first two elements
    int curr=2;

    while(i<n){

        if(array[i]-array[i-1]==pd){
            curr++;

        }
        else{
            pd=array[i]-array[i-1];
            curr=2;
        }
        ans=max(ans,curr);
        i++;
    }
    cout<<ans<<endl;
    return 0;
}