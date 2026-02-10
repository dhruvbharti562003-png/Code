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
    if(a<b){
     if(a<c){
        cout<<"Ram is youngest";
     }
     else{
        cout<<"Ajay is youngest";
     }
}
else{//b<a
    if(b<c){
        cout<<"Shyam is youngest";
    }
    else{
        cout<<"Ajay is youngest";
    }
}
}