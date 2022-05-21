#include <iostream>
using namespace std;

int main()
{

	double time, distance; 
	cout << "Enter the time in seconds.\n";
	cin >> time;
	//Acceleration=32
	distance = (32*time*time)/2;
	cout << "Distance traveled under freefall is "<< distance <<" feet per second squared." << endl;

return 0;
}
