#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Fraction/Fraction.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace fractiontest
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Testaddtwofraction)
		{
			Fraction Frac;
			Assert::AreEqual((Frac.add(Frac(1, 2) + Frac(1, 2))), Frac(1, 1));
		}

		TEST_METHOD(Testsubtracttwofraction)
		{
			Fraction Frac(1, 2);
			Fraction Frac2(1, 2);
			Fraction Frac3(0, 1);

			Assert::AreEqual((Frac.subtract(Frac2), Frac3);
		};

		TEST_METHOD(Testdivisiontwofraction)
		{
			Fraction Frac;
			Assert::AreEqual((Frac.division(Frac(1, 2) / Frac(1, 2))), Frac(1, 1));
		};


		TEST_METHOD(Testamultiplytwofraction)
		{
			Fraction Frac;
			Assert::AreEqual((Frac.multiply(Frac(1, 2) * Frac(1, 2))), Frac(1, 4));
		}

	};
}