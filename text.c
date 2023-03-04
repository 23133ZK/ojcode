#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	char a1[100002], a2[100002];
	scanf("%s", a1);
	scanf("%s", a2);
	int len = strlen(a2), len1 = strlen(a1);
	if (a2[0] > '5' && a2[0] != '0')
		printf("duo le");
	else if (a2[0] < '5' && a2[0] != '0')
		printf("shao le");
	else if (a2[0] == '5' && a2[0] != '0')
	{
		int i = 0;
		for (i = 1; i < len; i++)
		{
			if (a2[i] != '0')
				break;
		}
		if (i < len)
			printf("duo le");
		else
		{
			if (a1[len1 - 1] % 2 == 0)
				printf("shao le");
			else
				printf("duo le");
		}

	}
	else if (a2[0] == '0')
		printf("gang gang hao");
	return 0;
}