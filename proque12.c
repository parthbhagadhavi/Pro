
 
 #include <stdio.h>

void cube(int *ptr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", *(ptr + i * size + j) * *(ptr + i * size + j) * *(ptr + i * size + j));
        }
        printf("\n");
    }
}
    

int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int array[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    cube((int *)array, size);

    
}

