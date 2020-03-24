#include <stdlib.h>
#include <string.h>

void swap(void* left, void* right, size_t size) {
    void* tmp = malloc(size);
    memcpy(tmp, left, size);
    memcpy(left, right, size);
    memcpy(right, tmp, size);
    free(tmp);
}

void sort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*)) {
    for (size_t i = 0; i < num; ++i) 
	for (size_t j = i + 1; j < num; ++j) 
	    if (compar((char *)base + i * size, (char *)base + j * size) > 0)
		swap((char *)base + i * size, (char *)base + j * size, size);
}

int comparInt(const void* left, const void* right) {
    int a = *(int *)left;
    int b = *(int *)right;
    return a < b ? -1 : a > b ? 1 : 0;
}

int main()
{
    int array[10] = {5, 2, 8, 9, 4, 1, 7, 6, 3, 0};
    sort(array, 10, sizeof(int), comparInt);
    for (size_t i = 0; i < 10; ++i)
	printf("%d ", array[i]);
    return 0;
}
