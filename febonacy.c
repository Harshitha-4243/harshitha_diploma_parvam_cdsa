#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Ask user for number of terms in Fibonacci sequence
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print first two terms
    if (n >= 1) {
        printf("Fibonacci Sequence: \n");
        printf("%d ", first);  // First term
    }
    if (n >= 2) {
        printf("%d ", second);  // Second term
    }

    // Calculate remaining Fibonacci terms
    for (int i = 3; i <= n; i++) {
        next = first + second;  // Next term = sum of previous two terms
        printf("%d ", next);
        first = second;  // Update first to second
        second = next;   // Update second to next
    }

    printf("\n");  // Newline after printing all terms
    return 0;
}
