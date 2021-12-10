/*
*	Connorpog!
* 
*	Hoang, Connor
*	Dang, Jeffrey
*	Ly, Jenny
*	Nguyen, Catherine
*	Quach, Bryan
* 
*	December 2, 2021
* 
*	CS A250
*	Project 1
*/

#include <string>
#include <iostream>

#include "Interface.h"

using namespace std;

void displayMenu()
{
    cout << "*************************************************" << endl;
    cout << "                    MAIN MENU" << endl;
    cout << "*************************************************\n" << endl;
    cout << "Select one of the following: \n" << endl;
    cout << "    1. Add a donor" << endl;
    cout << "    2. Delete a donor" << endl;
    cout << "    3. Print all donors" << endl;
    cout << "    4: To exit\n" << endl;
    cout << "  => Enter your selection: ";
}

void processSelection(DonorList& DList)
{
    char cont = 'y';
    while (cont == 'y')
    {
        displayMenu();
        
        int choice = 0;
        cin >> choice;
        cout << endl;
        
        if (choice == 1) addDonor(DList);
        else if (choice == 2) deleteDonor(DList);
        else if (choice == 3) printAllDonors(DList);
        else if (choice == 4) cont = 'n';
        else cout << "  => Sorry. That is not a selection." << endl;
        
        if (cont == 'y')
        {
            cout << "\n  => Would you like to continue? (y/n) ";
            cin >> cont;
            cout << endl;
        }
        
    }
    
    cout << "\n  => Thank you for visiting our site!" << endl;
}

void addDonor(DonorList& DList)
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
    
    DList.addDonor(firstName, lastName, memberNumber, amountDonated);
    cout << "\n  => Donor has been added.\n";
}

void deleteDonor(DonorList& Dlist)
{
    if(Dlist.isEmpty())
    {
        cerr << "The database has no donors." << endl;
    }
    else
    {
        int memberNumber = 0;
        cout << "  => Enter donor's membership number: ";
        cin >> memberNumber;
        cout << endl;
        Dlist.deleteDonor(memberNumber);
    }
}

void printAllDonors(const DonorList& Dlist)
{
    Dlist.printAllDonors();
}
