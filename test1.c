#include<stdio.h>
#include<math.h>
int area(float A ,float B, float C)
{
	float p,s;
	p = (A + B + C) / 2;
	s = sqrt(p * (p - A) * (p - B) * (p - C));
	return s;

}
int main()
{
	float a, b, c,S;
	scanf_s("%f%f%f", &a, &b, &c);
	S=area(a,b,c);
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("S=%f\n", S);
	}
	else
	{
		printf("error\n");
	}
	return 0;


}