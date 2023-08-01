#include <stdio.h>

int menu(char a, char b);
int conjunction(char a, char b);
int disjunction(char a, char b);
int conditional(char a, char b);
int biconditional(char a, char b);

int main()
{
    char a, b;
    printf("Enter t for true and f for false: ");
    scanf(" %c", &a);
    scanf(" %c", &b);
    printf("Enter your choice: ");
    menu(a, b);
    return 0;
}

int menu(char a, char b)
{
    int ch;
    printf("Enter 1.Conjunction 2.Disjunction 3.Conditional 4.Biconditional: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        conjunction(a, b);
        break;
    case 2:
        disjunction(a, b);
        break;
    case 3:
        conditional(a, b);
        break;
    case 4:
        biconditional(a, b);
        break;
    default:
        printf("Invalid choice! Please select a valid option.\n");
        menu(a, b);
        break;
    }
    return 0;
}

int conjunction(char a, char b)
{
    if (a == 't')
    {
        if (b == 't')
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    else
    {
        printf("false\n");
    }
    return 0;
}

int disjunction(char a, char b)
{
    if (a == 't')
    {
        printf("true\n");
    }
    else
    {
        if (b == 't')
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    return 0;
}

int conditional(char a, char b)
{
    if (a == 't')
    {
        if (b == 't')
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    else
    {
        printf("true\n");
    }
    return 0;
}

int biconditional(char a, char b)
{
    if (a == 't')
    {
        if (b == 't')
        {
            printf("true\n");
        }
        else
        {
            printf("false\n");
        }
    }
    else
    {
        if (b == 't')
        {
            printf("false\n");
        }
        else
        {
            printf("true\n");
        }
    }
    return 0;
}