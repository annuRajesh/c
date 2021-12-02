#include <stdio.h>  
    int main() 
  { 
     int row,col,i,j,a[10][10],count = 0;
     printf("Enter the Number of Rows:");
     scanf("%d",&row);
     printf("Enter the Number of Columns:");
     scanf("%d",&col);
     printf("Enter the Element of Matrix:\n");
     for(i = 0; i < row; i++)
    {
   
      for(j = 0; j < col; j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   
        int size = 0;  
        for(int i=0; i<row; i++)  
        {  
            for(int j=0; j<col; j++)  
            {  
                if(a[i][j]!=0)  
                {  
                    size++;  
                }  
            }  
        }  
         int matrix[3][size];   
         int k=0;   
        for(int i=0; i<row; i++)  
        {  
            for(int j=0; j<col; j++)  
            {  
                if(a[i][j]!=0)  
                {  
                    matrix[0][k] = i;  
                    matrix[1][k] = j;  
                    matrix[2][k] = a[i][j];  
                    k++;  
                }  
          }  
        }  
        for(int i=0 ;i<row; i++)  
        {  
            for(int j=0; j<size; j++)  
            {  
                printf("%d ", matrix[i][j]);  
                printf("\t");  
            }  
            printf("\n");  
        }  
        return 0;  
    }  
