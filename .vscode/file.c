#include <stdio.h>
int main()
{
printf("SUCESS FULL\n");
FILE *fptr;
//open a file 
fptr = fopen("test.txt", "r");

//read content of file
char c;
while((c=fgetc(fptr)) !=EOF)
{
    printf("%c",c);
}

//write content in file
// fptr = fopen("test.txt", "w");
// fputs("I LOVE PLAYING VOLLYBALL\n",fptr);
// fputs("Raksha is my Best Friend and Ritu is my Room Partner, All are my good friends.",fptr);

fclose(fptr);
return 0;
}
