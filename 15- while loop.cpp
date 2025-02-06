// program to reverse a given number using a while loop.
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter The value:";
    cin>>n;
    
    while(n>0){
    	rev=rev*10+n%10;
    	n=n/10;
	}
	cout<<"The reverse number is:"<<rev<<endl;
	
	return 0;
}
