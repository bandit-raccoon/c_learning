#include<stdio.h>

int main(){
char array1[100], array2[100];
int i = 0;
int j = 0;

printf("Enter string 1\n:");
gets(array1);

printf("Enter string 2\n:");
gets(array2);

while (array1[i] != 0)
{
  i++;
}

array1[i] = ' ';
i++;

while (array2[j] != 0)
{
  array1[i] = array2[j];
  i++;
  j++;
}
array1[i] = '\0';

puts(array1);

return 0;
}