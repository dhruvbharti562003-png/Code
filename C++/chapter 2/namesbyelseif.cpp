#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter Ram age:";
    cin>>a;
    cout<<"enter Shyam age:";
    cin>>b;
    cout<<"enter Ajay age:";
    cin>>c;
    if(a<b and a<c){
        cout<<"Ram is youngest";

    }
    else if( b<a and b<c){
        cout<<"Shyam is youngest";
    }
    else{
        cout<<"Ajay is youngest";
    }
    
}