/******************************
   Name
   Date
   PA1_Solution.cpp
   Description
********************************/

// Headers
#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
using namespace std;

// Global variables
const int NUM_ASSIGNMENTS = 3;	// number of assignments

int main()
{
	string studentName;
	string assignmentNames[NUM_ASSIGNMENTS];
	int assignmentGrades[NUM_ASSIGNMENTS];
	double average;

	// Get the name of the student
	cout << "Enter student first and last name: ";
	getline(cin, studentName);

	// Get the names of the assignments
	cout << endl;
	cout << "Enter the name of assignment 1: ";
	getline(cin, assignmentNames[0]);
	cout << "Enter the name of assignment 2: ";
	getline(cin, assignmentNames[1]);
	cout << "Enter the name of assignment 3: ";
	getline(cin, assignmentNames[2]);
    
	// Get the grades for each of the assignments
	cout << endl;
	cout << "Enter the grade for " << assignmentNames[0] << ": ";
	cin >> assignmentGrades[0];
	cout << "Enter the grade for " << assignmentNames[1] << ": ";
	cin >> assignmentGrades[1];
	cout << "Enter the grade for " << assignmentNames[2] << ": ";
	cin >> assignmentGrades[2];

	// Calculate the average
	average = static_cast<double>(assignmentGrades[0] + assignmentGrades[1] + assignmentGrades[2]) / NUM_ASSIGNMENTS;

	// Display grade information
	cout << fixed << setprecision(1) << showpoint;
	cout << "\nThe average for " << studentName << " is " << average << endl << endl;

	cout << "Here are your grades:" << endl;
	cout << setw(30) << assignmentNames[0] << ": " << setw(4) << assignmentGrades[0] << endl;
	cout << setw(30) << assignmentNames[1] << ": " << setw(4) << assignmentGrades[1] << endl;
	cout << setw(30) << assignmentNames[2] << ": " << setw(4) << assignmentGrades[2] << endl;

	cout << "\nThank you for playing." << endl;
    
	//	Make sure we place the end message on a new line
    cout << endl;

	//	The following is system dependent.  It will only work on Windows
    system("PAUSE");

	/* 
	// A non-system dependent method is below
	cout << "Press any key to continue";
	cin.get();
	*/
    return 0;
}