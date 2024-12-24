#pragma once
#include <iostream>
using namespace std;
class Flat
{
	int unsigned m_number;
	int unsigned m_square;
	int unsigned m_cost;
public:
	Flat(int number, int square, int cost);
	bool operator==(const Flat& other);
	Flat& operator=(const Flat& other);
	bool operator>(const Flat& other);
	friend ostream& operator<<(std::ostream& os, const Flat& bignum);
};
