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
        int maxVal = mat[i][0], minVal = mat[i][0];
        for (int j = 1; j < C; j++) {
            if (mat[i][j] > maxVal) maxVal = mat[i][j];
            if (mat[i][j] < minVal) minVal = mat[i][j];
        }
        if (maxVal - minVal <= 1000) count++;
    }
    printf("%d\n", count);
    return 0;
}