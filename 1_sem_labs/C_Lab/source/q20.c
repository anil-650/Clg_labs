//20. Write a program to copy the content of one file to other.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch, f1[20], f2[20];
    FILE *source, *target;

    printf("Enter file name to copy from :\n");
    scanf("%s",f1);

    source = fopen(f1, "r");
    if (source == NULL) {
        printf("File not found\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter file name to copy to :\n");
    scanf("%s",f2);

    target = fopen(f2, "w");
    if (target == NULL) {
        fclose(source);
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, target);
    
    printf("File copied successfully.\n");
    fclose(source);
    fclose(target);
    return 0;
}
