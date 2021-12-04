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
    DonorList list1;
    list1.addDonor("huuuuuh", "whaaaa", 1243, 6136);
    list1.addDonor("huuuuu", "whaaa", 124, 613);
    list1.addDonor("huuuu", "whaa", 12, 61);
    list1.addDonor("huuu", "wha", 1, 6);

    DonorList list2;
    list2.addDonor("whaaaa", "huuuuuh", 21, 3000);
    list2.addDonor("whaaa", "huuuuu", 2, 300);
    

    list1.printAllDonors();
    list2.printAllDonors();
    cout << endl;
    list1 = list2;

    list1.printAllDonors();
    list2.printAllDonors();
    cout << endl;
    list1.clearList();

    list1.printAllDonors();
    list2.printAllDonors();
    return 0;
}