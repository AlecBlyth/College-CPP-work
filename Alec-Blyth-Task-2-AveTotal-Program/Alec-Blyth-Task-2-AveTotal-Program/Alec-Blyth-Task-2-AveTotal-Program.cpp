// Alec-Blyth-Memory-Size-Task-One.cpp : Defines the entry point for the console application.//

//Author: Alec Blyth: 0814281
//Complete Date: 18/02/2017
//Revised Date: NULL
//Description: 

//Includes the C Standard Definitons Library
//Includes the Input/Output Stream allowing the use of cin and cout
//Includes the string library allowing the use of strings
#include "stdafx.h"
#include <iostream> 
#include <string>   

//Removes the need to include STD::CIN/STD::COUT
using namespace std;

//initialises the calcluation function
int CalcluationFunction(float sum, int numFiles, int counter);

//Main function
int main()
{
	//initialise variables, counter is set to 1 to allow correct count of inputs e.g. 0, 1, 2 to 1, 2, 3
	int numFiles, i;
	float fileMemory[10000], sum = 0.0; 
	int counter = 1;
	//initialisation of string variables 
	string fileName;
	string TotalFile;

	//Misc details
	cout << endl << "The ABM File Memory Calculator" << endl;
	cout << "Version 5.09 (C)Copyright ABM Corp 1995" << endl;
	cout << endl << "Starting ABM-FMO..." << endl;
	
	//Asks the user how many files they need analysed 
		cout << endl << "How many files would you like to analyse?" << endl;
		cin >> numFiles;

		while (numFiles <= 0)
		{
			cout << endl << "Invalid Input: For assistance call ABM Corp Support";
			cin >> numFiles;
		}

	//For loop which asks the user the name and size of file depending on value of numFiles 
	for (int i = 1; i <= numFiles; i++)
	{
		//Asks user for file name which is stored in fileName variable
		cout << "Enter name of File " << counter++ << endl;
		cin >> fileName;
		//Asks user for file size for each number of files
		cout << "Please enter the size of File: " << fileName << " in MBs" << endl;
		//During for loop fileMemory is added into sum
		cin >> fileMemory[i];
		sum += fileMemory[i];
	}

	//initialise function as TotalFile string 
	TotalFile = CalcluationFunction(sum, numFiles, counter);

	cin.ignore();
	cin.get();
	return 0;
}

//This function takes the user's inputs, calcuates the average, total and displays results
int CalcluationFunction(float sum, int numFiles, int counter)
{
	int averageSize = 0;
	int totalSize = 0;
	totalSize = sum;
	averageSize = sum / numFiles;
	cout << "Loading..." << endl << "The Average File Size is " << averageSize << "MBs" << endl;
	cout << "The total amount of memory being used is..." << totalSize << "MBs" << endl;
	//This is used to remove an extra 1 which is created after final input 
	counter--;
	cout << "You have analysed..." << counter << " files" << endl;
	cout << totalSize << "MBs" << " This is nothing, buy a brand new ABM Personal Computer it's storage is " << totalSize * 2 << "MBs!" << endl;
	cout << "Starting price at " << char(156) << "599!" << endl;
	return 0;
}
