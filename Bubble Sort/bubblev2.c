#include<stdio.h>
void bubble(int a[],int n)
{
	int i,j,temp;

	for(i=0 ; i<n-1 ; i++)
	{
		for(j=0 ; j<n-i-1 ; j++)
		{
			if( a[j] > a[j+1] )
			{
				//swap numbers
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

int main()
{

	int i,numbers[10]={52,5,2,689,457,34,341,46,43,6};
	bubble(numbers,10);
	for(i=0;i<10;i++)
		printf("%d ",numbers[i]);
	return 0;
}
