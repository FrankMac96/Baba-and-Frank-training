//** * * * * * * * * * * * * * * * * * * * * * * * * 
//                                                       
//   program:     Lab 3
// 
//   Name  :      Frank Macdonald                                  
//   Email :      fm261615@ohio.edu
//
//   Description: This program prints a message
//   to the screen.
//          
//   Date  :      06/17/18                            
//                                                                                                           
// * * * * * * * * * * * * * * * * * * * * * * * * * * 
#include <iostream>
using namespace std;

const double commission1 = .10;
const double commission2 = .15;
double Weekly_salary;


int main()
{

	double Hourly_pay = 5.50;
	double Weekly_salary;
	double Plan1; //5.50 * 40 + 10% * weekly_salary
	double Plan2; // 15 * weekly_salary


	cout << "What is the weekly salary of the client.\n";
	cin >> Weekly_salary;

	cout << "What is the value of Plan1? \n";
	Plan1 = (Hourly_pay * 40) + commission1 * Weekly_salary;
	cout << "Plan1 pays" << " " << Plan1 << endl;
	cout << "What is the value of Plan2? \n";
	Plan2 = commission2 * Weekly_salary;
	cout << "Plan2 pays" << " " << Plan2 << endl;
	
	if(Plan1 > Plan2)
	{
		cout << "Plan1 is better then Plan2\n";
	}
	else
	{
		cout << "Plan2 is better then Plan1\n";
	}
  
	
	
	return 0;
} 






