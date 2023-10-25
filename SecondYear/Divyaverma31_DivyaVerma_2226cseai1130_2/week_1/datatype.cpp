#include<iostream>
using namespace std;

int main() {
	char type;
	cin>>type;
	if(type==Integer){
		 cout<<"4";
	}
	else if(type==Float){
		 cout<<"8";
	}
	else if(type==Long){
		 cout<<"4";
	}
	else if(type==Double){
		 cout<<"8";
	}
	else if(type==Character){
		 cout<<"1";
	}
	return 0;
}
