#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    int bestRow = 0, bestLen = 1;
    for (int i = 0; i < R; i++) {
        int len = 1;
        for (int j = 1; j < C; j++) {
            if ((mat[i][j] % 2 == 0) != (mat[i][j-1] % 2 == 0))
                len++;
            else
                break;
        }
        if (len > bestLen) {
            bestLen = len;
            bestRow = i;
        }
    }
    printf("%d\n", bestRow);
    return 0;
}