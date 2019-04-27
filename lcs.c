//#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>

int max(int a, int b);
int lcs( char *P, char *Q, int m, int n )
{
if (m == 0 || n == 0)
	return 0;
if (P[m-1] == Q[n-1])
	return 1 + lcs(P, Q, m-1, n-1);
else
	return max(lcs(P, Q, m, n-1), lcs(P, Q, m-1, n));
}
int max(int a, int b)
{
	return (a > b)? a : b;
}
int main()
{
char P[20];
char Q[20];
scanf("%s %s",&P,&Q);


int m = strlen(P);
int n = strlen(Q);

printf("Length of LCS is %d", lcs( P, Q, m, n ) );

return 0;
}

