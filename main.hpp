#include <iostream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

void getTwoValues(int &begin, int &end) {
    do {
        cout << "Enter two integer values (begin and end): ";
        cin >> begin >> end;
    } while (begin >= end);
}

int getNextPrime(int begin) {
    int num = begin + 1;
    while (!isPrime(num)) {
        num++;
    }
    return num;
}

int getPrevPrime(int end) {
    int num = end - 1;
    while (!isPrime(num)) {
        num--;
    }
    return num;
}
//********************
// Declare Function Prototypes
//********************

// ******************************
// Implement all your functions here
// ******************************
