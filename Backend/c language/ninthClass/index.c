#include <stdio.h>

int main()
{
    FILE *fptr;

    fptr = fopen("file2.txt", "r");

    fprintf(fptr, "file.2");

    fclose(fptr);
}