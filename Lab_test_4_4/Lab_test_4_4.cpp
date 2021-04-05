#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_4_4/FuzzyNumber.cpp"
#include "../Lab_4_4/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest44
{
	TEST_CLASS(Labtest44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair* A = new FuzzyNumber(1, 7, 4);
			Pair* B = new FuzzyNumber(3, 9, 6);
			Pair* C = new FuzzyNumber();
			C = *A + B;
			Assert::AreEqual(C->GetA(), 6.0);
		}
	};
}
