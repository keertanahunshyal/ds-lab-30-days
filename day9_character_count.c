// Day 9
// Program: Count characters in a file
// Concept: File handling in C

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char ch;
    int count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return 0;
    }

    ch = fgetc(fp);

    while (ch != EOF) {
        count++;
        ch = fgetc(fp);
    }

    fclose(fp);

    printf("The file %s has %d characters\n", filename, count);

    return 0;
}
