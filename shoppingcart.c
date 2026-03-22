#include <stdio.h>
#include <string.h>

int main() {
    int quantity;
    float price;
    float total;
    char item[50];
    
    printf("what would you like to eat today: ");
    fgets(item, sizeof(item), stdin);
    item[strcspn(item, "\n")] = 0;
    
    printf("what is the price for your desired item: ");
    scanf("%f" , &price);

    printf("how many would you like to have?: ");
    scanf("%d" , &quantity);
    
    total = price * quantity;
    printf("your total would be %.2f\n" , total);
   
    //BILL
    printf("ITEM - %s\n" , item);
    printf("PRICE - %f\n" , price);
    printf("QUANTITY - %d\n" , quantity);
    printf("TOTAL - %.2f" , total);


    return 0;
}
