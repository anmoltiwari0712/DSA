#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    
    cout<<"ENTER ANY NUMBER "<<endl;
    cin>>n;


    int originaln=n;
    int sum=0;

    while(n>0){
        int lastdigit= n%10;
        sum= sum + lastdigit * lastdigit * lastdigit;
        n=n/10;
    } 

    if(sum==originaln){
        cout<<"ARMSTRONG NUMBER"<<endl;

    }
    else{
        cout<<"NOT AN ARMSTRONG NUMBERV"<<endl;

    }


    
    return 0;
}