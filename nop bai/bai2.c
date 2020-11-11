#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10], Num, Min, i;
	
	printf("So luong so trong day:\n");
	scanf("%d", &Num);
	
	printf("Nhap vao day so:\n");
	for(i = 0; i < Num; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	Index_Min(Min);
	
}

int Index_Min(int Min)
{
	int arr[10], i, Num;
	Min = arr[1];
	for(i = 0; i < Num; i++)
	{
		if(Min > arr[i])
		{
			Min = i + 1;
		}
	}
	
	printf("So be nhat trong chuoi o vi tri Number: %d", Min);
}
