#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;///n1xn2 aur n2xn3 will be the two input matrix
    cin>>n1>>n2>>n3;
    int a[n1][n2];//n1 rows, n2 column
    int b[n2][n3];//n2 rows, n3 column

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){///taking matrix a as input
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){///taking matrix b as input
            cin>>b[i][j];
        }
    }

    int ans[n1][n3];//newmatrix of order n1xn3
    ///for loop for entering 0 in matrix

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;//assigning whole matrix as 0
        }
    }


    for(int i=0;i<n1;i++){///iterating over rows of matrix 1
        for(int j=0;j<n3;j++){///iterating over columns of matrix 1
            for(int k=0;k<n2;k++){///matrix a ke  columns aur matrix b ke rows equal hai
                ans[i][j]+=a[i][k]*b[k][j];//a[i][k]bcoz we have used i to iterate over row and k to column 
            }

        }
    }
///n1 row hai matrix a ki 
//n3 column hai matrix b ki 
//aur since n2 dono matrix me equal hai so we are using it in 3rd loop
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }




    
}