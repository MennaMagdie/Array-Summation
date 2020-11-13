#include <stdio.h>
#include <stdlib.h>
int main()
{
    int numbers[20],x=0,sum=0;
    int i, j;
    printf("Enter 20 numbers:\n");
    for(i=0 ; i<20 ; i++)
        scanf("%d",&numbers[i]);

    printf("The unique values are: \n");

    for(i=0; i<20; i++)
    {
        x=0;
        for(j=0 ; j<20; j++)
        {
            if (i!=j)
            {
		       if(numbers[i]==numbers[j])
               {
                 x++;
               }
            }
        }
       if(x==0)
        {
          printf("%d ",numbers[i]);
          sum = sum + numbers[i];
        }
    }
    printf("\n\nSum of unique numbers = %d\n\n",sum);
}
