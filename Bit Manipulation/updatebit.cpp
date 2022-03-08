int updatebit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n & mask;
    return(n | (value<<pos));

}
#include<iostream>
using namespace std;
int main(){
    cout<<updatebit(5,2,0);
}