// Alec_Blyth-UsernameProgram.cpp : Defines the entry point for the console application.//

/*
Author: Alec Blyth: 0814281
Complete Date: 28/01/2017
Revised Date: NULL 
Description: A simple program that take's a user's name and takes their inputs as string varibles, passes it to a void function and display's their generated username. 
*/

//Include string and iostream to allow the code to function with complier//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
//Declaring the function with parameters//
void usernameFunction(string initialF, string surName);

int main()
{
	//Initialision and declaration of string variables// 
	string firstName;
	string secondName; 

	//Ask user for name and store as string varibles//
	cout << "Version 1.05 (C)Copyright ABM Corp 1993" << endl;
	cout << endl << "Starting ARM-USC..." << endl;
	cout << endl << "The User-Name Creator by ABM Corp" << endl; 
	cout << endl << "Please enter your forename..." << endl; 
	
	//Store the user's input as string varible, firstName//
	cin >> firstName;
	
	cout << "Please enter your surname..." << endl;
	
	//Store user's second input as string varible, secondName// 
	cin >> secondName;
	//Declare the function for parameter passing//
	usernameFunction(firstName, secondName);

	//Set program to run after cout inputs//
	cin.get();
	cin.ignore();
	//Close function//
	return 0;
}
//Print out the user's generated username//
void usernameFunction(string initialF, string surName)
{
	//Print out username only displaying first initial from variable firstName// 
	cout << "Your username is: " << initialF[0] << surName; 
	//Close function// 
	return;
}

//Ready for evalutation//