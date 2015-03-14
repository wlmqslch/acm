#include <stdio.h>
int yue(int a, int b)
{
	if (b)
		return yue(b, a%b);
	else
		return a;
}
int bei(int a, int b)
{
	int answer;
	answer = a / yue(a, b)*b;
	return answer;
}
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int m;
		scanf("%d", &m);
		int temp = 1,answer;
		while (m--)
		{
			int a;
			scanf("%d", &a);
			answer = bei(temp, a);
			temp = answer;
		}
		printf("%d\n", answer);
	}

	return 0;
}
