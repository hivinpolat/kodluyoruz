#include <cs50.h>
#include <stdio.h>

int main(void)
{
      int x;
   
   do{
     x=get_int("height:");
      }while( x>8  || x<1);
   printf("%d\n",x);
   //sola yatık piramit
   /*
  for(int i=1;i<=x;++i)
  {
      for(int j=1;j<=i;++j)
      {
       printf("#");
      }
      printf("\n");
  }*/
    //sağa yatık piramit
  for(int i=x;i>=1;--i)
 {
        for(int j=1;j<=i;j++)
      { 
             printf("  ");    
      }
        printf("#\n "); 
       for(int k=1;k<=x;++i)
 {
        for(int l=1;l<=k;l++)
      { 
             printf(" # ");    
      }
        printf("\n "); 
         
 }  
 }


}
