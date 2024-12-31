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
    struct car cars[a];
    
    for (i=0;i<a;i++)
    {
        printf("Enter car model : ");
        scanf("%s",cars[i].model);
        printf("Enter car year : ");
        scanf("%d",&cars[i].year);
        printf("Enter car price : ");
        scanf("%d",&cars[i].price);
        printf("\n\n");
    }
    
    for (i=0;i<a;i++)
    {
        printf("Enter car model : %s\n",cars[i].model);
        printf("Enter car year : %d\n",cars[i].year);
        printf("Enter car price : %d\n",cars[i].price);
        printf("\n--------------------------------------------------------------------\n");
    }
    
    
    
    return 0;
}
