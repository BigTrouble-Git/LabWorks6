#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab6.4\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 20;
			int arr[n] = { -1,-2,3,-4,-5,6,-7,8,-9,-10,11,-12,-13,-14,-15,-16,-17,-18,-19,-20 };
			int count = array_count(arr, n, 0);
			Assert::AreEqual(count, 4);
		}
	};
}
