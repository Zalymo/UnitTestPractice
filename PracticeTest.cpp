/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest() {} //constructor runs before each test
		virtual ~PracticeTest() {

		} //destructor cleans up after tests
		virtual void SetUp() {
			
		} //sets up before each test (after constructor)
		virtual void TearDown() {

		} //clean up after each test, (before destructor)

		//Practice test_object;
};

TEST(PracticeTest, smoke_test)
{
    Practice test_object;
	ASSERT_TRUE(true);

	int a[7] = {0, 2, 3, 4, 5, 6, 7};
	ASSERT_EQ(test_object.allnighter(a), &a[0]);
	ASSERT_NE(test_object.allnighter(a), nullptr);
	
	ASSERT_EQ(test_object.count_starting_repeats("aaaa"), 3);
	ASSERT_NE(test_object.count_starting_repeats("aaaa"), 0);

	ASSERT_EQ(test_object.isPalindrome("racecar"), true);
}