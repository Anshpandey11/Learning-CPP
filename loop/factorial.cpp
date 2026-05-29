#include<iostream>
using namespace std;

int main(){
    int n,f=1;
    cin>>n;

    for(int i=0;i<=n-1;i++){
        f=f*(n-i);
    }
    cout<<f;
    return 0;
}