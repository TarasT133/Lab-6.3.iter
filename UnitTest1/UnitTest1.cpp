#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.3.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[] = { 1, -2, -4,12, 1, -2, -3, 4 };
			Assert::IsTrue(sumOfPositiveTemplete(arr, 8) == 18);


			float arr1[] = { -1.4, 2.4, 1.6, -5.2, 3.5 };
			Assert::IsTrue(fabs(sumOfPositiveTemplete(arr1, 5) - 7.5) < 0.0000000001);

			unsigned arr2[] = { 1, 2, 4,12, 1, 2, 3, 4 };
			Assert::IsTrue(sumOfPositiveTemplete(arr2, 8) == 29);

		}
	};
}
