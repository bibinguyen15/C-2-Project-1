/*
*	Connorpog!
*
*	Hoang, Connor
*	Dang, Jeffrey
*	Ly, Jenny
*	Nguyen, Catherine
*	Quach, Bryan
*
*	December 1, 2021
*
*	CS A250
*	Project 1
*/

#include "DonorType.h"

#include<iostream>
#include <iomanip>

using namespace std;

DonorType::DonorType() : donationAmt(0) {}

DonorType::DonorType(const std::string& newFirst,
					const std::string& newLast,
					int newNum, double newAmt)
	: MemberType(newFirst, newLast, newNum)
{
	donationAmt = newAmt;
}

void DonorType::setDonorInfo(const string& newFirst,
							const string& newLast, int newNum, 
							double newDonationAmt)
{
	setMemberInfo(newFirst, newLast, newNum);
	donationAmt = newDonationAmt;
}

void DonorType::setAmountDonated(double newDonationAmt)
{
	donationAmt = newDonationAmt;
}

double DonorType::getAmountDonated() const
{
	return donationAmt;
}

void DonorType::printDonor() const
{
	printMemberInfo();
}

void DonorType::printDonation() const
{
	printName();
	cout << "    Donation amount: $"
		<< fixed << setprecision(2)
		<< donationAmt << endl;
}

DonorType::~DonorType() {}

bool DonorType::operator<(const DonorType& otherDonor) const
{
	return getMembershipNo() < otherDonor.getMembershipNo();
}