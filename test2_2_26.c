#include<stdio.h>
int main()
{
	int n, i;
	float a[100], max,min;
	printf("���������n=");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%f", &a[i]);//���������е�����
		max = min = a[0];//����һ��������max��min��
	for (i = 1; i < n; i++)//����һ�����ֱ��������������Ƚ�
	{
		if (max < a[i])
			max = a[i];
		if (min > a[i])
			min = a[i];
	}
	printf("max=%.2f,min=%.2f\n", max, min);
	return 0;

}