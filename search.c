#include<stdio.h>
int main()
{
    FILE *f;
    struct product
    {
        char name[100];
        int code;
        int quantity;
        float price;
} pro;
    f=fopen("product.txt","r");
    int y,a=0;
    scanf("%d",&y);
    while(!feof(f))
    {
        fscanf(f,"%s\t%d\t%d\t%f",pro.name,&pro.code,&pro.quantity,&pro.price);
        if(y==pro.code)
           {
               a=1;
           }
    }
    if(a)
    {
        printf("The Product Is Available!\n");
    }
    else
    {
        printf("Sorry,There Is No Product Available :-(\n");
    }
return 0;
}
