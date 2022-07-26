#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n, i, j, k;
	char m;
	m = 'A';
	cin >> n;
	n += 1;
	for (i = n ; i >= 1; i--)
	{	
		
		for (j = i + 1; j <= n; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("%c", m);
			m++;
		}m -= 2;
		for (k = i + 1; k < 2 * i; k++)
		{
			printf("%c", m);
			m--;
		}
		m = 'A';
		m += n - i + 1;
		printf("\n");
	}
	for (i = 2; i <= n; i++)
	{
		m -= 2;
		for (j = i + 1; j <= n; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			printf("%c", m);
			m++;
		}m -= 2;
		for (k = i + 1; k < 2 * i; k++)
		{
			printf("%c", m);
			m--;
		}
		m = 'A';
		m += n - i + 1;
		printf("\n");
	}
}