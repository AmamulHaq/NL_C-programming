#include <stdio.h>
#include <math.h>

// Function Declaration
void menu(int n, char a, char b);
int AND(char a, char b);
int OR(char a, char b);
int NAND(char a, char b);
int NOR(char a, char b);
int NOT(char a, char b);
int EX_OR(char a, char b);
int EX_NOR(char a, char b);
void TruthTable(const char* gateName, const char* rows[]) 
{
    printf("%s) Truth Table:\n    A   |   B   |Output	\n  ----------------------\n", gateName);
    for (int i = 0; i < 4; i++) { printf("%s\n", rows[i]); } printf("\n");
}

int main()
{
    char a, b;
    int n; // Declare the variable n here
	label:
    printf("\t\t\n\nLOGICAL OPERATIONS\t\t\t\t\n");
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


    printf("\n\tBINARY VALUES FOR TWO INPUTS\n");
    printf("\nEnter '1' for true and '0' for false: ");
    scanf(" %c", &a);
    scanf(" %c", &b);

    if (a != '1' && a != '0' && b != '1' && b != '0')
    {
        printf("\nInvalid inputs! Please enter '1' for true and '0' for false.\n");
        return 1; // Exit the program when an invalid input
    }
    
    
        menu(n, a, b);
        
   
  {
    const char* andRows[] = {
        "  0   |   0   |   0   ",
        "  0   |   1   |   0   ",
        "  1   |   0   |   0   ",
        "  1   |   1   |   1   "
    };

    const char* orRows[] = {
        "  0   |   0   |   0   ",
        "  0   |   1   |   1   ",
        "  1   |   0   |   1   ",
        "  1   |   1   |   1   "
    };

    const char* nandRows[] = {
        "  0   |   0   |   1   ",
        "  0   |   1   |   1   ",
        "  1   |   0   |   1   ",
        "  1   |   1   |   0   "
    };

    const char* norRows[] = {
        "  0   |   0   |   1   ",
        "  0   |   1   |   0   ",
        "  1   |   0   |   0   ",
        "  1   |   1   |   0   "
    };

    const char* notRows[] = {
        "  0   |   1   ",
        "  1   |   0   "
    };

    const char* xorRows[] = {
        "  0   |   0   |   0   ",
        "  0   |   1   |   1   ",
        "  1   |   0   |   1   ",
        "  1   |   1   |   0   "
    };

    const char* xnorRows[] = {
        "  0   |   0   |   1   ",
        "  0   |   1   |   0   ",
        "  1   |   0   |   0   ",
        "  1   |   1   |   1   "
    };
    
    int choice;
    printf("\n\n\t TO KNOW TRUTH TABLE of logic gates :\n");
    printf("1. AND\n2. OR\n3. NAND\n4. NOR\n5. NOT\n6. EX-OR\n7. EX-NOR\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    if (choice == 1) {
        TruthTable("AND", andRows);
    } else if (choice == 2) {
        TruthTable("OR", orRows);
    } else if (choice == 3) {
        TruthTable("NAND", nandRows);
    } else if (choice == 4) {
        TruthTable("NOR", norRows);
    } else if (choice == 5) {
        TruthTable("NOT", notRows);
    } else if (choice == 6) {
        TruthTable("EX-OR", xorRows);
    } else if (choice == 7) {
        TruthTable("EX-NOR", xnorRows);
    } else {
        printf("Invalid choice, please enter a valid operator.\n");
        return 1;}
  }
    goto label;
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
        NOT(a, b);
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
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int OR(char a, char b)
{
    if (a == '1' || b == '1')
     {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int NAND(char a, char b)
{
    if (!(a == '1' && b == '1'))
   {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int NOR(char a, char b)
{
    if (!(a == '1' || b == '1'))
    {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int NOT(char a , char b)
{
    if (a == '1')
   {   
        printf("The NEGATION for first binary input is\n");
        printf("FALSE= 0\n");
       
    }
    else
    {   
        printf("The NEGATION for first binary input is\n");
        printf("TRUE= 1\n");
    }

    if (b == '1') {
        printf("The NEGATION for second binary input is\n");
        printf("FALSE = 0\n");
    } else {
        printf("The NEGATION for second binary input is\n");
        printf("TRUE = 1\n");
    }
    return 0;
}

int EX_OR(char a, char b)
{
    if ((a == '1' || b == '1') && !(a == '1' && b == '1'))
    {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    }
    else
    {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}

int EX_NOR(char a, char b)
{
    if ((a == '1' && b == '1') || !(a == '1' || b == '1'))
   {   
   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n"); 
        printf("TRUE= 1\n");
    }
    else
    {   
       printf("\n\n\tOUTPUT\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }
    return 0;
}