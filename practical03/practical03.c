#include <stdio.h>
#include <math.h>

int main(void)
{
    //Initializing values for int N, float a and b
    int N = 12;
    float a = 0;
    float b = 60;
    
    //Assigning pi/3 to the variable b_rad
    float b_rad;
    b_rad = (M_PI * b) / 180;
    
    //Performing the sum
    float sum = tan(a) + tan(b_rad);
    printf("The value of sum before the loop is: %f\n", sum);
    int i;
    for (i = 5; i < 60; i = i + 5)
    {
        //Writing the equation 2tan(xi)
        sum += 2 * tan(i * M_PI / 180);
    }

    printf("The value of sum after the loop is: %f\n", sum);
    //Creating a variable sum and initializing  b-1/2N to it
    sum = ((b_rad - a) / (2 * N)) * sum;
    printf("The final value of the sum is: %f\n", sum);
    printf("The actual value is %f\n", log(2));
    return 0;
}
