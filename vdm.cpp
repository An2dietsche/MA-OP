#include <iostream>

using namespace std;
int accept_money(); //prompts user for input

int accept_money() //define the function 
{
int coin = 0;
int value = 0;

cout << "Enter a coin \n";
cout << "1. Dollar \n";
cout << "2. Quarter \n";
cout << "3. Dime \n";
cout << "4. Nickle \n";
cout << "Enter your choice: ";
cin >> coin;
switch(coin)
{
	case 1: 
	value = 100;
	break;
	
	case 2:
	value = 25;
	break;
	
	case 3:
	value = 10;
	break;
	
	case 4:
	value = 5;
	break;
	
	default:
	cout<< "Please enter valid choice" <<endl;
	value=0;
}
return value; 

}
int main ()
{
cout<< "VENDING MACHINE FOR DEEP FRIED DONUTS: "<<endl;
double amount = 0;
while(amount < 350 )
{
amount += accept_money();
cout<<" You have entered "<< amount <<" so far " <<endl;	
}
cout << "Enjoy your deep fried donut" <<endl;
if(amount > 350) 
cout << "Your change is "<<(amount - 350)<< " cents "<<endl;	

return 0;
}
