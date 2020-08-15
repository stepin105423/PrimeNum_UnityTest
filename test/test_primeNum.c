#include <stdbool.h>
#include "unity.h"
#include "primenum.h"

void setUp(){}
/* Required by the unity test framework */

void tearDown(){}

void test_prime_number(void)
{
    TEST_ASSERT_EQUAL(true,isprime(5));
    TEST_ASSERT_EQUAL(true,isprime(7));
    TEST_ASSERT_EQUAL(false,isprime(9));
}

void test_zero_one(void)
{
    TEST_ASSERT_EQUAL(false,isprime(0));
    TEST_ASSERT_EQUAL(false,isprime(-1));
}
void test_negative(void)
{
    TEST_ASSERT_EQUAL(false,isprime(-12));
    TEST_ASSERT_EQUAL(false,isprime(-10));
}

int test_main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_prime_number);
    RUN_TEST(test_zero_one);
    RUN_TEST(test_negative);
    return UNITY_END();
}
