#include<iostream>
#include<Algorithm>
#include<vector>

using namespace std;
int main(){
    
    vector<int> v;
    v.push_back(23);
    v.push_back(0);
    v.push_back(3);
    v.push_back(45);
    v.push_back(20);
    v.push_back(3);

    cout<<"Finding 45 using binary search:  "<<binary_search(v.begin(),v.end(),45)<<endl;
    cout<<" "<<endl;
    //max and min functions

    int a=4;
    int b=12;
    cout<<"Maximum element is: "<<max(a,b)<<endl;
    cout<<" "<<endl;
    cout<<"Minimum element is: "<<min(a,b)<<endl;
    cout<<" "<<endl;

    //swapping a and b
    cout<<"A and b before swapping: "<<endl;
    cout<<"a ->"<<a<<endl;
    cout<<"b ->"<<b<<endl;
    swap(a,b);
    cout<<" "<<endl;

    cout<<"A and b before swapping: "<<endl;
    cout<<"a ->"<<a<<endl;
    cout<<"b ->"<<b<<endl;

    //reversing a string
    cout<<" "<<endl;

    string str="abdefu";
    cout<<"String before reversing: ->"<<endl;
    cout<<str<<endl;
    cout<<" "<<endl;
    cout<<"String after reversing: ->"<<endl;
    reverse(str.begin(),str.end());
    cout<<str<<endl;
    cout<<" "<<endl;

    //rotating 

    rotate(v.begin(),v.begin()+1,v.end());//rotates by 1 element
    cout<<"Elements after rotating: "<<endl;
    for(int i:v){
        cout<<i<<endl;
    }


    




}