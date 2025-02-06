// program to calculate the sum of digits of a number using a while loop.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,digit;
    cout<<"Enter The Number:";
    cin>>n;
    
    while(n>0){
    	digit=n%10;
    	sum=sum+digit;
    	n/-10;
	}
	cout<<"The sum of digits:"<<sum<<endl;
    
	return 0;
}
