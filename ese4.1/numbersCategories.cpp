#include "numbersCategories.hpp"

bool isAbundant(int n)
{
    int sum = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;

            if (sum > n) {
                return true;
            }
        }
    }
    return false;
}

bool isDeficient(int n)
{
    int sum = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return n > sum || n == 1;
}

bool isAbundantPrimitive(int n)
{
    if (isAbundant(n)) {
        for (int i = 1; i <= n / 2; i++)
            if (n % i == 0) 
                if (!isDeficient(i))
                    return false;
        return true; 
    } else {
        return false;
    }
}

bool isSemiPerfect(int n)
{
    return isSPRecursive(n, 0, 0);
}

bool isSPRecursive(int n, int sum, int div)
{
    for (int i = div + 1; i <= n / 2; i++) {
        if (n % i == 0) {
            if (sum + i == n || isSPRecursive(n, sum + i, i))
                return true;
        }
    }

    return false;
}


bool isWeird(int n) {
    return !isSemiPerfect(n) && isAbundant(n);
}