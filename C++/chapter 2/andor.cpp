#include<iostream>
using namespace std;
int main (){
    int x;
cout<<"enter your number:";
    cin>>x;
    if(x%5==0 || x%3==0){
        cout<<x<<"number is divisible by 5 and 3";
    }
    else{
        cout<<x<<"number is not divisible by 5 and 3";
    }
}