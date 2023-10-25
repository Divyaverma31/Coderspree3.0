#include<iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    if(a>b){
		cout<<"greater";
	}
	else if (a<b){
		cout<<"smaller";
	}
	else if(a==b){
		cout<<"equal";
	}
	return 0;
}

