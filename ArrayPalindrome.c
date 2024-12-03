#include <stdio.h>
#include <stdlib.h>

// Global pointer for the dynamic array
int *array;
// Global variable for the size of the array
int arraySize;

// Function to check if the array is a palindrome
int isPalindrome(int arr[], int size)
{
    int left, right;
    // Compare elements from both ends moving towards the center
    for (left = 0, right = size - 1; left < right; left++, right--)
    {
        if (arr[left] != arr[right])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

// Function to initialize the array size and allocate memory
void initializeArray()
{
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    // Dynamically allocate memory for the array
    array = (int *)malloc(arraySize * sizeof(int));
    if (array == NULL) // Check for memory allocation failure
    {
        printf("Memory allocation failed.\n");
        exit(1); // Exit the program on failure
    }
}

// Function to input elements into the array
void inputArrayElements()
{
    int i;
    printf("Enter %d elements of the array:\n", arraySize);
    for (i = 0; i < arraySize; i++)
    {
        scanf("%d", &array[i]);
    }
}

int main()
{
    initializeArray();         // Step 1: Initialize array
    inputArrayElements();      // Step 2: Input array elements
    // Step 3: Check if the array is a palindrome
    if (isPalindrome(array, arraySize))
    {
        printf("The array is a Palindrome.\n");
    }
    else
    {
        printf("The array is Not a Palindrome.\n");
    }
    // Free the dynamically allocated memory
    free(array);
    return 0;
}
