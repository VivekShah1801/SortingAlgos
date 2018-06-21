#include<stdio.h>
void selection(int a[],int n)
{
	int j,temp,minindex,min,index=0;
	for( index=0 ; index != n-1 ; index++)
	{
		//finding minumum from right unsorted subarray
		min=a[index];
		minindex=index;
		for( j=index+1 ; j<n ; j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				minindex=j;
			}
		}

		//swapping module
		temp=a[minindex];
		a[minindex]=a[index];
		a[index]=temp;
	}
	return;
}

int main()
{

	int i,numbers[10]={52,5,2,689,457,34,341,46,43,6};
	selection(numbers,10);
	for(i=0;i<10;i++)
		printf("%d ",numbers[i]);
	return 0;
}
