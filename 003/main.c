#include<stdio.h>

#define TARGET 600851475143

int main() {
    int d = 2;
    long n = TARGET;
    int result;
    while (n > 1) {
        while (n % d == 0) {
	   result = d;
	   n = n / d;
	}
	d++;
    }
    printf("Result: %d", result);

}
