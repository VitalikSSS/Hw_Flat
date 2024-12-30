#include "Overoat.h"
Overcoat::Overcoat(char* type, int cost) :m_type{new char[strlen(type) + 1] }, m_size{strlen(type)+1}, m_cost{cost} { strcpy_s(m_type, m_size, type); }
Overcoat::~Overcoat() {
	delete[] m_type;
}
bool Overcoat::operator==(const Overcoat& other)
{
	return strcmp(m_type, other.m_type) == 0;
}
Overcoat& Overcoat::operator=(const Overcoat& other)
{
    delete[] m_type;
    m_size = strlen(other.m_type) + 1;
    m_type = new char[m_size];
    strcpy_s(m_type, m_size, other.m_type);
    m_cost = other.m_cost;
    return *this;
}
bool Overcoat::operator>(const Overcoat& other) {
	return m_cost > other.m_cost;
}
std::ostream& operator<<(std::ostream& os, const Overcoat& other);
