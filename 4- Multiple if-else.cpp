/*a program that asks the user to enter marks and determines the grade using multiple ifelse: 
• Marks ≥ 90: Grade A 
• Marks ≥ 80: Grade B 
• Marks ≥ 70: Grade C 
• Marks ≥ 60: Grade D 
• Otherwise: Fail
*/
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number:"<<endl;
	cin>>x;
	
	if(x>=90){
		cout<<"Congratulation you are getting A grade:"<<endl;
		
	}else if(x>=80){
		cout<<"Congratulation you are getting B grade:"<<endl;
		
	}else if(x>=70){
		cout<<"Congratulation you are getting C grade:"<<endl;
		
	}else if(x>=60){
		cout<<"Congratulation you are getting D grade:"<<endl;
		
	}else{
		cout<<"Congratulation you are fail"<<endl;
	}
	
	return 0;
}
