//program to find the largest of three numbers using if-else.
#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter the 1 number:"<<endl;
	cin>>x;
	
	cout<<"Enter the 2 number:"<<endl;
	cin>>y;
	
	cout<<"Enter the 3 number:"<<endl;
	cin>>z;
	
	if(x>y && x>z){
		cout<<"The number 1 is largest"<<endl;
		
	}else if(y>x && y>z){
		cout<<"The number 2 is largest"<<endl;
	}else {
		cout<<"The number 3 is largest"<<endl;
	}
	
	return 0;
}
