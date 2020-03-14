#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int input) {

	if ( input < 0 ) {
		input = -input;
	}

	if ( input == 2 ) {
		return  true;
	}
	else if ( input % 2 == 0 || input == 1 ) {
		return  false;
	}

	for ( int i = 3; i < sqrt(input)+1; i += 2 ) {
		if ( input % i == 0 ) {
			return false;
		}
	}
	
	return true;
}


int main() {
	while ( true ) {
		int number;
		cout << "Enter a Number to check if it is a Prime Number: ";
		cin >> number;
		
		cout << number << (isPrime(number) ? (" IS") : (" IS NOT")) << " a Prime Number." << endl;
	}
}
