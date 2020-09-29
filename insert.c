 #include<stdio.h>

struct product
    {
        char name[100];
        int code;
        int quantity;
        float price;
} pro[100];

 int main()
 {
     FILE *fp;
     char another='y';


    int i = 0;
     fp=fopen("product.txt","a+");
    if(fp==NULL)
    {
        puts("cannot open the file");
    }
    while(another=='y')
    {

            printf("NAME || CODE || QUANTITY || PRICE\n");
            scanf("%s %d %d %f",pro[i].name,&pro[i].code,&pro[i].quantity,&pro[i].price);
            fprintf(fp, "%s\t%d\t%d\t%f",pro[i].name,pro[i].code,pro[i].quantity,pro[i].price);
            fprintf(fp, "\n");
            //fputs("ABC", fp);
        printf("ANOTHER PRODUCT?PRESS-y!\nENOUGH?PRESS-n!");
        //fflush(stdin);
        another=getch();
        i++;
        //printf("\n");
    }
    fclose(fp);
    return 0;
 }
