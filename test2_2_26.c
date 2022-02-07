#include<stdio.h>
int main()
{
	int n, i;
	float a[100], max,min;
	printf("请输入个数n=");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%f", &a[i]);//输入数组中的数字
		max = min = a[0];//将第一个数放入max和min中
	for (i = 1; i < n; i++)//将第一个数分别与数组其他数比较
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	printf("max=%.2f,min=%.2f\n", max, min);
	return 0;

}