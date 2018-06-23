//* * * * * * * * * * * * * * * * * * * * * * * * * * 
//                                                       
//   Program:     Homework 3
// 
//   Name  :      Frank Macdonald                                  
//   Email :      fm261615@ohio.edu
//
//   Description: This program prints a message
//   to the screen.
//          
//   Date  :      06/17/22                            
//                                                                                                           
//* * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{

    int a; 
    int b; 
    int c; 
    int d; 
    int number;

    for (a = 0; a <= 9; a++)
    {
    	for (b = 0; b <= 9; b++)
	{
    		for (c = 0; c <= 9; c++)
		{ 
    			for (d = 0; d <= 9; d++)
			{ 
        
    				if(a+b+c+d==27)
				{ 
    				if (d % 2 != 0)
				{ 
    				if((a!=b)&&(b!=c)&&(c!=d)&&(b!=d)&&(a!=d))
				{ 
    				if (a==(3*c))
				{ 
    					a = a * 1000;
					b = b * 100;
					c = c * 10;
					d = d * 1;
					number = a+b+c+d;
					cout << "The secret number is " << number << endl;
  					}
       					}
      					}
     					}
    				}                            
  			}                         
  		}                  
 	}                   
 return 0;
}




