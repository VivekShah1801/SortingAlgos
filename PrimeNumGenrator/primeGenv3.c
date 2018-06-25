#include<stdio.h>
#include<math.h>   //LOOK
#include<stdlib.h> //HERE

int primes(int terms)
{
	int num,j,isPrime,count=1;

		printf("[%3d] %d\n",count,2); //printing '2' by default.
		count++;

	for(num=3;count<=terms;num=num+2)// not iterating for even numbers as they cant be prime.(exception: 2)
	{								//checking only for numbers (3+2k) aka odd numbers.

		isPrime=1;
		for(j=2 ; j<=sqrt(num) ; j++) // dont forget '<=' . it is NOT '<'.

		/*
			any number num can be written as,
				num = factor1*factor2 = sqrt(num)*sqrt(num)
			so if there are any factors of that numbers

			one must be equal or less that the sqrt(num)
			and other must be equal or greater than the sqrt(num)

			so,if we cant find factor till sqrt(num),
			there cant be any factor > sqrt(num)
			hence num is prime.

			so, we are iterating inner-loop only till sqrt(num).
		*/

		{
			if(num%j==0)
			{
				isPrime=0;
				break;
			}
		}
		if(isPrime==1)
		{
			printf("[%3d] %d\n",count,num);
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
