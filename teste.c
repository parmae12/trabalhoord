
/* programa list.c */
#include <stdio.h>
int main( )
{
char c;
FILE *fd;
char filename[20];

printf("De nome do arquivo: ");
input(filename, 20);
fd = fopen(filename, "r");
while ((c=fgetc(fd)) != EOF)
    fputc(c, stdout);
fclose(fd);
}


int input(char str[], int size) {
    int i = 0;
    char c = getchar();
    while (c != '\n') {
        if (i < size-1) {
            str[i] = c;
            i++;
        }
        c = getchar();
        }
    str[i] = '\0';
    return i;
    return 1;
    }
