/*
*    Connorpog!
*
*    Hoang, Connor
*    Dang, Jeffrey
*    Ly, Jenny
*    Nguyen, Catherine
*    Quach, Bryan
*
*    December 1, 2021
*
*    CS A250
*    Project 1
*/

#include <string>
#include <iostream>
#include "Interface.h"

using namespace std;

int main()
{
    DonorList DList;
    DList.createList();
    if ( !DList.isEmpty() )
    {
        displayMenu();
        processSelection(DList);
    }
    return 0;
}