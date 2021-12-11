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

#ifndef INTERFACE_H
#define INTERFACE_H

#include "DonorList.h"

void displayMenu();
void processSelection(DonorList& dList);
void addDonor(DonorList& dList);
void deleteDonor(DonorList& dList);
void printAllDonors(const DonorList& dList);

#endif