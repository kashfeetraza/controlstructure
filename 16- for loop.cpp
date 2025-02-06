// 16.	Write a program to check whether a number is prime or using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter The Number:";
    cin>>n;
    
    for(int i=1;i<=n;i++){
    	if(n%i==0){
    		count++;
    		
		}
	}
	if(count==2){
		cout<<"is the prime number";
	}else{
		cout<<"is not the prime number";
	}
    
	return 0;
}
