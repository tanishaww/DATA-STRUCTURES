#include<stdio.h>

/*int ls(int a[], int n, int val)
{
    for(int i=0; i < n; i++)
    {
        if (a[i] == val)
        return i+1;
    }
    return -1;
}
int main()
{
    int a[] = {}
}*/

int main()
{
    int array[100], search, c, n;

    printf("Enter the number of elements in array: \n");
    scanf("%d",&n);

    printf("Enter the %d integers\n" , n);

    for(c=0; c<n; c++)
    scanf("%d", &array[c]);

    printf("Enter the number to be searched: \n");
    scanf("%d",&search);

    
}