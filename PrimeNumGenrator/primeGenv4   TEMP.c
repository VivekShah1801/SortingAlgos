#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int primes(int terms)
{
	int prime[1000] = {2}; //Creating a Prime-table,
						 //which stores the genrated primes.
	int num,j,isPrime,count=1,limit; // IMP: count=0

		printf("[%3d] %d\n",1,2);

	for(num=3;count<=terms;num=num+2)
	{
		isPrime=1;
		limit = sqrt(num);
		/*
			IMP: initialize j with 1, WHY NOT 0?

			now, j represents index of an element in
			array prime[] aka our prime-table.
			we already printed '2' as prime and no other even number is
			considered for the test.

			so, we have check divisibity from the number 3 and later.
			as 3 is second prime, its index is 1.
			tip: Kth element = array[k-1]

		*/
		for(j=0 ; prime[j] <= limit ; j++)
		{
			if(num%prime[j]==0)
			{
				isPrime=0;
				break;
			}
		}

		if(isPrime==1)
		{
			printf("[%3d] %d\n",count+1,num);
			prime[count]=num;  //updating prime-table.
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
