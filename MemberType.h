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

#ifndef MEMBERTYPE_H
#define MEMBERTYPE_H

#include <string>

class MemberType
{
public:
	//constructors
	MemberType();
	MemberType(const std::string& newFirst,
		const std::string& newLast, int newNo);

	//mutator function
	void setMemberInfo(const std::string& newFirst,
		const std::string& newLast, int newNo);

	//accessor functions
	std::string getFirstName() const;
	std::string getLastName() const;
	int getMembershipNo() const;

	//other functions
	void printName() const;
	void printMemberInfo() const;

	//destructor
	~MemberType();


private:
	std::string firstName;
	std::string lastName;
	int memberNo;
};
#endif