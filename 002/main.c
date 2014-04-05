#include<stdio.h>

#define MAX 4000000

int main() {
   int i,j;
   i = 1;
   j = 2;
   int even = 2;

   while (1) {
       int next = i + j;
       if (next > MAX) break;
       if (next % 2 == 0) even += next;
       swap(&i, &j); swap(&j, &next);
   }
   printf("Result: %d", even);
}

int swap (int* one, int* two) {
   int temp = *one;
   *one = *two;
   *two = temp;
}
