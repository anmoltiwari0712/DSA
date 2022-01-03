#include<iostream>
using namespace std;
int main(){
    int choice;
    float ftemp,ctemp;
    cout<<"WELCOME TO TEMPERATURE CONVERSION SCREEN"<<endl;
    cout<<"1. FAHRENHEIT TO CELSIUS"<<endl;
    cout<<"2. CELSIUS TO FAHRENHEIT"<<endl;
    cout<<"ENTER YOUR CHOICE "<<endl;
    cin>>choice;
    if(choice==1){
        cout<<"ENTER TEMPERATURE IN FAHRENHEIT "<<endl;
        cin>>ftemp;
        cout<<"CONVERTED TEMPERATURE IN CELSIUS "<<(ftemp - 32)/1.8<<endl;

    }
    else{
        cout<<"ENTER TEMPERATURE IN CELSIUS "<<endl;
        cin>>ctemp;
        cout<<"CONVERTED TEMPERATURE IN FAHRENHEIT "<<1.8*ctemp+32<<endl;

    }
    return 0;

}