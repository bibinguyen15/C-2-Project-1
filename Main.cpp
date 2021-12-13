/*
    Connorpog!

    Hoang, Connor
    Dang, Jeffrey
    Ly, Jenny
    Nguyen, Catherine
    Quach, Bryan

    December 1, 2021

    CS A250
    Project 1
*/

#include "Interface.h"

using namespace std;

int main()
{
    DonorList dList;
    dList.createList();
    if (!dList.isEmpty())
    {
        displayMenu();
        processSelection(dList);
    }
    return 0;
}
