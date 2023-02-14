#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\lab6.2(recursion)\Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1_max)
		{
			const int n = 25;
			int arr[n] = { 1,2,-50,4,5,6,7,8,40,10,11,12,13,4,15,16,17,18,19,20 };
			int max = max_number(arr,n,0,0);
			Assert::AreEqual(max, 40);
		}
	};
}
