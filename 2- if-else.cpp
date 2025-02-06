// program that takes a number as input and checks whether it is even or odd using if-else.
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number:"<<endl;
	cin>>x;
	
	if(x%2==0){
		cout<<"The number is even"<<endl;
		
	}else{
		cout<<"The number is odd"<<endl;
	}
	
	return 0;
}
