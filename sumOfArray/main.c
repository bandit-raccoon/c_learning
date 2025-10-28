// Write a program in C to create a 2D array of size 3x3, input elements from the user and print the sum of elements. 

#include<stdio.h>

int horizontalSum(int array[3][3], int row);
int verticalSum(int array[3][3], int column);

int main(){
int array[3][3], sumColumn1, sumColumn2, sumColumn3;
char chr = ' ';

for (int i = 0; i < 3; i++)
{  
  for (int j = 0; j < 3; j++)
    {
      printf("Please enter number(%d,%d)\n:", i,j);
      scanf("%d", &array[i][j]); 
    } 
}

for (int i = 0; i < 3; i++)
{  
  int j = 0;
  printf("|--------|--------|--------|--------|\n");
  printf("|%8d|%8d|%8d|%8d|\n", array[i][j], array[i][j+1], array[i][j+2],horizontalSum(array , i));
     
}
printf("|--------|--------|--------|--------|\n");

sumColumn1 = verticalSum(array, 0);
sumColumn2 = verticalSum(array, 1);
sumColumn3 = verticalSum(array, 2);

printf("|%8d|%8d|%8d|%8c|\n", sumColumn1, sumColumn2, sumColumn3, chr);

return 0;

}

int horizontalSum(int array[3][3], int row){
  return array[row][0] + array[row][1] + array[row][2];
}

int verticalSum(int array[3][3], int column){
  return array[0][column] + array[1][column] + array[2][column];
}