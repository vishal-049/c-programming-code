#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    int maxDiff = 0;
    for (int r1 = 0; r1 < R; r1++) {
        for (int r2 = 0; r2 < R; r2++) {
            if (r1 == r2) continue;
            for (int j1 = 0; j1 < C; j1++) {
                for (int j2 = 0; j2 < C; j2++) {
                    int diff = mat[r1][j1] - mat[r2][j2];
                    if (diff < 0) diff = -diff;
                    if (diff > maxDiff) maxDiff = diff;
                }
            }
        }
    }
    printf("%d\n", maxDiff);
    return 0;
}
