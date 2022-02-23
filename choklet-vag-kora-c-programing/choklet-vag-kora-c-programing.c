#include <stdio.h>
int main() {
    int Chocolates, nephews, quotient, remainders,brothes_sister;
    printf("Enter Chocolates: ");
    scanf("%d", &Chocolates);
    printf("Enter Nephews: ");
    scanf("%d", &nephews);
    
    brothes_sister = Chocolates - 5;
    Chocolates = brothes_sister;

    quotient = Chocolates / nephews;
    remainders = Chocolates % nephews;
    
    printf("Chocolates Pabe nephews ra = %d\n", quotient);
    printf("Remainder thakbe = %d", remainders);
    
    return 0;
}
