#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;//declaring a vector v
    v.push_back(4);//adding element 3 to vector v
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    cout<<"    "<<endl;
    
    int a=v.size();//returns no of elements in vector
    cout<<"no of elements in vector -> "<<a<<endl;
    cout<<"    "<<endl;

    cout<<"elements are ->"<<endl;
    for(int i=0;i<a;i++){
        cout<<v[i]<<endl;
    }
    cout<<"    "<<endl;

    cout<<"capacity of v is -> "<<v.capacity()<<endl;//memory alloted to v
    cout<<"    "<<endl;
    cout<<"First element of v is -> "<<v.front()<<endl;
    cout<<"    "<<endl;
    cout<<"Last element of v is -> "<<v.back()<<endl;
    cout<<"    "<<endl;
    cout<<"Element at 2nd index is -> "<<v.at(2)<<endl;
    cout<<"    "<<endl;
    



    


}
