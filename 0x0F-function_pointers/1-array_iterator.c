#include <stddef.h>

/**
 * array_iterator - Execute a function on each element of an array
 * @array: Pointer to the array
 * @size: Size of the array
 * @action: Pointer to the function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int)) {
    if (array == NULL || action == NULL)
        return;

    size_t i = 0;

    while (i < size) {
        action(array[i]);
        i++;
    }
}
