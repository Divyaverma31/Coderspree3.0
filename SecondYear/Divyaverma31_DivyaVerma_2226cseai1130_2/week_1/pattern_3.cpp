#include<iostream>
using namespace std;

int main(){
    int n;
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}