#include <stdio.h>  
int main()   
{  
  int i, j, k; 
  pattern :    
  for(i=0;i<5;i++)  
  {  
    for(j=0;j<5;j++)  
    {  
      for(k=0;k<5;k++)  
      {  
        printf("* ");  
        if(j == 3)  
        {  
          goto pattern ;     
        }  
      }  
    }  
  }  
      
} 