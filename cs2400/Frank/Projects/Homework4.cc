// * * * * * * * * * * * * * * * * * * * * * * * * * * 
//                                                       
//   Program:     Homework 4
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
#include <cmath>
#include <cstdlib>
#include <string>

using namespace std;

const int GRAMS_TO_KILO = 1000;
const int OUNCES_TO_POUNDS = 16;
const double GRAMS_TO_OUNCES = 28.3495;

void get_metric_weight(double& kilogram, double& grams);
double get_grams(double kilogram, double grams);
int get_ounces(double total_grams);
void get_pounds(int& ounces, int& pounds);
char ask_again();
void print_results(double& kilograms, double& grams, int& pounds, int& ounces);

int main()
{

	double kilogram;
	double grams;
	double total_grams;
	int ounces,pounds;

	char ans = 'Y';
	while(toupper(ans) == 'Y')
	{
		get_metric_weight(kilogram,grams);
		total_grams = get_grams(kilogram, grams);
		ounces = get_ounces(total_grams);
		get_pounds(ounces,pounds);
		print_results(kilogram,grams,pounds,ounces);
	
		ans = ask_again();
	}

	return 0;
}
//*************************************************************
void get_metric_weight(double& kilogram, double& grams)
{

	cout << "What is your weight in kilograms and grams?\n";
	cout << "Enter kilograms first then the remaining grams\n";

	cin >> kilogram >> grams;
	
	
}
//*************************************************************
double get_grams(double kilogram, double grams)
{
	double total_grams;
	cout << "Convert kilograms to staight grams\n";

	double grams2 = kilogram * GRAMS_TO_KILO;
	total_grams = grams + grams2;
	cout << total_grams << endl;

	return total_grams;
}
//*************************************************************
int get_ounces(double total_grams)
{
	int ounces;
	
	double temp = static_cast<int>(total_grams / GRAMS_TO_OUNCES);

	ounces = round(temp);

	cout << "the Ounces" << endl;
	cout << ounces << endl;

	
	return ounces;
}
//*************************************************************
void get_pounds(int& ounces, int& pounds)
{

	pounds = ounces / OUNCES_TO_POUNDS;
	ounces = ounces % OUNCES_TO_POUNDS;
	
}
//**************************************************************
char ask_again()
{
	char ans;
	cout << "Enter a answer" << endl;
	cin >> ans;
	return(ans);
}
//***************************************************************
void print_results(double& kilogram, double& grams, int& pounds, int& ounces)
{

	cout <<"The user weights " << pounds << " pounds and " << 
	ounces << " ounces " << endl;
       
	cout <<"The metric version of the user weight is " << kilogram 
	     << " kilograms and " << grams << " grams " << endl;
}










