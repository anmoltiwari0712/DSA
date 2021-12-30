#include<iostream>
using namespace std;
 
 int main(){
     int sidea,sideb,sidec;
     cin>>sidea>>sideb>>sidec;

     if(sidea==sideb && sideb==sidec){
         cout<<"THE TRIANGLE IS EQUILATERAL"<<endl;
     }
  
    else if(sidea==sideb || sideb==sidec || sidea==sidec){
        cout<<"THE TRIANGLE IS ISOCELES"<<endl;
    }
    else{
        cout<<"THE TRIANGLE IS SCALENE"<<endl;
    }
    return 0;
 }