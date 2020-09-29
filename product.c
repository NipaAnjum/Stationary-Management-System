#include<stdio.h>
int main()
{
    FILE *pro;
    char x[100];
    pro=fopen("product.txt","a+");
    while(!feof(pro))
    {
        if(feof(pro)) break;
        fscanf(pro,"%s",x);
        printf("%s\t",x);
         fscanf(pro,"%s",x);
        printf("%s\t",x);
         fscanf(pro,"%s",x);
        printf("%s\t",x);
         fscanf(pro,"%s",x);
        printf("%s\t",x);
         printf("\n");
    }
    printf("\n");
    fclose(pro);
}
