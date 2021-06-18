/* Enter your solutions in this file */
#include <stdio.h>

/* MAXIMUM */
int max(int arr[], int n)
{
int maximum = arr[0];
for (int i=1; i<n; i++)
{
if (arr[i] > maximum)
maximum = arr[i];
} return maximum;
} /* MINIMUM */
int min(int arr[], int n)
{
int minimum = arr[0];
for (int i=1; i<n; i++)
{
if (arr[i] < minimum)
minimum = arr[i];
} return minimum;
} /* AVERAGE */
float average(int arr[], int n)
{
int sum=0;
for (int i=0; i<n; i++)
{
sum = sum + arr[i];
} float avg =
(
float)sum /
n;
return avg;
} /* MODE */
int mode(int arr[], int n)
{
int max=0;
int maxcount=0;
int i,j;
for (i=0; i<n; ++i)
{
int count=0;
for (j=0; j<n; ++j)
{
if (arr[j]==arr[i])
++count;
} if (
count >
maxcount)
{
maxcount = count;
max = arr[i];
}
} return max;
} /* FACTORS */
int factors(int n, int arr[])
{
int i,j,num,l;
int k=0;
int fac[10];
int num_pfactors=0;
int m=0;
for (i=2; i<=n; i++)
{
int counts=0;
if (n%i == 0)
{
for (j=1; j<=i; j++)
{
if (i%j == 0)
{
counts++;
num = j;
}
} if (
counts == 2)
{
fac[k] = i;
k++;
num_pfactors++;
}
}
} for (
l=0; l<=num_pfactors; l++)
{
while (n%fac[l] == 0)
{
arr[m] = fac[l];
m++;
n=n/fac[l];
}
} return m;
return arr;
}
