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

void processSelection(const DonorList& DList)
{
    char choice = 'y';
    while (choice == 'y')
    {
        displayMenu();
        cin >> choice;
        
        if( choice == '1' ) addDonor(DList);
        else if (choice == '2') deleteDonor(DList);
        else if (choice == '3') printAllDonors(DList);
        else cout << "  => Sorry. That is not a selection." << endl;
        
        cout << "  => Would you like to continue? (y/n) ";
        cin >> choice;
    }
    
    cout << "\n  => Thank you for visiting our site!" << endl;
}

void addDonor(const DonorList& DList)
{
    string firstName;
    string lastName;
    int memberNumber = 0;
    double amountDonated = 0.0;
    
    cout << "  => Enter donor's first name:";
    cin >> firstName;
    cout << "  => Enter donor's last name:";
    cin >> lastName;
    cout << "  => Enter donor's membership number:";
    cin >> memberNumber;
    cout << "  => Enter amount donated: $ ";
    cin >> amountDonated;
    
    DList.addDonor(firstName, lastName, memberNumber, amountDonated);
    cout << "  => Donor has been added." << endl;
}
void deleteDonor(const DonorList& Dlist)
{
    int memberNumber = 0;
    cout << "  => Enter donor's membership number: ";
    cin >> memberNumber;
    
    
    if (Dlist.first->getData().getMembershipNo() == memberNumber)
    {
        Node* current = Dlist.first;
        Dlist.first = Dlist.first->getPtrToNext();
        delete current;
        current = nullptr;
        --Dlist.count;
    }
    
    else
    {
        Node* trailCurrent = Dlist.first;
        Node* current = Dlist.first->getPtrToNext();
        bool found = false;
        
        while (current != nullptr && !found)
        {
            if (current->getData().getMembershipNo() == memberNumber)
            {
                trailCurrent->setPtrToNext(current->getPtrToNext());
                delete current;
                current = nullptr;
                --Dlist.count;
                found = true;
                cout << "  => Donor has been deleted.";
            }
            else
            {
                trailCurrent = current;
                current = current->getPtrToNext();
            }
        }
        
        if (!found)
        {
            cout << "Donor is not in the list.  => Donor has been deleted.";
        }
    }
}
void printAllDonors(const DonorList& Dlist) const
{
    printAllDonors();
}
