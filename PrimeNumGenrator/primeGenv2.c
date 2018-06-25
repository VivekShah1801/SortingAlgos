#include<stdio.h>

int primes(int terms)
{
	int num,j,isPrime,count=1;

		printf("[%3d] %d\n",count,2); //printing '2' by default.
		count++;

	for(num=3;count<=terms;num=num+2)// not iterating for even numbers as they cant be prime.(exception: 2)
	{								//checking only for numbers (3+2k) aka odd numbers.

		isPrime=1;
		for(j=2;j<num;j++)
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
