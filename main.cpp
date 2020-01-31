#include <iostream>

#include <PrimeChecker.h>

int main()
{
    std::cout << "Please pride number:";
    unsigned number = 0;
    std::cin >> number;

    if (primeChecker::isPrime(number)) {
        std::cout << number << " is prime number.\n";
    }
    else {
        std::cout << number << " is not prime number.\n";
    }
    return 0;
}