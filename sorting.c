#include <stdio.h>
int a[],n ,i;

void read() 
{
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &a[i]);
    }
}

void display() 
{
    printf("Array elements: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sort() 
{
	int j;
    for (i = 0; i < n - 1; i++) 
    {
        for ( j = 0; j < n - i - 1; j++) 
	  {
            if (a[j] > a[j + 1])
		{
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
         }
    }  
}

int main() 
{
    printf("Enter the no.of elements: ");
    scanf("%d", &n);


    read();
    printf("Array before sorting:\n");
    display();

    sort();
    printf("Array after sorting in ascending order:\n");
    display();

    return 0;
}
