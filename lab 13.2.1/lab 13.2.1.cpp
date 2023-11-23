#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 13.2.1/var.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab1321
{
	TEST_CLASS(lab1321)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 1;
			int b = 5;
			int result = MAX(a, b);
			int test = 125;
			Assert::AreEqual(test, result);

		}
	};
}
