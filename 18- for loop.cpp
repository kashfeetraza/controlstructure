//program to print the Fibonacci series up to n terms using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n,first=0,second=1,next;
    cout<<"Enter The Number:";
    cin>>n;
     
     cout<<"Fabarconnic series"<<endl;
     
     for(int i=1;i<=n;i++){
     	cout<<first<<endl;
     	next=first+second;
     	first=second;
     	second=next;
	 }
	 cout<<endl;
}