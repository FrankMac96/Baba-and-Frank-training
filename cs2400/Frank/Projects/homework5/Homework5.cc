// * * * * * * * * * * * * * * * * * * * * * * * * * * 
//                                                       
//   Program:     Homework 5
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
#include <fstream>
#include <string>

using namespace std;
	
const int SPEED_LIMIT = 35;
const int SUPER_SPEED_LIMIT = 55;

void get_input_file(ifstream& ins);
void get_output_file(ofstream& outs, string& outfile); 
void print_results();

int main()
{
	ifstream ins;
	string info;

	get_input_file();
	while(getline(ins,info))
	{
		cout << info << endl;
	}




	return 0;
}
//****************************************************
void get_input_file(ifstream& ins)
{
	ifstream ins;
	string file;

	cout << "Please enter the name of the file you wish to process\n";
	
	cin >> file;
	ins.open(file.c_str());
	while(ins.fail())
	{
		ins.clear();
		cout << "The file failed to open please try again...\n";
		cin >> file;
		ins.open(file.c_str());
	}
	cout << "Thank you for entering a valid file...\n";

}
void get_output_file(ofstream& outs, string& outfile)
{
	cout << "Please enter a name for a file(non-existing)\n";
	cin >> outfile;
	
	outs.open(outfile.c_str());
	
	
}
//*****************************************************
int track_speeders(ifstream& ins)
{	
	int speed;
	int speeders = 0;//35 n over
	int total_speeders = 0;//total between 35 and 55 over
	int super_speeders = 0;//55 n over
	int speeder_counter = 0;
	int super_speeder_counter = 0;
	int car_counter = 0;
	

	ins >> speed;
	while(!ins.eof())
	{
		if(speed > SPEED_LIMIT)
		{
			
		}
		
	}

}
//*****************************************************
void print_results()
{





}





