#include <stdio.h>
#include <stdlib.h>

int main(){
    char f1[10],f2[10];
    char s1[20],s2[20];
    FILE *fp1,*fp2;

    printf("-------:Creating file:-------\n");
    printf("Enter source file :");
    scanf("%s\n",f1);

    fp1=fopen(f1,"w");
    printf("Enter text for %s\n",f1);
    fgets(s1,20,stdin);
    fclose(fp1);
    printf("\n>>>success writing<<<\n");

    fp1=fopen(f1,"r");

    printf("\n\n>>>>file open for Copying\n"
            "-------:Copying file:-------\n");
    printf("Enter target file :");
    scanf("%s",f2);

    fp2=fopen(f2,"w");
    fputs(s1,fp2);
    fputs("\n",fp2);

    fclose(fp1);
    fclose(fp2);
    printf("success\n");

    return 0;

}
