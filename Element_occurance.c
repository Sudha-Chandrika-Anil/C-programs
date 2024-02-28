#include <stdio.h>

int a[];
int n;

// Function prototype
void searchElementPositions(int element);

int main() 
{
    int element,i;
    printf("Enter the no.of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    searchElementPositions(element);

    return 0;
}

void searchElementPositions(int element) 
{
    int positions[100];
    int i,count = 0;

    for (i = 0; i < n; i++) 
	{
        if (a[i] == element) 
		{
            positions[count++] = i;
        }
    }

    if (count == 0) 
	{
        printf("Element not found in the array.\n");
    } 
	else 
	{
        printf("Element found at positions: ");
        for (i = 0; i < count; i++) 
		{
            printf("%d ", positions[i]);
        }
        printf("\n");
    }
}
