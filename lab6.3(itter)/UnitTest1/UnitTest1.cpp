#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab6.3\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1_numbers)
		{
			const int n = 25;
			int arr[n] = { 1,2,3,4,5,6,7,8,40,10,11,12,13,4,15,16,17,18,19,20,-100,44,20,43,41 };
			int numbers = array_count(arr, n);
			Assert::AreEqual(numbers, 14);
		}
	};
}
