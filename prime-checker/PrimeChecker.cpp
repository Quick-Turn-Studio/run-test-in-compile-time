#include "PrimeChecker.h"

namespace primeChecker
{

bool isPrime(unsigned number)
{
    if (0 == number) {
        return false;
    }
    for (auto i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

} // namespace primeChecker
