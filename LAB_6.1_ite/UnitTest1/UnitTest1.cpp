#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.1_ite/lab_6.1_ite.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountAndSumElements)
        {
            const int size = 10;
            int testArray[size] = { -4, 5, -6, 3, 0, -8, 7, -10, 2, -2 };
            int sum;

            int expectedCount = 5;
            int expectedSum = -30; 

            int actualCount = CountAndSumElements(testArray, size, sum);

            Assert::AreEqual(expectedCount, actualCount);
            Assert::AreEqual(expectedSum, sum);
        }

        TEST_METHOD(TestReplaceElementsWithZero)
        {
            const int size = 10;
            int testArray[size] = { -4, 5, -6, 3, 0, -8, 7, -10, 2, -2 };
            int expectedArray[size] = { 0, 5, 0, 3, 0, 0, 7, 0, 2, 0 };

            ReplaceElementsWithZero(testArray, size);

            for (int i = 0; i < size; i++) {
                Assert::AreEqual(expectedArray[i], testArray[i]);
            }
        }
    };
}