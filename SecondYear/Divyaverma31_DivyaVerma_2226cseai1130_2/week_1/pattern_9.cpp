   #include <iostream>
using namespace std;

int main(){

int n,i,j;
   
   
   cin >> n;

    // Print the pyramid upwards
    for (int i = 1; i <= n; i++) {
       for(j=n;j>=i;j--){
            cout<<"*";
        }
        for(j=i;j>1;j--){
            cout<<" ";
        }
        for(j=i;j>1;j--){
            cout<<" ";
        }
        for(j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    // Print the pyramid downwards
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=n;j>i;j--){
            cout<<" ";
        }
        for(j=n;j>i;j--){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }


};