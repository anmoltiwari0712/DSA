#include<iostream>
using namespace std;
int main(){
    int r;
    int c;
    cout<<"ENTER THE NUMBER OF ROWS "<<endl;
    cin>>r;
    cout<<"ENTER THE NUMBER OF COLUMNS "<<endl;
    cin>>c;
    for(int i=1;i<=r;++i){
        for(int j=1;j<=c;++j){
            if(i==1 || i==r || j==1 || j==c){//Print star for first or last row or for first or last column,
                cout<<"*";//otherwise print blank space.
        
                
            }
            else{
                cout<<" ";
            }

            }
            cout<<endl;
        }
        return 0;
        
        
    }
    

 