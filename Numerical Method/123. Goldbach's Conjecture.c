/* 123. Goldbach's Conjecture */
 
/*Goldbach's conjecture is a rule in math that states the following: every even number greater than 2 can be expressed as the sum of two prime numbers.*/

#include<stdio.h>
#include<math.h>

int prime (int n)
{
  int flag = 0;
  for(int i = 2 ; i <= sqrt(n); i ++ )
  {
    if(n % i == 0)
    {
      flag = 1;
      break ;
    }
  }
  if(!flag)
  return 1;
  else 
  return 0;
}

int main()
{
  int m;
  scanf("%d", & m);
  for(int i = 2 ; i <= (m )/2 ; i ++)
  {
    int k = i , l = m - i;
    if(prime(k) && prime(l))
    {
    printf("%d  +  %d\n",k , l);
    }
  }
}