#include <stdio.h>
#include <stdlib.h>
#include <math.h> // for pow() method. Also, we can implement in recursion or for loop

double newtonMethod(double number, int iterationNumber); 


int main()
{
    double number;
    int iterationNum;
    printf("Please enter a number to find square: ");
    scanf("%lf",&number);
    printf("Please enter the iteration number(How many?): ");
    scanf("%d",&iterationNum);
    printf("\nAnswer: %.10lf\n",newtonMethod(number,iterationNum)); // for 10 digit after comma .10lf
    system("pause"); // for program can stop after entered number and iterationNum
    return 0;
}

double newtonMethod(double number, int iterationNumber)
{
    double temp = 0.0, x_N = 1.0;
    int i;
    for(i = 0; i < iterationNumber; i++)
    {
        temp = x_N - ( (pow( x_N , 2.0 ) - number ) / (2 * x_N) );
        x_N = temp;
    }
    return x_N;
}
