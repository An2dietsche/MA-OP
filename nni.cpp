#include<iostream>
using namespace std;
int main()
{
	//x is the number being converted
	//rem is the number of x when divided by two
	// a is the position
	int rem,x,a,y=1;
	while (y==1){
	cout <<"Enter a positive integer: ";
	cin >> x;
	a=0;
	while(x>0)
	{
		rem=x%2;
		x=x/2;
		cout << rem << " at " << a << " position.\n";
		a=a+1;
			
	}
	cout <<"Do you want to try another number, 1 for yes, 2 for no.\n";
	cin >> y; 
	}
	return 0;
}
