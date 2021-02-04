#include "vendor/unity.h"
#include "../src/armstrong_numbers.h"

void setUp(void)
{
}

void tearDown(void)
{
}

static void test_zero_is_an_armstrong_number(void)
{
   TEST_ASSERT_TRUE(is_armstrong_number(0));
}

static void test_single_digit_numbers_are_armstrong_numbers(void)
{
   TEST_ASSERT_TRUE(is_armstrong_number(5));
}

static void test_there_are_no_two_digit_armstrong_numbers(void)
{
   TEST_ASSERT_FALSE(is_armstrong_number(10));
}

static void test_three_digit_number_that_is_an_armstrong_number(void)
{
   TEST_ASSERT_TRUE(is_armstrong_number(153));
}

static void test_three_digit_number_that_is_not_an_armstrong_number(void)
{
   TEST_ASSERT_FALSE(is_armstrong_number(100));
}

static void test_four_digit_number_that_is_an_armstrong_number(void)
{
   TEST_ASSERT_TRUE(is_armstrong_number(9474));
}

static void test_four_digit_number_that_is_not_an_armstrong_number(void)
{
   TEST_ASSERT_FALSE(is_armstrong_number(9475));
}

static void test_seven_digit_number_that_is_an_armstrong_number(void)
{
   TEST_ASSERT_TRUE(is_armstrong_number(9926315));
}

static void test_seven_digit_number_that_is_not_an_armstrong_number(void)
{
   TEST_ASSERT_FALSE(is_armstrong_number(9926314));
}

static void test_digit_count_with_three_digit_number(void) {
   TEST_ASSERT_EQUAL_INT(3,digit_count(500));
}

static void test_digit_count_with_zero_digit_number(void) {
   TEST_ASSERT_EQUAL_INT(0,digit_count(0));
}

static void test_digit_count_with_one_digit_number(void) {
   TEST_ASSERT_EQUAL_INT(1,digit_count(1));
}





int main(void)
{
   UnityBegin("test/test_armstrong_numbers.c");

   RUN_TEST(test_zero_is_an_armstrong_number);
   RUN_TEST(test_single_digit_numbers_are_armstrong_numbers);
   RUN_TEST(test_there_are_no_two_digit_armstrong_numbers);
   RUN_TEST(test_three_digit_number_that_is_an_armstrong_number);
   RUN_TEST(test_three_digit_number_that_is_not_an_armstrong_number);
   RUN_TEST(test_four_digit_number_that_is_an_armstrong_number);
   RUN_TEST(test_four_digit_number_that_is_not_an_armstrong_number);
   RUN_TEST(test_seven_digit_number_that_is_an_armstrong_number);
   RUN_TEST(test_seven_digit_number_that_is_not_an_armstrong_number);
   RUN_TEST(test_digit_count_with_zero_digit_number);
   RUN_TEST(test_digit_count_with_three_digit_number);
   RUN_TEST(test_digit_count_with_one_digit_number);

   return UnityEnd();
}