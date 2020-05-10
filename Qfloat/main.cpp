#include "qfloat.h"
#include <conio.h>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
	Qfloat* num = NULL;
	int base = ScanQfloat(num);
	PrintQfloat(num, base);
	return 0;
}