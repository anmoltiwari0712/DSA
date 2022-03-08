int clearbit(int n,int pos){
    int mask=~(1<<pos);
    return(n & mask);
}
#include<iostream>
using namespace std;
int main(){
    cout<<clearbit(5,2);

}