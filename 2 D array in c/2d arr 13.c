#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    int count = 0;
    for (int i = 0; i < R; i++) {
        int isPalin = 1;
        int left = 0, right = C - 1;
        while (left < right) {
            if (mat[i][left] != mat[i][right]) {
                isPalin = 0;
                break;
            }
            left++;
            right--;
        }
        if (isPalin) count++;
    }
    printf("%d\n", count);
    return 0;
}