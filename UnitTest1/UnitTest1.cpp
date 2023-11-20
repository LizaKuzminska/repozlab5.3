#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			z = y(0.0);
			Assert::AreEqual(z, 9.0);

		}
	};
}
