#include <stdio.h>

/**
 * advanced_binary_recursive - Recursive function to perform advanced binary search
 * @array: Pointer to the first element of the array to search in.
 * @low: The lowest index of the current subarray.
 * @high: The highest index of the current subarray.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of value in the array,
 *         or -1 if the value is not present.
 */
int advanced_binary_recursive(int *array, int low, int high, int value)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        if ((mid == low || value > array[mid - 1]) && array[mid] == value)
            return mid;

        if (array[mid] >= value)
            return advanced_binary_recursive(array, low, mid, value);

        return advanced_binary_recursive(array, mid + 1, high, value);
    }
    return -1;
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is located. If the value is not present
 *         in the array or if the array is NULL, returns -1.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
