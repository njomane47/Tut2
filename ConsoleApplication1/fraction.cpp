#pragma once
#pragma once
class Fraction
{

private:
	int numr, deno;
public:
	Fraction(int num = 0, int den = 1);
	~Fraction();

	int getnumerator();
	void Setnumerator(int num);
	int getdenominator();
	void Setdenominator(int num);

	Fraction add(Fraction add);
	Fraction subtract(Fraction subtract);
	Fraction multiply(Fraction multiply);
	Fraction division(Fraction division);

	Fraction operator+(Fraction add);
	Fraction operator-(Fraction subtract);
	Fraction operator*(Fraction multiply);
	Fraction operator/(Fraction division);
	void print();
};