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
    printf("%s) Truth Table:\n  A   |   B   |Output	\n --------------------\n", gateName);
    for (int i = 0; i <5 ; i++) { printf("%s\n", rows[i]); } printf("\n");
}

int main()
{
    char a, b;
    int n; // Declare the variable n here
	label:
    printf("\t__-**LOGICAL OPERATIONS*-__\n");
    printf("\n\t*KNOW THE OUTPUT OF TWO STATEMENTS*\t\t\t\n");

    printf("\nSelect any (1to7) of the operators:\n\n");
    printf("1. Conjunction (AND)\n");
    printf("2. Disjunction (OR)\n");
    printf("3. NAND\n");
    printf("4. NOR\n");
    printf("5. Negation (NOT)\n");
    printf("6. Exclusive OR (EX_OR)\n");
    printf("7. Exclusive NOR (EX_NOR)\n\n");

    scanf("%d", &n);
    
    if (n < 1 || n > 7)
    {   printf("\nInvalid choice! Please select a valid operator (1to7).\n");
        return 1; // Exit the program when an invalid input
    }

    printf("\n\tBINARY VALUES FOR TWO INPUTS A & B\n");
    printf("\nEnter '1' for true and '0' for false:\n\n");
    scanf(" %c", &a);
    scanf(" %c", &b);

    if (a != '1' && a != '0' && b != '1' && b != '0')
    {   printf("\nInvalid inputs! Please enter '1' for true and '0' for false.\n");
        return 1; // Exit the program when an invalid input
    }
    
    menu(n, a, b);

  {
    const char* andRows[] = {
        "  0   |   0   |   0   ",
        "  0   |   1   |   0   ",
        "  1   |   0   |   0   ",
        "  1   |   1   |   1   ",
        " ___________________  "

    };

    const char* orRows[] = {
        "  0   |   0   |   0   ",
        "  0   |   1   |   1   ",
        "  1   |   0   |   1   ",
        "  1   |   1   |   1   ",
        " ___________________  "
    };

    const char* nandRows[] = {
        "  0   |   0   |   1   ",
        "  0   |   1   |   1   ",
        "  1   |   0   |   1   ",
        "  1   |   1   |   0   ",
        " ___________________  "
    };

    const char* norRows[] = {
        "  0   |   0   |   1   ",
        "  0   |   1   |   0   ",
        "  1   |   0   |   0   ",
        "  1   |   1   |   0   ",
        " ___________________  "
    };

    const char* notRows[] = {
        " -------- |   A` |  B`",
        " 0  |  0  |   1  |  1 ",
        " 0  |  1  |   1  |  0 ",
        " 1  |  0  |   0  |  1 ",
        " 1  |  1  |   0  |  0 "       
    };

    const char* xorRows[] = {
        "  0   |   0   |   0   ",
        "  0   |   1   |   1   ",
        "  1   |   0   |   1   ",
        "  1   |   1   |   0   ",
        " ___________________  "
    };

    const char* xnorRows[] = {
        "  0   |   0   |   1   ",
        "  0   |   1   |   0   ",
        "  1   |   0   |   0   ",
        "  1   |   1   |   1   ",
        " ___________________  "
    };
    
    int choice;
    printf("\n\n\t TO KNOW TRUTH TABLE of logic gates :\n");
    printf("1. AND\n2. OR\n3. NAND\n4. NOR\n5. NOT\n6. EX-OR\n7. EX-NOR\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);

    if (choice == 1) {
        TruthTable("\nAND", andRows);
    } else if (choice == 2) {
        TruthTable("\nOR", orRows);
    } else if (choice == 3) {
        TruthTable("\nNAND", nandRows);
    } else if (choice == 4) {
        TruthTable("\nNOR", norRows);
    } else if (choice == 5) {
        TruthTable("\nNOT", notRows);
    } else if (choice == 6) {
        TruthTable("\nEX-OR", xorRows);
    } else if (choice == 7) {
        TruthTable("\nEX-NOR", xnorRows);
    } else {printf("\nInvalid choice! Please enter a valid operator(1to7).\n");
           return 1; // Exit the program when an invalid input
    }}
    goto label;
    return 0;
}

void menu(int n, char a, char b)
{    switch (n)
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

int AND(char a, char b){
    if (a == '1' && b == '1')
    {   printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");}
    else{printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
         printf("FALSE= 0\n");}
    return 0;}

int OR(char a, char b){
    if (a == '1' || b == '1')
    {   printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");}
    else{printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");}
    return 0;}

int NAND(char a, char b){
    if (!(a == '1' && b == '1'))
    {   printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");}
    else{printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");}
    return 0;}

int NOR(char a, char b){
    if (!(a == '1' || b == '1'))
    {   printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");}  
    else{printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
         printf("FALSE= 0\n");}
    return 0;}

int NOT(char a , char b){
    if (a == '1'){printf("The NEGATION of A is\n");
         printf("FALSE= 0\n");}
    else{printf("The NEGATION of A is\n");
         printf("TRUE= 1\n");}
    if (b == '1'){printf("The NEGATION of B is\n");
         printf("FALSE = 0\n");} 
    else{printf("The NEGATION of B is\n");
         printf("TRUE = 1\n");}
    return 0;}

int EX_OR(char a, char b){
    if ((a == '1' || b == '1') && !(a == '1' && b == '1'))
    {    printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
         printf("TRUE= 1\n");}
    else{printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
         printf("FALSE= 0\n");}
    return 0;}

int EX_NOR(char a, char b){
    if ((a == '1' && b == '1') || !(a == '1' || b == '1'))
    {    printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n"); 
         printf("TRUE= 1\n");}
    else{printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
         printf("FALSE= 0\n");}
    return 0;}