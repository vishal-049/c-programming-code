#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    int minSum = -1, minRow = -1;
    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++)
            sum += mat[i][j];
        if (sum != 0) {
            if (minSum == -1 || sum < minSum) {
                minSum = sum;
                minRow = i;
            }
        }
    }
    printf("%d\n", minRow);
    return 0;
}