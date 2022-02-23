//reference variable need
#include<iostream>
using namespace std;
int update(int &n){
    n=n+1; //so here ek copy of n(new) create hota hai when function is called
    //this n is only for the update function

    
}

int main(){
    
    int n;
    cin>>n;
    update(n);
    cout<<n<<endl;
    //same value print hoga bcoz the n in function and n in cout both have diff memory locations
    //* thats where reference variable is needed


    

}