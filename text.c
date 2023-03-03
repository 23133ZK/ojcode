#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int s = 0, v = 0,t=0,j=0,tem=0;
	char h[2] = { 0 }, m[2] = { 0 };
	scanf("%d%d", &s, &v);
	t = s / v;
	if (s % v != 0)
		tem = 469;
	else
		tem = 470;
	j =tem - t;
	h[0] = j / 60 / 10;
	h[1] = j / 60 % 10;
	m[0] = j % 60 / 10;
	m[1] = j % 60 % 10;
	printf("%d%d:%d%d", h[0], h[1], m[0], m[1]);
	return 0;
}
