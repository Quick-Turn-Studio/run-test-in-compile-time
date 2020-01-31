#include <gtest/gtest.h>

#include <PrimeChecker.h>

namespace primeChecker::test
{

TEST(PrimeCheckerTest, IsPrimeNumberReturnsFalseIfZeroIsProvided)
{
    EXPECT_FALSE(primeChecker::isPrime(0));
}

TEST(PrimeCheckerTest, IsPrimeNumberReturnsTrueIfPrimeNumberIsProvided)
{
    EXPECT_TRUE(primeChecker::isPrime(1));
    EXPECT_TRUE(primeChecker::isPrime(2));
    EXPECT_TRUE(primeChecker::isPrime(3));
    EXPECT_TRUE(primeChecker::isPrime(5));
    EXPECT_TRUE(primeChecker::isPrime(7));
    EXPECT_TRUE(primeChecker::isPrime(11));
    EXPECT_TRUE(primeChecker::isPrime(13));
    EXPECT_TRUE(primeChecker::isPrime(17));
    EXPECT_TRUE(primeChecker::isPrime(23));
    EXPECT_TRUE(primeChecker::isPrime(248431));
    EXPECT_TRUE(primeChecker::isPrime(8457161));
}

TEST(PrimeCheckerTest, IsPrimeNumberReturnsFalseWhenNonPrimeNumberIsProvided)
{
    EXPECT_FALSE(primeChecker::isPrime(4));
    EXPECT_FALSE(primeChecker::isPrime(6));
    EXPECT_FALSE(primeChecker::isPrime(8));
    EXPECT_FALSE(primeChecker::isPrime(9));
    EXPECT_FALSE(primeChecker::isPrime(15));
    EXPECT_FALSE(primeChecker::isPrime(25));
    EXPECT_FALSE(primeChecker::isPrime(64));
    EXPECT_FALSE(primeChecker::isPrime(512));
    EXPECT_FALSE(primeChecker::isPrime(1057));
    EXPECT_FALSE(primeChecker::isPrime(8457163));
}

} // namespace primeChecker::test
