#include <iostream>
#include <vector>

using namespace std;

vector<bool> generateSieveOfEratosthenes(int limit) {
    // Create a vector of 'true' values, initially marking all numbers as potentially prime
    vector<bool> sieve(limit + 1, true);

    // Start iterating from 2 (since 1 and 0 are not considered prime)
    for (int i = 2; i * i <= limit; i++) {
        // If a number is marked as prime (true), mark all its multiples as composite (false)
        if (sieve[i]) {
            for (int j = i * i; j <= limit; j += i) {
                sieve[j] = false;
            }
        }
    }

    return sieve;
}

void printPrimeNumbersUpTo(int limit) {
    // Generate the Sieve of Eratosthenes
    vector<bool> sieve = generateSieveOfEratosthenes(limit);

    // Print the prime numbers
    cout << "Prime numbers up to " << limit << ": ";
    for (int i = 2; i <= limit; i++) {
        if (sieve[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    printPrimeNumbersUpTo(limit);

    return 0;
}


