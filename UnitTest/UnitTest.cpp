#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3_iter/lab6.3_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 4;
			int a[n] = { -3,6,8,-10 };
			int c;
			c = SumParn(a, n);
			Assert::AreEqual(4, c);
		}
	};
}
