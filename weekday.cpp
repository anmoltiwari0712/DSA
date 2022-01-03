#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"ENTER THE DAY BETWEEN 1-7"<<endl;
    cin>>day;
    if(day==1){
        cout<<"IT'S SUNDAY "<<endl;
    }
    else if(day==2){
        cout<<"IT'S MONDAY "<<endl;

    }
    else if(day==3){
        cout<<"IT'S TUESDAY "<<endl;

    }
    else if(day==4){
        cout<<"IT'S WEDNESDAY "<<endl;

    }
    else if(day==5){
        cout<<"IT'S THURSDAY "<<endl;

    }
    else if(day==6){
        cout<<"IT'S FRIDAY "<<endl;

    }
    else if(day==7){
        cout<<"IT'S SATURDAY "<<endl;

    }
    else{
        cout<<"PLEASE ENTER A VALID NUMBER"<<endl;
    }
    return 0;

}