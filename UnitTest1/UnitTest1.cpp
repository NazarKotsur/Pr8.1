#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr8.1ITER/Pr8.1ITER.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[] = "abcsqdefg";
			Assert::AreEqual(1, Count(str));
		}

		TEST_METHOD(TestMethod2)
		{
			char str[] = "sqabcsqdefgqsq";
			char* result = Change(str);
			Assert::AreEqual("***abc***defg***q", result);
			delete[] result;
		}
	};
}