#include "Laba12.h"

int main() {
	IntModulo firstModulo(-8);
	cout << "firstModulo is: " << firstModulo << endl;
	firstModulo.input();
	cout << "firstModulo is: " << firstModulo << endl;
	firstModulo.setModulo(5);
	cout << "NewfirstModulo is: " << firstModulo << endl;
	IntModulo secondModulo =  firstModulo;
	cout << "secondModulo is: " << secondModulo << endl;
	secondModulo = firstModulo;
	cout << "CopiedsecondModulo is: " << secondModulo << endl;
	secondModulo.setModulo(8);
	cout << "AgainseconfModulo is: " << secondModulo << endl;
	firstModulo += secondModulo;
	cout << "First SumModulo: " << firstModulo << "\n";
	return 0;
}