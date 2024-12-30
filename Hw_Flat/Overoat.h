#pragma once
#include <iostream>
class Overcoat
{
	char* m_type;
	int m_cost;
	size_t m_size;
public:
	Overcoat(char* type, int m_cost);
	~Overcoat();
	bool operator==(const Overcoat& other);
	Overcoat& operator=(const Overcoat& other);
	bool operator>(const Overcoat& other);
	friend std::ostream& operator<<(std::ostream& os, const Overcoat& other);
};
