// * * * * * * * * * * * * * * * * * * * * * * * * * * 
//                                                       
//   Program:     Homework 2
// 
//   Name  :      Frank Macdonald                                  
//   Email :      fm261615@ohio.edu
//
//   Description: This program prints a message
//   to the screen.
//          
//   Date  :      06/17/22                            
//                                                                                                           
// * * * * * * * * * * * * * * * * * * * * * * * * * * 

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

double const SALES_TAX = .0675;

int main()
{

	double gift_card;
	double item1, item2, item3;
	double balance;
	double net_price, total_price;
	double tax_amount;
	
	cout.setf(ios::fixed); // magic formula
        cout.setf(ios::showpoint); // used to round decimal points
        cout.precision(2);
	
	cout << "How much is load on this gift card?\n";
	cin >> gift_card;

	cout << "There is $ " << gift_card << " on the gift card.\n";
	cout << "How much do each of the three items cost?\n";
	cin >> item1 >> item2 >> item3;
	
	net_price = item1 + item2 + item3;
	tax_amount = SALES_TAX * net_price;
	total_price = tax_amount + net_price;
	
	cout << "The total cost of the trip is " << total_price << endl;
	
	while(total_price > gift_card)
	{	
		if(total_price > gift_card)
		{
			cout << "Transaction declined...\n" << "Please enter 3 different items again\n";
			cin >> item1 >> item2 >> item3;
			net_price = item1 + item2 + item3;
			tax_amount = SALES_TAX * net_price;
			total_price = tax_amount + net_price;
			
		}
	
	}	
			cout << "The transaction approved...\n" << "Thank you for shopping at your local market\n";
			balance = gift_card - total_price;
			cout << "The remaining balance on the gift card is $" << balance << endl;



	
	
 return 0;
}
