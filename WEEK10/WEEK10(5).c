#include <stdio.h>
#define ROWS 3
#define COLS 3


int main(void) {
    int A[ROWS][COLS] = {
        {2, 3, 0},
        {8, 9, 1},
        {7, 0, 5}};
    int B[ROWS][COLS] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}};
    int C[ROWS][COLS];
    
    int i, j;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            C[i][j] = A[i][j] + B[i][j];  // 대응되는 요소들 덧셈
        }
    }

    // 결과 출력
    printf("Result of Matrix A + Matrix B:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%3d ", C[i][j]);  // 각 요소 출력
        }
        printf("\n");
    }

    return 0;
}
