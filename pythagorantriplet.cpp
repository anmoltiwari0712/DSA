#include<iostream>
using namespace std;


bool check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if (a==x){
        b=y;
        c=z;
    }
    else if (a==y){
        b=x;
        c=z;

    }
    else if (a==z){
        b=x;
        c=y;
    }

    if(a*a == b*b + c*c ){
        return true;
        
    }
    else{
        return false;
    }
}
int main(){
    bool ans;
    int p;
    int q;
    int r;
    cin>>p>>q>>r;
    ans=check(p,q,r);
    if (ans==true){
        cout<<"pythagoran";

    }
    else{
        cout<<"not";
    }


}