#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];


    for(int i=0;i<n;i++){
        cin>>array[i];
    }


    int cumsum[n+1];//cumsum is cummulative sum array
    cumsum[0]=0;
    int maxsum=INT_MIN;

    ///for loop for creating cumulative sum array

    for(int i=1;i<=n;i++){
        cumsum[i]=cumsum[i-1]+array[i-1];
    }

    ///for loop to find maxsum

    for(int i=1;i<=n;i++){
        int sum=0;
        
        for(int j=1;j<=i;j++){
            sum=cumsum[i]-cumsum[j-1];
            maxsum=max(maxsum,sum);
        }

        
    }
    cout<<maxsum<<endl;
    
    

}

