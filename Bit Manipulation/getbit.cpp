int getbitl(int n, int pos){//gets bit after shifting using left operator
    return (n<<pos)&1;
}
int getbitr(int n, int pos){//gets bit after shifting using right operator
    return (n>>pos)&1;
}
#include<iostream>
using namespace std;
int main(){
    cout<<getbitr(7,2);
}