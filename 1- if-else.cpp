// program to check if a number entered by the user is positive, negative, or zero using if-else.
#include<iostream>
using namespace std;
int main( ){
	int x;
	cout<<"Enter the number:"<<endl;
	cin>>x;
	
	if(x>0){
		cout<<"The number is positive."<<endl;
		
	}else{
		cout<<"The number is negative."<<endl;
	}
	
	return 0;
}
