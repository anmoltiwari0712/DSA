#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int key;
    int array[n][m];
    cout<<"ENTER KEY: ";
    cin>>key;

    bool flag;
    flag=false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
        
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(array[i][j]==key){   
                cout<<i<<" "<<j<<"\n";
                flag=true;
                

            
            }
            
        }
        
    }
    if(flag){
        cout<<"element found";
        
    }
    else{
        cout<<"element not found";
    }
    
}