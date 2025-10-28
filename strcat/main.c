#include<stdio.h>
#include<string.h>

int main(){
char array1[20], array2[20];
int i,j;

printf("Enter string 1\n:");
fgets(array1, sizeof(array1), stdin);
array1[strlen(array1) - 1] = '\0';

printf("Enter string 2\n:");
fgets(array2, sizeof(array2), stdin);

printf("%s %s", array1, array2);

}