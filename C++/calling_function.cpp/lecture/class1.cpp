#include<iostream>
using namespace std;
int main(){
    int kthfactor(int n, int k){
        int cnt = o;
        for (int i=1;i<=n;i++){
            if (n%i==0){
                cnt++;
                if(cnt==k){
                    return i;
                }
            }
        }
        return -i;
    }
}