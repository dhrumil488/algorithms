#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//selection sort procedure to sort elements
void selection_sort(int *arr, int n) {
    int i,j;
    for(i=0;i<n;i++) {
        int min = arr[i+1];
        int index;
        for(j=i+1;j<n;j++) {
            if(min > arr[j]){
                min = arr[j];
                index = j;
            }
        }
        swap(&arr[i], &arr[index]);
    }
}

void display(int *arr, int n) {
    int i;
    for(i=0;i<n;i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Please enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("Enter element arr[%d]:", i);
        scanf("%d", arr+i);
    }
    selection_sort(arr, n);

    printf("\nSorted Array:\n");
    display(arr, n);
    return 0;
}