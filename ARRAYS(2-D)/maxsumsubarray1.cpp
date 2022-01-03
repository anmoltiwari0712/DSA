#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int maxsum=INT_MIN;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int sp=0;sp<n;sp++){
        for(int ep=sp;ep<n;ep++){
        int sum=0;
            for(int k=sp;k<=ep;k++){
                sum=sum+array[k];

            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;       
}