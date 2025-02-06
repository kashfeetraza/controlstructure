// program that takes an integer from the user and determines whether it is a multiple of both 3 and 5 using if.
#include<iostream>
using namespace std;
int main()
{
    int x;
    
    cout<<"Enter the Number:";
	cin>>x;
	
	if(x%3==0 && x%5==0){
		cout<<"The number is divided by both"<<endl;
	}else{
		cout<<"The number is not inturpted"<<endl;
	}
	
	return 0;
}
