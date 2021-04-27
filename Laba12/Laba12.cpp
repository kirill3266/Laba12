#include "Laba12.h"

IntModulo& IntModulo::operator=(const IntModulo& right) {
	if (this == &right) {
		return *this;
	}
	modulo = right.modulo;
	return *this;
}

IntModulo::IntModulo()
{
	modulo = 0;
}

IntModulo::IntModulo(int n)
{
	IntModulo::setModulo(n);
}

void IntModulo::input(int n){
	cout << "Vvedite modul" << endl;
	IntModulo::setModulo(n);
}

void IntModulo::output() {
	cout << "Modul is: " << IntModulo::getModulo() << endl;
}

unsigned IntModulo::setModulo(int n) {
	if (n <= 0 && n != 1) {
		cout << "Wrong module!Module has been set to default value" << endl;
		modulo = 0;
		return 0;
	}
	modulo = n;
}

unsigned IntModulo::getModulo()
{
	return modulo;
}

IntModulo::~IntModulo()
{
	cout << "Memory has been cleaned. Good bye." << endl;
}

