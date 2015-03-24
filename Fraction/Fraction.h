#pragma once
#pragma once
class Fraction
{

private:
	int numr, deno;
public:
	Fraction(int = 0, int = 1);
	~Fraction();

	int Getnumerator();
	void Setnumerator(int num);
	int Getdenominator();
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