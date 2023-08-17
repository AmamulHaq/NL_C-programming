#include <stdio.h>
#include <string.h>
#include <conio.h>

// Function Declarations
void menu(int n, char a, char b);
int AND(char a, char b);
int OR(char a, char b);
int NAND(char a, char b);
int NOR(char a, char b);
int NOT(char a, char b);
int EX_OR(char a, char b);
int EX_NOR(char a, char b);
void TruthTable(const char* gateName, const char* rows[]) 
{   //Function to display the header of the truth table with the gate's name
    printf("%s) Truth Table:\n  A   |   B   |Output  \n --------------------\n", gateName);
    for (int i = 0; i < 5; i++) { 
        printf("%s\n", rows[i]); 
    }printf("\n");
}

int main()
{
    char a, b;
    int n,t;
	label:
 while (1) {//To display the tittle for users and ask to explore the various logic operators.
        printf("\t__--*****LOGICAL OPERATIONS*****--__\n");
        printf("\n\t*KNOW THE OUTPUT OF TWO STATEMENTS*\n");

        printf("\nSelect any (1 to 7) of the operators:\n\n");
        printf("1. Conjunction (AND)\n");
        printf("2. Disjunction (OR)\n");
        printf("3. NAND\n");
        printf("4. NOR\n");
        printf("5. Negation (NOT)\n");
        printf("6. Exclusive OR (EX_OR)\n");
        printf("7. Exclusive NOR (EX_NOR)\n\n");

        if (scanf("%d", &n) == 1) {
            if (n >= 1 && n <= 7) {
                break; // Exit the loop when a valid choice is provided
            }} else {
            printf("\nInvalid input! Please enter a valid operator (1 to 7).\n\n");
            while (getchar() != '\n'); // Clear input buffer
        }}

    
        while (1) {
        printf("\n\tBINARY VALUES FOR TWO INPUTS A & B\n");
        printf("\nEnter '1' for true and '0' for false:\n\n");
        scanf(" %c %c", &a, &b);

        if ((a == '1' || a == '0') && (b == '1' || b == '0')) {
          break; // Exit the loop when valid input is provided
        }printf("\nInvalid inputs! Please enter '1' for true and '0' for false.\n\n");
         }
    
    menu(n, a, b);

// used arrays to store rows for all possible inputs and outputs of the Truth Table
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
    
 //For user to know the truth table of individual logic gates.
    printf("\n\n\t TO KNOW TRUTH TABLE of logic gates :\n");
    printf("1. AND\n2. OR\n3. NAND\n4. NOR\n5. NOT\n6. EX-OR\n7. EX-NOR\n");

    while (1) {
        printf("Enter your choice (1-7): ");
        
        if (scanf("%d", &t) == 1) {
            if (t >= 1 && t <= 7) {
                break; // Exit the loop when a valid choice is provided
            }} else {
            printf("\nInvalid input! Please enter a valid operator (1 to 7).\n");
            while (getchar() != '\n'); // Clear input buffer
        }}

    if (t == 1) {
        TruthTable("\nAND", andRows);
    } else if (t == 2) {
        TruthTable("\nOR", orRows);
    } else if (t == 3) {
        TruthTable("\nNAND", nandRows);
    } else if (t == 4) {
        TruthTable("\nNOR", norRows);
    } else if (t == 5) {
        TruthTable("\nNOT", notRows);
    } else if (t == 6) {
        TruthTable("\nEX-OR", xorRows);
    } else if (t == 7) {
        TruthTable("\nEX-NOR", xnorRows);
    }
 
    goto label;// Restart the program to show and select the logic operators
    return 0;
}


//Function Definations 
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

int AND(char a, char b){//Returns true if both 'a' and 'b' are 't', else returns false
    if (a == '1' && b == '1') {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    } else {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }return 0;
}

int OR(char a, char b){//Returns true if either 'a' or 'b' (or both) is 't', else returns false
    if (a == '1' || b == '1') {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    } else {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }return 0;
}

int NAND(char a, char b){//Returns true if at least one of 'a' or 'b' is not 't', 
    if (!(a == '1' && b == '1')) {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    } else {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }return 0;//else returns false
}

int NOR(char a, char b){//Returns true if neither 'a' nor 'b' is 't', else returns false
    if (!(a == '1' || b == '1')) {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    } else {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }return 0;
}

int NOT(char a, char b){//Returns true if 'a' is not 't'
    if (a == '1') {printf("The NEGATION of A is\n");
        printf("FALSE= 0\n");
    } else {printf("The NEGATION of A is\n");
        printf("TRUE= 1\n");}
    //Returns true if 'b' is not 't'
    if (b == '1') {printf("The NEGATION of B is\n");
        printf("FALSE = 0\n");
    } else {printf("The NEGATION of B is\n");
        printf("TRUE = 1\n");}    
    return 0;
}

int EX_OR(char a, char b){//Returns true if either 'a' or 'b' (but not both) is 't',
    if ((a == '1' || b == '1') && !(a == '1' && b == '1')) {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    } else {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }return 0;//else returns false
}

int EX_NOR(char a, char b){//Returns true if either both 'a' and 'b' are 't' or neither of them is 't', 
    if ((a == '1' && b == '1') || !(a == '1' || b == '1')) {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("TRUE= 1\n");
    } else {
        printf("\n\n\t*OUTPUT*\n\nLOGICAL CONCLUSION IS\n");
        printf("FALSE= 0\n");
    }return 0;//else returns false
}
