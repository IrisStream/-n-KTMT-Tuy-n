#include "qfloat.h"
#include <conio.h>
using namespace std;

int main()
{
	Qfloat x("1234.8125");
	Qfloat::printBit(x.getBitSeq());
	cout <<endl << x.getValue() << endl;
	return 0;
}