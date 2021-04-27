#include "Laba12.h"

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