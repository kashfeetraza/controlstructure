// program to print the multiplication table of a number entered by the user using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    
    for(int i=1;i<=10;i++){
    	cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
	return 0;
}
