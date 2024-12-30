#include "Flat.h"
	Flat::Flat(int number, int square, int cost) :m_number(number), m_square(square), m_cost(cost) {};
	bool Flat::operator==(const Flat& other) {
		return m_square == other.m_square;
	}
	Flat& Flat::operator=(const Flat& other) {
		if (this != &other) {
			m_number = other.m_number;
			m_cost = other.m_cost;
			m_square = other.m_square;
		}
		return *this;
	}
	bool Flat::operator>(const Flat& other) {
		return m_cost > other.m_cost;
	}
	ostream& operator<<(std::ostream& os, const Flat& bignum);