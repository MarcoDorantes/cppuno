#include "pch.h"
#include "CppUnitTest.h"
#include "consolelib2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
//https://learn.microsoft.com/en-us/visualstudio/test/writing-unit-tests-for-c-cpp?view=vs-2022
namespace spec
{
	TEST_CLASS(spec)
	{
	public:
		
		TEST_METHOD(triangle_output)
		{
			util::console screen;
			std::string output = screen.triangle(15, std::string("*"));
			Assert::IsTrue(output.size() > 0);
		}
	};
}