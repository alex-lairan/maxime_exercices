#include "vendor/unity.h"
#include "../src/fibonacci.h"

void setUp(void)
{
}

void tearDown(void)
{
}

static void test_zero(void)
{
   TEST_ASSERT_EQUAL_INT(0, fibonacci(0));
}

static void test_one(void)
{
   TEST_ASSERT_EQUAL_INT(1, fibonacci(1));
}

static void test_two(void)
{
   TEST_ASSERT_EQUAL_INT(1, fibonacci(2));
}

static void test_three(void)
{
   TEST_ASSERT_EQUAL_INT(2, fibonacci(3));
}

static void test_four(void)
{
   TEST_ASSERT_EQUAL_INT(3, fibonacci(4));
}

static void test_five(void)
{
   TEST_ASSERT_EQUAL_INT(5, fibonacci(5));
}

static void test_six(void)
{
   TEST_ASSERT_EQUAL_INT(8, fibonacci(6));
}

int main(void)
{
   UnityBegin("test/fibonacci.c");

   RUN_TEST(test_zero);
   RUN_TEST(test_one);
   RUN_TEST(test_two);
   RUN_TEST(test_three);
   RUN_TEST(test_four);
   RUN_TEST(test_five);
   RUN_TEST(test_six);

   return UnityEnd();
}
