#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    int maxFreq = 0, result = mat[0][0];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int freq = 0;
            for (int r = 0; r < R; r++)
                for (int c = 0; c < C; c++)
                    if (mat[r][c] == mat[i][j])
                        freq++;
            if (freq > maxFreq) {
                maxFreq = freq;
                result = mat[i][j];
            }
        }
    }
    printf("%d\n", result);
    return 0;
}