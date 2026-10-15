#include "pch.h"
#include "CppUnitTest.h"
#include "../lab0503/lab0503.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0503
{
	TEST_CLASS(UnitTest0503)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = s(0.0);
			Assert::AreEqual(t, 0.0);
		}
	};
}
