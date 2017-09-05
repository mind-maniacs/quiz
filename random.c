/*Cyril, this is the final code for the random function I created.
It had a small problem where the generated number is the same every time.
the srand() solved the issue.

I will add this code to the data.c file and upload it to the
repository as 'data_rand.c' later. I will also finalize the whole program by
fixing the UI for the 'data.c' file. You can still check and fix a few bugs or
add some tweaks if you want. Just remember to point the change and document it
properly.

                                                    -Akash*/

#include <stdio.h>
#include <stdlib.h> //header required for srand()
void main()
{
  int i,j,a[100],b,n=0;
  time_t t; //for the srand()
  srand((unsigned) time(&t)); //this line ensures a completely random number generation
  for(i=0;i<10;i++)
  {
    b=rand() % 11; // the %11 put the limit from 1 to 10
    for(j=0;j<=n;j++)
    {
      if(a[j]==b||b==0)
      {
        b=rand() % 11;
        j=-1;
      }
    }
    a[i]=b;
    printf("%d printing = %d\n",i,b); //this is just a test part. Will change this to call the question's switch statement.
    n++;
  }
  printf("End of the program\n"); //again just a test part.
}
