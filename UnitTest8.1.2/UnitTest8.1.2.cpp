#include "pch.h"
#include "CppUnitTest.h"
#include "../Project8.1.2/project8.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest812
{
	TEST_CLASS(UnitTest812)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			char str[9] = "12.4.6.8";
			c = find_index(str,0,0);
			Assert::AreEqual(c, 6);
		}
	};
}
