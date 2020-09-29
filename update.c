#include<stdio.h>
#include<string.h>
int main()
{

   FILE *f,*f1;
    printf("fdf");
    struct product
    {
        char name[100];
        int code;
        int quantity;
        float price;
    };
    struct product pro[50];
    f=fopen("product.txt","r");
    int j,i,l=0;
    j=0;
    char more;
        char nm[50];
        int cd,qn;
        float pr;
    while(!feof(f))
    {
        fscanf(f,"%s %d %d %f",pro[j].name,&pro[j].code,&pro[j].quantity,&pro[j].price);
       printf("fg");
        l++;
        j++;
    }
        printf("product detals:\n");
        scanf("%s %d %d %f",&nm,&cd,&qn,&pr);
    for(i=0;i<l;i++)
    {
        if(cd==pro[i].code)
        {
          strcpy(pro[i].name,nm);//pro[j].name=nm;
          pro[i].code=cd;
          pro[i].quantity=qn;
          pro[i].price=pr;
        }
        printf("tgg");
    }
    //fclose(f);
    f1=fopen("product.txt","w");
    for(i=0;i<l;i++)
    {
        fprintf(f,"%s %d %d %f",pro[i].name,&pro[i].code,&pro[i].quantity,&pro[i].price);
        printf("jsjd");
    }
    fclose(f);
    return 0;
}
