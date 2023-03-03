#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int k = 0;
	double Pi = 3.14,v=0,h = 0, r = 0, j = 0;
	scanf("%lf%lf", &h, &r);
	v = Pi * r * r * h;
	j = 20000 / v;
	k = j;
	if(j==k)
	printf("%.0f\n", j);
	else
		printf("%.0f\n", j+1);
	return 0;
}