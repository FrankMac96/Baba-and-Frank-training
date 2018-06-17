//* * * * * * * * * * * * * * * * * * * * * * * * * * 
//                                                       
//   program:     Lab 4
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

int main()
{
	int temp = 0;
	int temp2 = 0;
	int high_temp = -999;
	int low_temp = 999;
	cout << "enter a temperature or if u want to exit the loop enter\n"; // enter -100 for the exit
	cout << "highest temp first and second temp next." << endl;
	cin >> temp;
	cin >> temp2;
	while((temp != -100) && (temp2 != -100))
	{

		if(high_temp < temp)
		{
			high_temp = temp;
		} 
		if(low_temp > temp2)
		{
			low_temp = temp2;
		}
		cout << "What is the highest temp of today?\n";
		cin >> temp;
		cout << "What is the lowest temp of today?\n";
		cin >> temp2;
	}	
		cout << endl << endl;

		cout << "highest temp = "  << high_temp << endl;
		cout << "lowest temp = " << low_temp << endl;
	


	return 0;
}
