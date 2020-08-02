// Alec-Blyth-Memory-Size-Task-One.cpp : Defines the entry point for the console application.//

//Author: Alec Blyth: 0814281
//Complete Date: 17/02/2017 
//Revised Date: NULL
//Description: This program takes file sizes and sorts them by the maximum size.

//Includes the C Standard Definitons Library
//Includes the Input/Output Stream allowing the use of cin and cout
//Includes the string library allowing the use of strings
#include "stdafx.h"
#include <iostream> 
#include <string>   

//Removes the need to include STD::CIN/STD::COUT
using namespace std;  

//Initialises the function which displays the largest value. 
int memoryFunction(int numFiles, int fileMemory[10000]);

//Main function
int main() 
{
	//initialise variables, counter is set to 1 to allow correct count of inputs e.g. 0, 1, 2 to 1, 2, 3
	int counter = 1;
	//varible fileMemory with an array, the array is set to a large number to allow for large amounts of values to be sorted. 
	int fileMemory[10000];
	int numFiles;
	//initialisation of string variables 
	string fileName;
	string maximumFile;

	//Misc details
	cout << "Version 2.03 (C)Copyright ABM Corp 1993" << endl;
	cout << endl << "Starting ABM-FMA..." << endl;
	cout << endl << "The File Memory Analyser by ABM Corp" << endl;
	
	//Do while loop which asks user for number of files, if user inputs 0 or -1, loop repeats until user input correct value
	do{
		cout << endl << "How many files would you like to Analyse?" << endl;
		cin >> numFiles;
			if (numFiles <= 0)
			cout << endl << "Invalid Input: For assistance call ABM Corp Support";
	} while (numFiles <= 0);
		
	//For loop which asks the user the name and size of file depending on value of numFiles 
	for (int i = 1; i <= numFiles; i++)
	{
		//Asks user for file name which is stored in fileName variable
		cout << "Enter name of File " << counter++ << endl;
		cin >> fileName;
		//Asks user size of file which is stored in the fileMemory array
		cout << "Please enter the size of File: " << fileName << " in MBs" << endl;
		cin >> fileMemory[i];
		//If user puts in negative number program stores it as 0
		if (fileMemory[i] == -1)
		break;
	}

	//Passes the numFiles and fileMemory variables to the memoryFunction
	maximumFile = memoryFunction(numFiles, fileMemory);

	cin.ignore();
	cin.get();
	return 0;
}
//MemoryFunction which finds the largest value, variables numFiles and fileMemory is passed from main function 
int memoryFunction(int numFiles, int fileMemory[10000])
{		
	//Initalises size variable at 0 
	int size = 0;
	//Loops each stored input from fileMemory array
	for (int i = 0; i < 10000; i++)
	{
		//If fileMemory is larger than size, largest size = largest value
		if (fileMemory[i] > size)
			size = fileMemory[i];
	}
	//Displays largest filesize
	cout << "The largest filesize is " << size << "MB"; 
	return size;
}