#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Fraction/fraction.h"

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
			Fraction Frac;
			Assert::AreEqual((Frac.subtract(Frac(1, 2) - Frac(1, 2))), Frac(0, 1));
		}

		TEST_METHOD(Testdivisiontwofraction)
		{
			Fraction Frac;
			Assert::AreEqual((Frac.division(Frac(1, 2) / Frac(1, 2))), Frac(1, 1));
		}


		TEST_METHOD(Testamultiplytwofraction)
		{
			Fraction Frac;
			Assert::AreEqual((Frac.multiply(Frac(1, 2) * Frac(1, 2))), Frac(1, 4));
		}

	};
}