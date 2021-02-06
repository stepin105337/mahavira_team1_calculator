
#include "calculate_power.h"
int calculate_power(int Base_Number, int exponent)

{
    int Base_Number, exponent;
    long long result = 1;
    
    printf("Enter a base number: ");
    scanf("%d", &Base_Number);
    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result *= Base_Number;
        --exponent;
    }
    
    printf("Answer = %lld", result);
    
    return 0;
}
    