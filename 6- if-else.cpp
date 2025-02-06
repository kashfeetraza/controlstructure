// program to check whether a character entered by the user is a vowel or consonant using if-else.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter Character:";
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		cout<<"This Alphabet is vowel"<<endl;
	}else {
		cout<<"This Alphabet is conconet";
	}
	
	return 0;
}
