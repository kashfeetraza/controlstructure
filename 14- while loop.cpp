//program to print the factorial of a number using a while loop
#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1,i;
    cout<<"Enter The Number:";
    cin>>n;
    
    i=n;
    while(i>0){
    	factorial=factorial*i;
    	i--;
	}
    
   cout<<"The factorial of"<<n<<"is"<<factorial<<endl;
	return 0;
}
