#include <stdio.h>
#include <string.h>

int main()
{
    char tabuleiro[3][3];
    int linha, coluna, i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}