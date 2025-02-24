#include <stdio.h>
int main()
{

    int i = 12;
    int b = 12;
    // int mul = i % b;
    // int add = i + b;
    // int sub = b - i;
    // double muli = i * b;
    // int devis = i / b;

    if (i / b == 1 || i == 12)
    {
        int y = i + 1;
        printf("%i", y);
    }
    else if (b == i)
    {
        printf("condetion 2 \n");
    }
    else if (i != b)
    {
        printf("Nothing");
    }
    else
    {
        printf("Done");
    }
    char m = 'j';
    switch (m)
    {
    case 'j':
        printf("Jan");
        // break;
    case 'f':
        printf("Feb");
        // break;
    case 'm':
        printf("Mar");
        // break;
    case 'a':
        printf("Apr");
        // break;
    case 'M':
        printf("May");
        // break;
    case 'k':
        printf("Jun");
        int a = m + 1;
        // break;
    case 'J':
        printf("Jul");
        // break;
    case 'A':
        printf("Aug");

    case 's':
        printf("Sep");
        // break;
    case 'o':
        printf("Oct");
        // break;
    case 'n':
        printf("Nov");
        // break;
    case 'd':
        printf("Dec");
        // break;
    default:
        printf("Nothing");
    }
    return 0;
}