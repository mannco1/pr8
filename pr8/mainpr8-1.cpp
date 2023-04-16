#include <iostream>

#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	type3 t3(5);
	type4 t4(2, -8);

	
	t3.show();
	t4.show();

	t3.Get_answer();
	t4.Get_answer();

	
	return 0;
}