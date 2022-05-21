/*
Purpose: Calculate the average of all grades and shows the final grade in the course 
*/

#include <iostream>
using namespace std;

double average(double array[], int x);
char lettergrade(double);

int main()
{
    double project[4] = {100, 60, 100, 80};
	double quizz[3] = {90, 85, 80};
	double lab[6] = {82, 100, 100, 100, 90, 100};
	double exam[2] = {68, 70};
	double homework[5] = {98, 99, 100, 100, 100};
	double finl[1] = {100};
	double pj, qu, la, ex, ho, fi, grade;
	pj=average(project,4);
	qu=average(quizz,3);
	la=average(lab,6);
	ex=average(exam,2);
	ho=average(homework,5);
	fi=average(finl,1);
	grade= pj*0.2+qu*0.2+la*0.1+ex*0.2+ho*0.1+fi*0.2;
	
	
	cout << "This program calculates my class average." << endl << endl;
	cout << "Calculated Average: " << grade << endl <<
            "Letter Grade: " << lettergrade(grade) << endl;
    return 0;
}


 double average(double array[], int x)
    {
		double ave, sum=0, temp;
		temp=x;
		while (x>0)
		{
			sum=array[x-1]+sum;
			x--;
		}
		ave=sum/temp;
    return ave;
	}

char lettergrade(double average)
{
	char courseGrade;
    
	if (average >= 90)
	{
		courseGrade = 'A';
	}
	else if (average >= 80 && average < 90)
	{
		courseGrade = 'B';
	}
	else if (average >= 70 && average < 80)
	{
		courseGrade = 'C';
	}
	else if (average >= 60 && average < 70)
	{
		courseGrade = 'D';
	}
	else if (average < 60)
	{
		courseGrade = 'F';
	}
	
    return courseGrade;
}