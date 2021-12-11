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

#ifndef DONORLIST_H
#define DONORLIST_H

#include "DonorType.h"

class Node
{
public:
	// Default constructor
	Node();

	// Overloaded constructor
	Node(DonorType newData, Node* newPtrToNext);

	// Function getPtrToNext returns the address of the next node.
	Node* getPtrToNext() const;

	// Function getData returns the DonorType value 
	//stored in the node.
	DonorType& getData();

	// Function setPtrToNext overwrites the address stored in 
	// the node with a given address.
	void setPtrToNext(Node* newPtrToNext);

	// Function setData overwrites the DonorType value stored in 
	// the node with a given value.
	void setData(DonorType newData);

	// Destructor
	~Node();

private:
	// DonorType stored in the node.
	DonorType data;

	// A pointer storing the address of next node.
	Node* ptrToNext;
};

class DonorList
{
public:
	// default constructor
	DonorList();

	// Function addDonor adds new node to end of list
	void addDonor(const std::string& newFirst,
		const std::string& newLast,
		int newNo, double newDonationAmt);

	// Function createList adds new nodes from database
	void createList();

	// Function getNoOfDonors returns number of nodes
	int getNoOfDonors() const;
	// Function getTotalDonations returns total amount of donations
	double getTotalDonations() const;

	//Function isEmpty returns true if list is empty, 
	//false otherwise
	bool isEmpty() const;
	// Function searchID returns true if donor is in the 
	//list, false otherse
	bool searchID(int memberNo) const;

	// Function deleteDonor deletes a donor from the list
	void deleteDonor(int memberNo);

	// Function printAllDonors prints a list of donors
	void printAllDonors() const;
	// Function printAllDonations prints all donations 
	//with respective donors
	void printAllDonations() const;

	// Function clearList deletes all nodes and resets 
	//member variables
	void clearList();
	//destructor
	~DonorList();

	// copy constructor
	DonorList(const DonorList& otherList);
	// copy assignment operator
	DonorList& operator=(const DonorList& otherList);

private:
	// Copies param obj to calling obj if latter is empty
	void copyCallingObjIsEmpty(const DonorList& otherList);
	
	// Copies param obj to calling obj if both have same length
	void copyObjectsSameLength(const DonorList& otherList);
	
	// Copies param obj to calling obj if latter is longer
	void copyCallingObjLonger(const DonorList& otherList);
	
	// Copies param obj to calling obj if latter is shorter
	void copyCallingObjShorter(const DonorList& otherList);

	Node *first;
	Node *last;
	int count;
};


#endif