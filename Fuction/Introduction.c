#include <stdio.h>
void FunNoParamNoReturn() // Defind Function no return no param
{
    int a, b, Addition;
    printf("Enter value a:");
    scanf("%i", &a);
    printf("Enter value a:");
    scanf("%i", &b);
    Addition = a + b;
    printf("Additio %d: \n", Addition);
}
int FunNoParamReturn()
{
    int a, b, Addition;
    printf("Enter value a:");
    scanf("%i", &a);
    printf("Enter value a:");
    scanf("%i", &b);
    Addition = a + b;
    return Addition;
}
void FunParamNoReturn(int a, int b)
{
    int sum = a + b;
    printf("Additio %d: \n", sum);
}
int FunParamReturn(int a, int b)
{
    int sum = a - b;
    return sum;
}
int main()
{

    int i1, i2;
    printf("Enter value a:");
    scanf("%i", &i1);
    printf("Enter value a:");
    scanf("%i", &i2);
    FunParamNoReturn(i1,i2);
    return 0;
}