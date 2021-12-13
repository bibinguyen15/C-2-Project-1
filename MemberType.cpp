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

#include "MemberType.h"

#include <iostream>
using namespace std;

MemberType::MemberType() 
	: firstName("N/A"), lastName("N/A"), memberNo(0) {}

MemberType::MemberType(const std::string& newFirst,
			const std::string& newLast, int newNo)
	: firstName(newFirst), lastName(newLast),
		memberNo(newNo) {}

void MemberType::setMemberInfo(const string& newFirst,
	const string& newLast, int newNo)
{
	firstName = newFirst;
	lastName = newLast;
	memberNo = newNo;
}

string MemberType::getFirstName() const
{
	return firstName;
}

string MemberType::getLastName() const
{
	return lastName;
}

int MemberType::getMembershipNo() const
{
	return memberNo;
}

void MemberType::printName() const
{
	cout << lastName << ", " << firstName << endl;
}

void MemberType::printMemberInfo() const
{
	cout << memberNo << " - " << firstName 
		 << " " << lastName << endl;
}

MemberType::~MemberType() {}
