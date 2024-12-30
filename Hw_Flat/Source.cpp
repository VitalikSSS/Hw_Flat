#include "Flat.h"
#include "Overoat.h"
ostream& operator<<(std::ostream& os, const Flat& other) {
	os << "Cost: "<<other.m_cost <<"Number: " << other.m_number << "Square: "<<other.m_square;
	return os;
}
ostream& operator<<(std::ostream& os, const Overcoat& other) {
	os << "Type: " << other.m_type << "Cost: " << other.m_cost;
	return os;
}
int main() {
	
	Flat f1(5,30,200);
	Flat f2(3,40,300);
	f1 == f2;
	cout<<(f1 > f2)<<endl;
	f1 = f2;
	cout << f1 << f2<<endl;
	cout << "Task2: " << endl;
	char type[7] = "Hello";
	char type2[10] = "Hello Loo";
	Overcoat ov1(type, 20);
	Overcoat ov2(type2, 30);
	bool h = ov1 > ov2;
	cout << h;
	ov1 = ov2;
	cout << ov1 << endl;
	bool h1 = ov1 == ov2;
	cout << h1;
}