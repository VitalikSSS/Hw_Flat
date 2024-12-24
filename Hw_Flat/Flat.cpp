#include "Flat.h"
class Flat
{
	int unsigned m_number;
	int unsigned m_square;
	int unsigned m_cost;
public:
	Flat(int number, int square, int cost) :m_number(number), m_square(square), m_cost(cost) {};
	bool operator==(const Flat& other) {
		return m_square == other.m_cost;
	}
	Flat& operator=(const Flat& other) {
		if (this != &other) {
			m_number = other.m_number;
			m_cost = other.m_cost;
			m_square = other.m_square;
		}
		return *this;
	}
	bool operator>(const Flat& other) {
		return m_cost > other.m_cost;
	}
};