#include<iostream>
using namespace std;
int main (){
    int sp;
    int cp;
cout<<"enter Cost Price:";
cin>>cp;
cout<<"enter Selling Price:";
cin>>sp;

    if(cp<sp){
        cout<<"profit is:"<<(sp-cp)<<"Rs"<<endl;
        }
    else if(cp>sp){
        cout<<"loss is:"<<(cp-sp)<<"Rs"<<endl;
        }
       else {
            cout<<"no profit no loss";
        }
  
}
