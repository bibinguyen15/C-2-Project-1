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


//int main()
//{
//    DonorList list1;
//    list1.addDonor("huuuuuh", "whaaaa", 1000, 6136);
//    list1.addDonor("huuuuu", "whaaa", 1001, 613);
//    list1.addDonor("huuuu", "whaa", 1002, 61);
//    list1.addDonor("huuu", "wha", 1003, 6);
//
//    DonorList list2;
//    list2.addDonor("whaaaa", "huuuuuh", 2000, 3000);
//    list2.addDonor("whaaa", "huuuuu", 2001, 300);
//    //list2.addDonor("huuuu", "whaa", 2002, 61);
//    //list2.addDonor("huuu", "wha", 2003, 6);
//
//    list1.printAllDonors();
//    cout << endl;
//    list2.printAllDonors();
//    cout << endl;
//    
//    list1 = list2;
//    cout << endl;
//
//    list1.printAllDonors();
//    cout << endl;
//    list2.printAllDonors();
//    cout << endl;
//    list1.clearList();
//    cout << endl;
//
//    list1.printAllDonors();
//    cout << endl;
//    list2.printAllDonors();
//    return 0;
//}
