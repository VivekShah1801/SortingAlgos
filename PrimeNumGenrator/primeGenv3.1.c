#include<stdio.h>
#include<math.h>   //LOOK
#include<stdlib.h> //HERE

int primes(int terms)
{
	int num,j,isPrime,count=1,limit;

		printf("[%3d] %d\n",count,2); //printing '2' by default.
		count++;

	for(num=3;count<=terms;num=num+2)
	{
		isPrime=1;
		limit = sqrt(num);  //saving CPU time to compute sqrt(num) for every inner-loop iteration.
				    /* the value stored in limit is INTEGER.
				    when in previous version (v3) it condition is j<=sqrt(num)
				    sqrt(num) is a float quantity.

				    reason to use limit as integer instead of float:

					because j <= 5.24 is same as j <= int(5.24) aka j<=5.
					provided j is an integer and increments by an integer.
					hence using integer saves CPU time compared to float-arithmetics.
					TIP: j<5.24 is not same as j<5. (example: when j=5 first is True, second is False.
				    */
		for(j=2 ; j <= limit ; j++)
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
