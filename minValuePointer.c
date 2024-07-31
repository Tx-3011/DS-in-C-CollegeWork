#include<stdio.h>
#include<stdlib.h>

int findMin(int *a, int n) {
   int *min;
   int *walker;
   min = a;
   walker = a+1;
while (walker < &a[n]) {
    if (*walker < *min) {
        min = walker;
    }
    walker++;
}


   return *min;


}

int main() {
    int *a;
    int n, i;

    printf("\nEnter n value: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    printf("\nEnter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", a + i);
    }

    int min = findMin(a, n);
    printf("\nThe minimum value is: %d\n", min);

    free(a);
    return 0;
}
