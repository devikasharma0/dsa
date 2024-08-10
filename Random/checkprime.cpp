#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (num == 2 || num == 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Any number divisible by 2 or 3 is not prime
    }
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // Divisibility check
        }
    }
    
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
