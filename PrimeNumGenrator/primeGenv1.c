#include<stdio.h>

int primes(int terms)
{
	int num,j,isPrime,count=1;
	for(num=2;count<=terms;num++) //iterate till required terms are not computed.
	{
		isPrime=1; // number is assumed to be prime.

		for(j=2;j<num;j++) //checking the divisibility.
		{
			if(num%j==0) // if divisible isPrime = FALSE. number is not prime.
			{
				isPrime=0;
				break; // break the inner loop and itearate for next number by outer-loop.
			}
		}
		if(isPrime==1) //if not divisible by any
		{
			printf("[%3d] %d\n",count,num); //print it.
			count++;
		}

	}
}
int main()
{
	printf("***PRIME GENERATOR***\n\n");
	primes(10);
	return 0;
}
