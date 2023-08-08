#include <stdio.h>
#include <math.h>

// Function Declaration
void menu(int n, char a, char b);
int AND(char a, char b);
int OR(char a, char b);
int NAND(char a, char b);
int NOR(char a, char b);
int NOT(char a);
int EX_OR(char a, char b);
int EX_NOR(char a, char b);

int main()
{
    char a, b;
    int n; // Declare the variable n here

    printf("\t\tLOGICAL OPERATIONS\t\t\t\t\n");
    printf("\n\tKNOW THE OUTPUT OF TWO STATEMENTS.\t\t\t\n");

    printf("\nSelect any of the operators:\n");
    printf("1. Conjunction (AND)\n");
    printf("2. Disjunction (OR)\n");
    printf("3. NAND\n");
    printf("4. NOR\n");
    printf("5. Negation (NOT)\n");
    printf("6. Exclusive OR (EX_OR)\n");
    printf("7. Exclusive NOR (EX_NOR)\n");

    scanf("%d", &n);
    
    if (n < 1 || n > 7)
    {
        printf("\nInvalid choice! Please select a valid option (1 to 7).\n");
        return 1; // Exit the program when an invalid input
    }


    printf("\n\t\tBINARY VALUES FOR TWO INPUTS\n");
    int validInput = 0;
    
    while (!validInput) {
        scanf(" %c %c", &a, &b);
        
        if ((a == '0' || a == '1') && (b == '0' || b == '1')) {
            validInput = 1;
        } else {
            printf("\nInvalid inputs! Please enter '1' for true and '0' for false.\n");
            while (getchar() != '\n'); // Clear the input buffer
        }
    }



    menu(n, a, b);

    return 0;
}

void menu(int n, char a, char b)
{
    switch (n)
    {
    case 1:
        AND(a, b);
        break;
    case 2:
        OR(a, b);
        break;
    case 3:
        NAND(a, b);
        break;
    case 4:
        NOR(a, b);
        break;
    case 5:
        NOT(a);
        break;
    case 6:
        EX_OR(a, b);
        break;
    case 7:
        EX_NOR(a, b);
        break;
    default:
        printf("Invalid choice! Please select a valid option (1 to 7).\n");
        break;
    }
}

int AND(char a, char b)
{
    if (a == '1' && b == '1')
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int OR(char a, char b)
{
    if (a == '1' || b == '1')
     {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int NAND(char a, char b)
{
    if (!(a == '1' && b == '1'))
   {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int NOR(char a, char b)
{
    if (!(a == '1' || b == '1'))
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int NOT(char a)
{
    if (a == '1')
   {   
        printf("LOGICAL CONCLUSION for first binary input is\n");
        printf("FALSE= 0\n");
       
    }
    else
    {   
        printf("LOGICAL CONCLUSION for first binary input is\n");
        printf("TRUE= 1\n");
    }
    return 0;
}

int EX_OR(char a, char b)
{
    if ((a == '1' || b == '1') && !(a == '1' && b == '1'))
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int EX_NOR(char a, char b)
{
    if ((a == '1' && b == '1') || !(a == '1' || b == '1'))
   {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
        printf("LOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}