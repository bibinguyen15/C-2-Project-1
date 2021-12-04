/*
*	Connorpog!
*
*	Hoang, Connor
*	Dang, Jeffrey
*	Ly, Jenny
*	Nguyen, Catherine
*	Quach, Bryan
*
*	December 2, 2021
*
*	CS A250
*	Project 1
*/

#include <iostream>

#include "DonorList.h"

DonorList::DonorList(const DonorList& otherList)
	: first(nullptr), last(nullptr),
		count(0)
{
	Node* current = otherList.first;
	
	for (int i = 0; i < otherList.count; ++i)
	{
		addDonor(current->getData().getFirstName(),
			current->getData().getLastName(),
			current->getData().getMembershipNo(),
			current->getData().getAmountDonated());

		current = current->getPtrToNext();
	}
}

DonorList& DonorList::operator=(const DonorList& otherList)
{
	if (&otherList != this)
	{
		if (count == 0)
		{
			copyCallingObjIsEmpty(otherList);
		}
		else if (count > otherList.count)
		{
			copyCallingObjLonger(otherList);
		}
		else if (count < otherList.count)
		{
			copyCallingObjShorter(otherList);
		}
		else
		{
			copyObjectsSameLength(otherList);
		}
	}
	else
	{
		std::cerr << "Attempted assignment to itself.";
	}

	return *this;
}

DonorList& DonorList::copyCallingObjIsEmpty(const DonorList& otherList)
{
	Node* current = otherList.first;

	for (int i = 0; i < otherList.count; ++i)
	{
		addDonor(current->getData().getFirstName(),
			current->getData().getLastName(),
			current->getData().getMembershipNo(),
			current->getData().getAmountDonated());

		current = current->getPtrToNext();
	}

	return *this;
}

DonorList& DonorList::copyObjectsSameLength(const DonorList& otherList)
{
	if (count == otherList.count)
	{
		Node* current = first;
		Node* other = otherList.first;

		for (int i = 0; i < count; ++i)
		{
			current->setData(other->getData());

			current = current->getPtrToNext();
			other = other->getPtrToNext();
		}
	}

	return *this;
}

DonorList& DonorList::copyCallingObjLonger(const DonorList& otherList)
{
	Node* current = first;
	Node* other = otherList.first;


	for (int i = 0; i < otherList.count; ++i)
	{
		if (i == otherList.count - 1)
		{
			last = current;
		}
		current->setData(other->getData());

		//trailCurrent = trailCurrent->getPtrToNext();
		current = current->getPtrToNext();
		other = other->getPtrToNext();
	}

	Node* temp = current;
	for (int i = 0; i <= (count - otherList.count); ++i)
	{
		current = current->getPtrToNext();
		deleteDonor(temp->getData().getMembershipNo());
		temp = current;
	}
	
	return *this;
}

DonorList& DonorList::copyCallingObjShorter(const DonorList& otherList)
{
	
	Node* current = first;
	Node* other = otherList.first;

	for (int i = 0; i < otherList.count; ++i)
	{
		if (i < count)
		{
			current->setData(other->getData());

			current = current->getPtrToNext();
			other = other->getPtrToNext();
		}
		else
		{
			addDonor(other->getData().getFirstName(),
				other->getData().getLastName(),
				other->getData().getMembershipNo(),
				other->getData().getAmountDonated());

			other = other->getPtrToNext();
		}
	}
	
	return *this;
}
