//program to check whether an is uppercase, entered character lowercase, digit, or special symbol using multiple if-else.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter the Number:";
	cin>>ch;
	
	if(ch>='A'&& ch<='Z'){
		cout<<"The given character is Upper case"<<endl;
	} else if(ch>='a' && ch<='z'){
		cout<<"The given character is Lower case"<<endl;
	}else if(ch>='0' && ch<='9'){
		cout<<"The given character is Numaric"<<endl;
	}else{
		cout<<"The given character is Symbol";
	}
	return 0;
}
