// Day 10
// Program: Copy contents from one file to another
// Concept: File handling in C

#include <stdio.h>

int main() {
    FILE *source, *target;
    char sourceFile[100], targetFile[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter target file name: ");
    scanf("%s", targetFile);

    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Source file not found!\n");
        return 0;
    }

    target = fopen(targetFile, "w");

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    fclose(source);
    fclose(target);

    printf("File copied successfully.\n");

    return 0;
}
