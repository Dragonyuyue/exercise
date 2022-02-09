#include<stdio.h>
int main()
{
	int arr[5],tmp, i,j;
	for (i = 0; i < 5; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	for (i = 0, j = 4; i < j; i++, j--)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	//putchar('\n');
	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
	//putchar('\n');
	return 0;

}