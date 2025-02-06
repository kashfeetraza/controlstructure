/*program to calculate the electricity bill based on the following conditions: 
•	Up to 100 units: ₹5 per unit 
•	101 to 300 units: ₹7 per unit
•	Above 300 units: ₹10 per unit 
•	Display the total bill.
*/
           #include<iostream>
using namespace std;
int main()
{
	int bill,unit;
	
	cout<<"Enter Unit:";
	cin>>unit;
	
	if(unit<=100){
		bill=unit*5;
		cout<<"Total Bill is:"<<bill;
	}else if(unit<=200){
		bill=unit*7;
		cout<<"Total Bill is:"<<bill;
	}else{
		bill=unit*10;
		cout<<"Total Bill is:"<<bill;
	}
	
	return 0;
}
