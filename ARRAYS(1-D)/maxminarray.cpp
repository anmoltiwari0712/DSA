#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    

    int array[n];

    for(int i=0; i<n; i++ ){
        cin>>array[i];
    }
    

    int maxno = array[0];
    int minno = array[0];
    
    for(int i=0; i<n; i++){
        maxno=max(maxno, array[i]);
        minno=min(minno, array[i]);
    }
    cout<<"MAX IS "<<maxno<<endl;
    cout<<"MIN IS "<<minno<<endl;

    return 0;
    

}