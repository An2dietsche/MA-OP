/*
Purpose:Calculates the salinity and freezing temperature between two points in order to find a new freezing temperature. 
*/

/* a=first salinity
   fa=first freezing temperature
   c=second salinity
   fc=second freezing temperature
   b=new salinity value
   fb=new freezing temperature in degrees
*/

#include <iostream>
using namespace std;

int main ()
{

	double a, fa , c, fc, b, fb;
	cout << "Enter the two points, first for salinity the second for freezing temp.\n";
	cin >> a >> fa;
	cout << "Enter the two second points, first for salinity the second for freezing temp.\n";
	cin >> c >> fc; 
	cout << "Enter the new salinity.\n";
	cin >> b;
	fb = fa + (b-a)/(c-a) * (fc - fa);
    cout << "The new freezing temperature in degrees F is " << fb << endl;

    return 0;

}
