#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int freq = 0;
            for (int r = 0; r < R; r++)
                for (int c = 0; c < C; c++)
                    if (mat[r][c] == mat[i][j])
                        freq++;
            if (freq == 1) {
                printf("%d\n", mat[i][j]);
                return 0;
            }
        }
    }
    printf("-1\n");
    return 0;
}
