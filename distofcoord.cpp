#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int distance;
    int x1,y1,x2,y2;
    cout<<"ENTER COORDINATES(X,Y) OF POINT 1"<<endl;
    cin>>x1>>y1;
    cout<<"ENTER COORDINATES(X,Y) OF POINT 2"<<endl;
    cin>>x2>>y2;
    cout<<"DISTANCE BETWEEN TWO POINTS IS "<<sqrt((x1-x2)*(x1-x2)+(y2-y1)*(y2-y1))<<" UNITS"<<endl;





    return 0;
}