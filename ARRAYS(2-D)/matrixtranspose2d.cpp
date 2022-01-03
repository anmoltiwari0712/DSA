#include<iostream>///works for both sqaure and rectangle matrix
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int array[n][m];//n is row and m is column
    int trans[m][n];//m is row and n is column

    for(int i=0;i<n;i++){//creating 2d array
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            trans[j][i] = array[i][j];
        }//swapping i,j and inserting in new array trans[j][i]
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<"  ";
        }
        cout<<"\n";
    }
}