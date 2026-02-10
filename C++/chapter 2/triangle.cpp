#include<iostream>
using namespace std;
int main (){
    int x , y , z ;
     cout<<"enter first side x :";
    cin>>x;
    cout<<"enter second side y :";
    cin>>y;
    cout<<"enter third side z :";
    cin>>z;
    if(x + y > z and y + z > x and x + z > y){
        cout<<"these is a triangle";

    }
    else{
        cout<<"these is not a triangle";
    }
}