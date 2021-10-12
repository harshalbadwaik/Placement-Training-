#include<stdio.h>
void main()
{
   int a[]={8,6,2,6,0,7,1,0,9,9};

   int zero=0;
   int one=0;
   int two=0;
   int three=0;
   int four=0;
   int five=0;
   int six=0;
   int seven=0;
   int eight=0;
   int nine=0;

   void occurance()
    {
        for(int i; i<sizeof(a)/sizeof(int); i++)
        {
            if(a[i]==0)
            {
                zero=zero+1;
            }
            
             if(a[i]==1)
            {
                one=one+1;
            }
            
             if(a[i]==2)
            {
                two=two+1;
            }
            
             if(a[i]==3)
            {
                three=three+1;
            }
            
             if(a[i]==4)
            {
                four=four+1;
            }
            
             if(a[i]==5)
            {
                five=five+1;
            }
            
             if(a[i]==6)
            {
                six=six+1;
            }
            
             if(a[i]==7)
            {
                seven=seven+1;
            }
            
             if(a[i]==8)
            {
                eight=eight+1;
            }
            
             if(a[i]==9)
            {
                nine=nine+1;
            }
            
        }
        
        printf("\nOccurence of 0 is : %d",zero);
        printf("\nOccurence of 1 is : %d",one);
        printf("\nOccurence of 2 is : %d",two);
        printf("\nOccurence of 3 is : %d",three);
        printf("\nOccurence of 4 is : %d",four);
        printf("\nOccurence of 5 is : %d",five);
        printf("\nOccurence of 6 is : %d",six);
        printf("\nOccurence of 7 is : %d",seven);
        printf("\nOccurence of 8 is : %d",eight);
        printf("\nOccurence of 9 is : %d",nine);    

    }

    occurance();
}

/* OUTPUT

Occurence of 0 is : 2
Occurence of 1 is : 1
Occurence of 2 is : 1
Occurence of 3 is : 0
Occurence of 4 is : 0
Occurence of 5 is : 0
Occurence of 6 is : 2
Occurence of 7 is : 1
Occurence of 8 is : 1
Occurence of 9 is : 2

*/