#include <stdio.h>

void rotate(int arr[], int n)
{
	int x = arr[n - 1], i;
	for (i = n - 1; i > 0; i--)
		arr[i] = arr[i - 1];
	arr[0] = x;
}

void print(int arr[]){
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

int main(){
	int size, i;
	printf("Enter Size : ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter Array Elements :  ");
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Given array is\n");
	print(arr);

	rotate(arr, size);

	printf("\nRotated array is\n");
	print(arr);

	return 0;
}
