#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<math.h>
int find_x(int a[],int xx,int ssz)
{
	int left = 0;
	int right = ssz-1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (mid > xx-1)
		{
			right = mid - 1;
		}
		else if(mid<xx-1)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int x = 4;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int y=find_x(arr,x,sz);
	if (-1 != y)
	{
		printf("find it:%d",arr[y]);
	}
	else
	{
		printf("don't find ");
	}
	return 0;
}
