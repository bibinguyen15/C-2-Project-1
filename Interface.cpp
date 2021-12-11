/*
	Connorpog!
 
	Hoang, Connor
	Dang, Jeffrey
	Ly, Jenny
	Nguyen, Catherine
	Quach, Bryan
 
	December 2, 2021
 
	CS A250
	Project 1
*/
#include "Interface.h"

#include <iostream>
using namespace std;

void displayMenu()
{
    cout << "*************************************************"
        << endl;
    cout << "                    MAIN MENU" << endl;
    cout << "*************************************************\n"
        << endl;
    cout << "Select one of the following: \n" << endl;
    cout << "    1. Add a donor" << endl;
    cout << "    2. Delete a donor" << endl;
    cout << "    3. Print all donors" << endl;
    cout << "    4: To exit\n" << endl;
    cout << "  => Enter your selection: ";
}

void processSelection(DonorList& dList)
{
    char cont = 'y';
    while (cont == 'y')
    {
        int choice = 0;
        cin >> choice;
        cout << endl;
        
        if (choice == 1) addDonor(dList);
        else if (choice == 2) deleteDonor(dList);
        else if (choice == 3) printAllDonors(dList);
        else if (choice == 4) cont = 'n';
        else cout << "  => Sorry. That is not a selection."
            << endl;
        
        if (cont == 'y')
        {
            cout << "\n  => Would you like to continue? (y/n) ";
            cin >> cont;
            cout << endl;
        }

        if (cont == 'y') displayMenu();
        
    }

    cout << "  => Thank you for visiting our site!" << endl;
    cout << "\nPress any key to continue . . ." << endl;
    getchar(); //Capture the input buffer
    getchar(); //User input any key to quit
}

void addDonor(DonorList& dList)
{
    string firstName, lastName;
    cout << "  => Enter donor's first name: ";
    cin >> firstName;
    cout << "  => Enter donor's last name: ";
    cin >> lastName;
    
    int memberNumber = 0;
    cout << "  => Enter donor's membership number: ";
    cin >> memberNumber;
    
    double amountDonated = 0.0;
    cout << "  => Enter amount donated: $ ";
    cin >> amountDonated;
    
    dList.addDonor(firstName, lastName,
        memberNumber, amountDonated);
    cout << "\n  => Donor has been added.\n";
}

void deleteDonor(DonorList& dList)
{
    if(dList.isEmpty())
    {
        cerr << "The database has no donors." << endl;
    }
    else
    {
        int memberNumber = 0;
        cout << "  => Enter donor's membership number: ";
        cin >> memberNumber;
        cout << endl;
        dList.deleteDonor(memberNumber);
    }
}

void printAllDonors(const DonorList& dlist)
{
    dlist.printAllDonors();
}
