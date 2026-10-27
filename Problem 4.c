#include <stdio.h>
void main()
  {
    float amount, discount = 0, delivery = 0, total;
    int membership;
    printf("Enter order amount: ");
    scanf("%f", &amount);
    printf("Enter membership type (1-Premium, 0-Regular): ");
    scanf("%d", &membership);
    if (amount >= 500)
     {
        delivery = 0;

        if (membership == 1)
        {
            discount = amount * 0.10;
        }
     }
    else
    {
        delivery = 50;
    }
      total = amount - discount + delivery;
      printf("Final amount to pay: Rs. %.2f", total);
      
}
