// Day 6
// Program: Count number of lines in a file
// Concept: File handling in C

#include <stdio.h>

int countLines(char filename[]) {
    FILE *fp;
    char ch;
    int lines = 0;

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }

    fclose(fp);

    return lines + 1;
}

int main() {
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Total number of lines = %d\n", countLines(filename));

    return 0;
}
