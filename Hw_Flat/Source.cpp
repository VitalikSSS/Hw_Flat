#include "Flat.h"
ostream& operator<<(std::ostream& os, const Flat& other) {
	os << "Cost: "<<other.m_cost <<"Number: " << other.m_number << "Square: "<<other.m_square;
	return os;
}
int main() {
	Flat f1(5,30,200);
	Flat f2(3,40,300);
	if (f1 == f2)
	{
		cout << "Cost is equalier";
	}
	cout<<(f1 > f2);
	f1 = f2;
	cout << f1 << f2;
}