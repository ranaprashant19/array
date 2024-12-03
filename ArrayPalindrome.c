#include <stdio.h>
#include <stdlib.h>
int *a;
int n;
int fun2(int a[],int n)
{
    int i,j;
    for (i=0,j=n-1;i<j;i++,j--)
	{
        if (a[i]!=a[j]) 
		{
            return 0; 
        }
    }
    return 1; 
}

fun()
{
	printf("enter the size of array ");
	scanf("%d",&n);
    a = (int*)malloc(n * sizeof(int));
    if(a==NULL)
    {
    	printf("Memory not allowed");
	}
}
fun1()
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}	
    
}	
int main()
{
	fun();
	fun1();	
    if (fun2(a,n))
	{
        printf("Palindrome");
    } 
	else
	{
        printf("Not Palindrome");
    }
return 0;
}
