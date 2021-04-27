#ifndef Laba12
#define Laba12 

#include <iostream>
using namespace std;

class IntModulo
{
	unsigned modulo;
public:
	IntModulo& operator=(const IntModulo& right);
	IntModulo();
	IntModulo(IntModulo&);
	IntModulo(int n);
	~IntModulo();
	void input(int n);
	void output();
	unsigned getModulo();
	unsigned setModulo(int n);
};

#endif // !Laba12

