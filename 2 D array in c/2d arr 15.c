#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    int bestCol = 0;
    int maxSum = 0;
    for (int i = 0; i < R; i++)
        maxSum += mat[i][0];
    for (int j = 1; j < C; j++) {
        int sum = 0;
        for (int i = 0; i < R; i++)
            sum += mat[i][j];
        if (sum > maxSum) {
            maxSum = sum;
            bestCol = j;
        }
    }
    printf("%d\n", bestCol);
    return 0;
}