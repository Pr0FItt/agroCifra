#include "pch.h"
#include "CppUnitTest.h"
#include "../../agroCifra/agroCifra/Number.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BinaryTreesTest
{
	TEST_CLASS(NumFactoredBinaryTrees)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::vector<int> arr = { 2, 4 };
			Assert::AreEqual(3, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod2) {
			std::vector<int> arr = { 2, 4, 5, 10 };
			Assert::AreEqual(7, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod3) {
			std::vector<int> arr = {};
			Assert::AreEqual(0, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod4) {
			std::vector<int> arr = {3};
			Assert::AreEqual(1, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod5) {
			std::vector<int> arr = {2, 3, 5};
			Assert::AreEqual(3, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod6) {
			std::vector<int> arr = {-2, 4};
			Assert::AreEqual(3, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod7) {
			std::vector<int> arr = {2, 3, 6, 18};
			Assert::AreEqual(12, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod8) {
			std::vector<int> arr = { 2, 3, 4, 6, 8, 12, 16, 24, 32 };
			Assert::AreEqual(134, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod9) {
			std::vector<int> arr = {3, 5, 7, 11};
			Assert::AreEqual(4, Number::numFactoredBinaryTrees(arr));
		}
		TEST_METHOD(TestMethod10) {
			std::vector<int> arr = { 1000000000, 999999999 };
			Assert::AreEqual(2, Number::numFactoredBinaryTrees(arr));
		}
	};
}
