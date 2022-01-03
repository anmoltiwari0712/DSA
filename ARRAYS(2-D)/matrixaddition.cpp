#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array1[n][n];
    int array2[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){///taking matrix a as input
            cin>>array1[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){///taking matrix b as input
            cin>>array2[i][j];
        }
    }
    int ans[n][n];//newmatrix of order n1xn3

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]=0;//assigning whole matrix as 0
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j]+=array1[i][j]+array2[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}