#include<iostream>
using namespace std;
void reverse(int n,char array[]){
    for(int i=0;array[i]!='\0';i++){
        cout<<array[n-i-1];
    }

}
int main(){
    int n;
    cin>>n;
    char array[n+1];
    cin>>array;

    reverse(n,array);


}