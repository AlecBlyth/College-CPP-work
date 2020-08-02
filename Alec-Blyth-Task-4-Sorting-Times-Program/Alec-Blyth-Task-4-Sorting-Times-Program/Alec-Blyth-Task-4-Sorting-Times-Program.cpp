// Alec-Blyth-Task-4-Sorting-Times-Program.cpp : Defines the entry point for the console application.//

//Author: Alec Blyth 0814281
//Complete Date: 21/02/2017
//Revised Date: NULL
//Description: This program will take user speeds in milliseconds and order them fastest to slowest using bubble sorting

//Includes the C Standard Definitons Library
//Includes the Input/Output Stream allowing the use of cin and cout
#include "stdafx.h"
#include <iostream>

//Removes the need to include STD::CIN/STD::COUT
using namespace std;

//initialises the bubblesort function
int bubbleFunction(int numInput, int userSpeeds[100]);

//Main function
int main()
{
	//initialise variables, counter is set to 1 to allow correct count of inputs e.g. 0, 1, 2 to 1, 2, 3
	int i;
	int counter = 1;
	int numInput; 
	int userSpeeds[50];
	//initialisation of string variable
	string inputData; 

	//Misc details
	cout << "Version 6.03 (C)Copyright ABM Corp 1998" << endl;
	cout << endl << "Starting ABM-CSA..." << endl;
	cout << endl << "The Calculation Speed Analyser by ABM Corp" << endl;

	do {
	//Asks the user how many calculations they need analysed 
		cout << "How many Calculations would you like to review?" << endl;
		cin >> numInput;
		if (numInput <= 0)
			cout << "Invalid Input: For assistance call ABM Corp Support" << endl;
	} while (numInput <= 0);

	//For loop that asks the user for speeds based on the numInput variable
	for (i = 0; i <numInput; i++)
	{
		cout << "What is the speed of Calculation " << counter++ << endl;
		cin >> userSpeeds[i];
	}
	//initialise function as inputData string 
	inputData = bubbleFunction(numInput, userSpeeds);

	cin.ignore();
	cin.get();
    return 0;
}
//This function uses bubblesort to sort the user's inputs to min to max and displays messages + results afterwards  
int bubbleFunction(int numInput, int userSpeeds[100])
{
	int temp;
	//Adds second counter to count the results 
	int FunCounter = 1; 

	//For loop which reviews value against each inputed value and moves lowest behind largest value
	for (int i = 1; i < numInput; i++)
	{
		for (int a = 0; a < numInput - i; a++)
			if (userSpeeds[a] > userSpeeds[a + 1])
			{
				temp = userSpeeds[a];
				userSpeeds[a] = userSpeeds[a + 1];
				userSpeeds[a + 1] = temp;
			}
	}
	cout << "The ABM Calculation Speed Analyser results - Fastest to Slowest" << endl; 

	for (int i = 0; i < numInput; i++)
		cout << "Calculations per milisecond: Result " << FunCounter++ << ": " << userSpeeds[i] << "ms" << "\n";
	return 0;
}


