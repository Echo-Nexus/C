// WAP to add two 2x3 matrix 
// Written By Arix Ratgaiya
#include <stdio.h>

int main() {
    int A[2][3], B[2][3], sum[2][3];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 2x3 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 2x3 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    printf("Sum of the two 2x3 matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}