#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
	{
	char filin[16],fileo[16];
	
	cout << "Enter file name for input =>";
	cin >> filin;
	
	ifstream in;
	in.open(filin);
	
	if (in.fail())
	{
		cout << "Wrong name, enter another file name\n";
		exit(1);
	}
	
	cout << "Enter file name for output =>";
	cin >> fileo;
	
	ofstream out;
	out.open(fileo);
	
	int a,b,c(0);
	
	in >> a;
	
	while (!in.eof())
	{
		in >> b;
		switch(a)
		{
			case 0:
			if (b==0)
			{
				c=c+1;
			}
			else
			{
				cout << "Emit " << 1070 << "-hz tone for " << c << "time unit(s).\n";
				out << "Emit " << 1070 << "-hz tone for " << c << "time unit(s).\n";
				c=1;
			}
			
			break;
			
			case 1:
			if (b==1)
			{
				c=c+1;
			}
			else
			{
				cout << "Emit " << 1270 << "-hz tone for " << c << "time unit(s).\n";
				out << "Emit " << 1270 << "-hz tone for " << c << "time unit(s).\n";
				c=1;
			}
			
			break; 
		
		}
		a=b;
	} 
if (a==1)
{
	cout << "Emit " << 1270 << "-hz tone for " << c << "time unit(s).\n";
    out << "Emit " << 1270 << "-hz tone for " << c << "time unit(s).\n";
}
else
{
	cout << "Emit " << 1070 << "-hz tone for " << c << "time unit(s).\n";
	out << "Emit " << 1070 << "-hz tone for " << c << "time unit(s).\n";
}
	
in.close(); 
out.close(); 
return 0;
}
