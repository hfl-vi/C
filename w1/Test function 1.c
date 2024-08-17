#include <stdio.h>
#include <cs50.h>

float add(float a, float b);

int main(void)
{
    float Fnum = get_float("What is the 1st number? ");
    float Snum = get_float("What is the 2nd number? ");
    float result = add(Fnum, Snum);
    printf("the answer is: %f\n", result);

}

float add(float a, float b)
{
    float result = (a + b);
    return result;
}
