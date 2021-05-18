#include "Laba12.h"

int main() {
	IntModulo firstModulo(-8);
	cout << "firstModulo is: " << firstModulo << endl;
	firstModulo.input();
	cout << "firstModulo is: " << firstModulo << endl;
	firstModulo.setVal(13);
	cout << "NewfirstModulo is: " << firstModulo << endl;
	IntModulo secondModulo =  firstModulo;
	cout << "secondModulo is: " << secondModulo << endl;
	firstModulo.setVal(2);
	secondModulo = firstModulo;
	cout << "CopiedsecondModulo is: " << secondModulo << endl;
	secondModulo.setVal(8);
	cout << "AgainseconfModulo is: " << secondModulo << endl;
	IntModulo thirdModulo = firstModulo + secondModulo;
	cout << "First SumModulo: " << thirdModulo << "\n";
	return 0;
}