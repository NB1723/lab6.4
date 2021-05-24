#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { 1, 1, 1, 1, 1 };
			int b[5] = { 1, 1, 2, 1, 1 };
			Assert::AreEqual(Ordered(a, a + 5), true);
			Assert::AreEqual(Ordered(b, b + 5), false);
		}
	};
}
