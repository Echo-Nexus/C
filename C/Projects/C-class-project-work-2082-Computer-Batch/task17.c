// WAP to add two 3x3 matrix 
// Written By Arix Ratgaiya
#include <stdio.h>

int main() {
    int A[3][3], B[3][3], sum[3][3];
    int i, j;

    // Input first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = A[i][j] - B[i][j];
        }
    }

    // Display result
    printf("Sum of the two 3x3 matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}