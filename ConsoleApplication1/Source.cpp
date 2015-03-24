#include <iostream>
#include "fraction.h"

int main()
{

	fraction num1(3, 5);
	fraction num2(8, 7);
	fraction ans = num1 + num2;
	ans.print();
	system("pause");
	return 0;

}