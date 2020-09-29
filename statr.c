#include<stdio.h>
int main()
{
    printf("***************STATIONARY SHOP***************\n");
    printf("                    GET WHAT YOU NEED!                    \n");
    printf("-----------------------------------------------------------\n");
    printf("NAME || CODE || QUANTITY || PRICE \n");
    printf("-----------------------------------------------------------\n");
    int n;
    printf("Product We Have:\n\n");
    printf("INSERT?-PRESS>1\n");
    printf("UPDATE?-RRESS>2\n");
    printf("DELETE?-PRESS>3\n");
    printf("SEARCH?-PRESS>4\n");
    printf("Product We Sell:\n\n");
    printf("INSERT?-PRESS>1\n");
    printf("UPDATE?-RRESS>2\n");
    printf("DELETE?-PRESS>3\n");
    printf("SEARCH?-PRESS>4\n");
    printf("PRESS ANY DIGIT- %d");
    scanf("%d",n);
    if(n==1)
    {
        //printf("enter name,code,quantity,price of the product!\n");
        product();
    }//insert product
  /*  if(n==2)
    {
        printf("");
        update();
    }//update product
    if(n==3)
    {
        printf("");
        delete_pro();
    }//delete product
    if(n==4)
    {
        printf("");
        search();
    }//search product
*/
}
