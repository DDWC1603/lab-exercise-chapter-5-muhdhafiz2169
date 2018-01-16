//complete the program below
//its a program to find the average value.

#include <iostream>

using namespace std;

double avg(double x, double y);

int main()
{
	double m=0.0;
	double n=0.0;

	cout<<"Enter first number"<<endl;
	cin >> m;

	cout<<"Enter second number"<<endl;
	cin >> n;
		
	avg(m, n);
	std::cin.get();

	cout<<"Average is: "<< avg(m, n) <<endl;
	
	
	
}

double avg(double x,double y)
{
	/*return the average value of x and y*/
	double average;
	
	average = (x+y)/2;
	return average;
}
