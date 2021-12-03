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

#ifndef INTERFACE_H
#define INTERFACE_H

#include "DonorList.h"

void displayMenu();
void processSelection(DonorList);
void addDonor(DonorList);
void deleteDonor(DonorList);
void printAllDonors(DonorList);

#endif