#include<iostream>
using namespace std;
int main (){
    int length;
    int width;
 cout<<"enter Length:";
 cin>>length;
 cout<<"enter widht:";
 cin>>width;
 cout<<"the perimeter of rectangle is :"<<2*(length + width)<<endl;
 cout<<"the area of rectangle is :"<<length * width<<endl;
 int perimeter=2*(length + width);
 int area = length * width ;
 if (area > perimeter){
    cout<<"area of rectangle is greater than its perimeter"<<endl;

 }
 else{
    cout<<"perimeter is greater"<<endl;
 }
}               