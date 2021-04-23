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

int main() {
	IntModulo firstModulo(-8);
	cout << "firstModulo is: " << firstModulo.getModulo() << endl;
	firstModulo.setModulo(5);
	cout << "NewfirstModulo is: " << firstModulo.getModulo() << endl;
	IntModulo* secondModulo = new IntModulo();
	cout << "secondModulo is: " << secondModulo->getModulo() << endl;
	*secondModulo = firstModulo;
	cout << "CopiedsecondModulo is: " << secondModulo->getModulo() << endl;
	secondModulo->setModulo(8);
	cout << "AgainfirstModulo is: " << firstModulo.getModulo() << endl;
	delete secondModulo;
	return 0;
}