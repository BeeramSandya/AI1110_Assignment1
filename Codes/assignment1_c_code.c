#include <stdio.h>
 int checkprime(int i)
{
int n;
n=i/2;
int m;
if (i==2)
return 1;
for(m=2; m<=n;m++)
{
if(i%m==0 && i!=2)
 return 0;
else
return 1;
break;
}	
}
 
int checkdiv4(int i)
{
if (i%4==0)
return 1;
else
return 0;
}

int checkdiv6 (int i)
{
if (i%6==0)
return 1;
else 
return 0;
}

int checkodd (int i)
{
if (i%2==0)
return 0;
else
return 1;
}

int main ()
{
int i, i1, i2, i3, i4;
i1=0; 
i2=0;
i3=0;
i4=0;

for (i=2; i<=20; i=i+2)
{
i1 = i1 + checkprime(i);
i2 = i2 + checkdiv4(i);
i3 = i3 + checkdiv6(i);
i4 = i4 + checkodd(i);
}
printf("Probability of getting a card bearing a prime number = %d/10\n",i1);
printf("Probability of getting a card bearing a number that is divisible by 4 is = %d/10\n",i2);
printf("Probability of getting a card bearing a number that is multiple of 6 is = %d/10\n",i3);
printf("Probability of getting a card bearing a number that is odd number is = %d\n",i4);

return 0;
}