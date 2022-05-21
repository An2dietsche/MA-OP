#include<iostream>

using namespace std;

const double GALLONS_PER_LITER = 0.264179;
double convert_liters_to_gallons(double liters);

int main()

{
  
double miles;
double liters;
double gallons;
double miles_per_gallon;
char again;

do
{ 
  
	cout << "Enter the liters of gas used on the trip:";
	cin >> liters;
	cout << "Ener the miles traveled on the trip:";
	cin >> miles;

	gallons = convert_liters_to_gallons(liters);
	miles_per_gallon = miles/(liters * GALLONS_PER_LITER); 

	cout << "\nWhen you use" << liters 
		<< " liters of gas your car gets" << miles_per_gallon << ",\n";
	cout << "miles per gallon "
		<< endl;
	cout << "\nDo you want to do another item (Y/N)? ";
		cin >> again;

}while (again == 'Y' || again == 'y');

return 0;
  
}

double convert_liters_to_gallons(double liters)

{
  
return liters * GALLONS_PER_LITER;

}
