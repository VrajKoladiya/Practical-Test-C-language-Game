#include <stdio.h>

struct car{
    
    char model[20];
    int year;
    int price;
};

int main() {
    
    int a;
    printf("Enter car count : ");
    scanf("%d",&a);
    
    int i;
    struct car car[a];
    
    for (i=1;i<=a;i++)
    {
        printf("Enter car model : ");
        scanf("%s",car[i].model);
        printf("Enter car year : ");
        scanf("%d",&car[i].year);
        printf("Enter car price : ");
        scanf("%d",&car[i].price);
        printf("\n\n");
    }
    
    for (int i=1;i<=a;i++)
    {
        printf("Enter car model : %s\n",car[i].model);
        printf("Enter car year : %d\n",car[i].year);
        printf("Enter car price : %d\n",car[i].price);
        printf("\n--------------------------------------------------------------------\n");
    }
    
    
    
    return 0;
}
