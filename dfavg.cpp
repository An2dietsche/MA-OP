#include<iostream>
#include<fstream>

using namespace std;

int main(){
  
   ifstream input;
   input.open("---");
  
   ofstream output;
   output.open("---");
  
   
   int num = 0;
   
  
   int temp = 0;
   int i;
   int total = 0;
  
   
   while(!input.eof()) //outer loop to repeat until the end of file
   {
	   total=0;//reset or initialize total every time to 0
	   i=0; //intialize i here
	   cout<<"Number of numbers to read from file: "; //input prompt is here
	   cin>>num; //reading input num from keyboard using cin
	   while(i<num && !input.eof()) //nested loop until i<num or not end of file
	   {
		input>>temp; //this is reading each number to temp
		output<<temp<<" "; //print to output file
		total = total + temp; //add to total
		cout<<temp<<" ";//print total on screen
		i++;
		}
	cout<<"\n"<<"Average: "<<(double)total/num<<endl; //printing average in outer loop
	output<<endl; //printing on file also
    output<<"Average: "<<(double)total/num<<endl;
  
   }
   
   input.close(); //close each file here
   output.close(); 
   
   return 0;
}
