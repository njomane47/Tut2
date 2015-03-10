#include"Fraction.h"
#include<iostream>
using namespace std;
Fraction::Fraction(int N, int D)// constructor
{
	numr = num;
	deno = den;
};

int Fraction::Getnumerator()
{
	return numr;
};

int Fraction::Getdenominator()
{
	return deno;
};

void Fraction::Setdenominator(int num)
{
	numr = num;
};


void Fraction::Setnumerator(int num)
{
	numr = num;
};


Fraction Fraction::add(Fraction.n)
{
	return Fraction(numr*n.deno + n.numr*deno, numr*n.deno);
};

Fraction Fraction::subtract(Fraction.n)
{
	return Fraction(numr*n.deno - n.numr*deno, deno*n.deno);
};

Fraction Fraction::multiply(Fraction.n)
{
	return Fraction(numr*n.numr, deno*n.deno);
};


Fraction Fraction::division(Fraction.n)
{
	return Fraction(numr*n.deno, deno*n.numr);

};

void Fraction::print()                                                    //displaying results
{
	int num1, num2;
	if (numr > deno)                                                      // Checking if it's a mixed fraction
	{
		num1 = numr / deno;
		num2 = numr % deno;
		cout << "answer is " << num1 << " " << num2 << "/" << deno << endl;
	}
	else if (numr == deno)
	{
		num1 = numr / deno;
		cout << "answer is " << num1 << endl;
	}
	else
	{
		cout << "answer is " << numr << "/" << deno;
	}
};

Fraction Fraction::operator+(Fraction.n)
{
	return Fraction(numr*n.deno + n.numr*deno, deno*n.deno);
};

Fraction Fraction::operator-(Fraction.n)
{
	return Fraction(numr*subtract.deno - subtract.numr*deno, deno*n.deno);
};

Fraction Fraction::operator*(Fraction.n)
{
	return Fraction(numr*n.numr, deno*n.deno);
};


Fraction Fraction::operator/(Fraction.n)
{
	return Fraction(numr*n.deno, deno*n.numr);

};



Fraction::~Fraction() // deconstructor
