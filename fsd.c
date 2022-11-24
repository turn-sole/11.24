#include<stdio.h>
//调整数组使奇数全部都位于偶数前面。
void sort(int arr[], int sz)
{
	int* left = arr;
	int* right = arr + sz - 1;
	while (left < right)
	{
		while (((left < right) && (*left) % 2 != 0))
		{
			left++;
		}
		while (((left < right) && (*right) % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	for (i - 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}