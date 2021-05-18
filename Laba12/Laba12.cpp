#include "Laba12.h"

IntModulo& IntModulo::operator=(const IntModulo& right) {
	if (this == &right) {
		return *this;
	}
	val = right.val;
	modulo = right.modulo;
	return *this;
}

IntModulo IntModulo::operator-(const IntModulo& right) const {
	unique_ptr<IntModulo> a(new IntModulo(val - right.val));
	return *a;
}

IntModulo IntModulo::operator*(const IntModulo& right) const {
	unique_ptr<IntModulo> a(new IntModulo(val * right.val));
	return IntModulo(*a);
}

ostream& operator<<(ostream &out,const IntModulo& right)
{
	out << right.val;
	return out;
}

IntModulo IntModulo::operator+(const IntModulo& right) const {
	unique_ptr<IntModulo> a(new IntModulo(val + right.val));
	return *a;
}

IntModulo::IntModulo()
{
	modulo = 7;
	cout << "Your modulo is:" << modulo << "\n";
	val = 0;
}

IntModulo::IntModulo(int n)
{
	modulo = 7;
	cout << "Your modulo is:" << modulo << "\n";
	setVal(n);
}

IntModulo::IntModulo(const IntModulo& right) {
	val = right.val;
	modulo = right.modulo;
}


void IntModulo::input(){
	cout << "Vvedite val" << endl;
	int n = 0;
	cin >> n;
	setVal(n);
}

void IntModulo::output() {
	cout << "Modul is: " << IntModulo::getVal() << endl;
}

void IntModulo::setVal(int n) {
	if (n < 0)
		while (n < 0) n += modulo;
	else if (n >= modulo) n %= (int)modulo;
	val = n;
}

int IntModulo::getVal()
{
	return val;
}

IntModulo::~IntModulo()
{
	cout << "Memory has been cleaned. Good bye." << endl;
}

