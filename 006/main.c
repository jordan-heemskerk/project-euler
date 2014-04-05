#include<stdio.h>

#define TARGET 100

int main() {
    printf("Result: %d", square_of_sum(TARGET) - sum_of_squares(TARGET));
}


int sum_of_squares(int target) {
    int sum = 0;
    int i;
    for (i = 0; i <= target; i ++) {
        sum += (i*i);
    }
    return sum;
}


int square_of_sum(int target) {
    int sum = 0;
    int i;
    for (i = 0; i <= target; i ++) {
        sum += i;
    }
    return (sum*sum);
}
