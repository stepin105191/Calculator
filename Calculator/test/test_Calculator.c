#include "unity.h"
#include "Calculator.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_ADD(void)
{
    TEST_ASSERT_EQUAL(15,add(10,5));
    TEST_ASSERT_EQUAL(150,add(100,50));
}
void test_SUB(void)
{
    TEST_ASSERT_EQUAL(5,sub(10,5));
    TEST_ASSERT_EQUAL(50,sub(100,50));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_ADD);
  RUN_TEST(test_SUB);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
