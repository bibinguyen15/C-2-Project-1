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

#ifndef DONORTYPE_H
#define DONORTYPE_H

#include "MemberType.h"

class DonorType : public MemberType
{
public:
	// constructors
	DonorType();
	DonorType(const std::string& newFirst,
		const std::string& newLast,
		int newNo, double newAmt);

	//mutator functions
	void setDonorInfo(const std::string& newFirst,
					const std::string& newLast,
					int newNo, double newDonationAmt);
	void setAmountDonated(double newDonationAmt);

	//accessor functions
	double getAmountDonated() const;

	//other functions
	void printDonor() const;
	void printDonation() const;

	//destructor
	~DonorType();

	//operator<
	bool operator<(const DonorType& otherDonor) const;

private:
	double donationAmt;
};

#endif