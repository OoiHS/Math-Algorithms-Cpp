#ifndef __MAIN_UID__
 #define __MAIN_UID__ 562700834657420
#else
 #pragma once
#endif

#include "../PrimeNumber/PrimeNumber.cpp"

#include <iostream>
using namespace std;

bool primeFactor( int* fact1, int* fact2, int number ) {

	if ( number % 2 == 0 && isPrime(number / 2) ){
		(*fact1) = 2;
		(*fact2) = number/2;
		return true;
	}
	else {
		for ( int i = 3; i < number/2; i += 2 ) {
			if ( number % i == 0 ) {
				if ( isPrime(i) ) {
					if ( isPrime(number / i) ){
						(*fact1) = i;
						(*fact2) = number/i;
						return true;
					}
				}
			}
		}
	}

	return false;
}


#if __MAIN_UID__ == 562700834657420
int main() {
	while ( true ) {
		int number = 0;
		cout << "Please enter a number to find its Prime Factors: " << endl;
		cin >> number;
		int fact1;
		int fact2;
		
		if ( primeFactor( &fact1, &fact2, number ) ) {
			cout << fact1 << " " << fact2 << endl;
		}
		else {
			cout << "No Prime Factors Found!" << endl;
		}
	}
}
#endif
