#include <stdio.h>
#include <cs50.h>
int main(void)
{
int i, j;
int answer = get_int("Height: ");
if(answer < 1 || answer > 8)
{
int answer2 = get_int("Again: ");
for(i=1;i<=answer2;i++)
{
// printf("#");
for(j=answer2;j>=1;j--)
{
if(j<=i)
{
printf("#");
}
else{
printf(" ");
}
}
// printf("#");
printf("\n");
}
}
else
{

for(i=1;i<=answer;i++)
{
   // printf("#");
    for(j=answer;j>=1;j--)
    {
        if(j<=i)
        {
            printf("#");
        }
        else{
            printf(" ");
        }
    }
    // printf("#");
    printf("\n");
}
}
}
         

