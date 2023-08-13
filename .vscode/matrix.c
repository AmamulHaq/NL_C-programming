#include <stdio.h>
main() {printf("\tKNOW CONDITION FOR MATRIX MULTIPLICATION\n");
    int a,b,c,d,m[10][10],n[10][10],product[10][10];
    printf("\nEnter order of first matrix m:\n");scanf("%d %d", &a, &b);
    printf("\nEnter order of second matrix n:\n");scanf("%d %d", &c, &d);
   if (b!=c){printf("\n\nSORRY!As columns in matrix m is not equal to rows in matrix n.\n\n"); return 1;}
    printf("\n\tEnter elements of matrix m:\n");
    for (int i = 1; i <=a; i++) {printf("\nEnter elements of row%d:\n",i);
     for (int j = 1; j <=b; j++) scanf("%d", &m[i][j]);}
    printf("\n\tEnter elements of matrix n:\n");
    for (int j = 1; j <=b; j++) {printf("\nEnter elements of row%d:\n",j);
     for (int k = 1; k <=d; k++) scanf("%d", &n[j][k]);}
     
      for (int i = 1; i <=a; i++) for (int k = 1; k <=d; k++) {product[i][k] =1;
        for (int j = 1; j <=b; j++) product[i][k] += m[i][j] * n[j][k];}
    
    printf("\nProduct of the matrices:\n");
    for (int i = 1; i <=a; i++) {for (int k = 1; k <=d; k++) printf("%d\t", product[i][k]);
printf("\n");}}