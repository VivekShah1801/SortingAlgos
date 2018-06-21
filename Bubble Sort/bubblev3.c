#include<stdio.h>
void bubble(int a[],int n)
{
	int i,j,temp,isSwapped;

	for(i=0 ; i<n-1 ; i++)
	{
		isSwapped=0;
		for(j=0 ; j<n-i-1 ; j++)
		{
			if( a[j] > a[j+1] )
			{
				//swap numbers
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				isSwapped = 1;
			}
		}
		if( isSwapped == 0 ) break;
		// No need to run loop if no element is swapped aka list is sorted.
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
