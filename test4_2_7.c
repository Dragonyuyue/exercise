//#include<stdio.h>
//int main()
//{
//	int x,n,i;
//	int arr[10] = {1,3,6,15,20,25};
//	n = 6;
//	scanf_s("%d", &x);
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (x < arr[i])
//			arr[i + 1] = arr[i];
//		else break;
//	}
//		arr[i + 1] = x;
//		n++;
//		for (i = 0; i < n; i++)
//		printf("%d\n", arr[i]);
//		printf("\n");
//}第六章第四题
#include<stdio.h>
int main()
{
	int i, n, sum = 0, m100=0, m50=0, m10=0, m5=0, m1=0;
	int arr[50];
	printf("员工人数n=");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[n]);
		sum += arr[n];
	}
	m100 = sum / 100;
	m50 = sum % 100 / 50;
	m10 = sum % 100 %50 / 10;
	m5 = sum % 100 % 50 % 10 / 5;
	m1 = sum % 100 % 50 % 10 % 5 / 1;
	printf("%d\n", sum);
	printf("m100=%d\nm50=%d\nm10=%d\nm5=%d\nm1=%d\n", m100, m50, m10, m5, m1);

	return 0;
}//第六章第五题
