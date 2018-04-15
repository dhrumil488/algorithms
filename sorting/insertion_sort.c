#include <stdio.h>

void insertion_sort(int *arr, int n) {
    int i;
    for(i=1;i<n;i++){
        int x = arr[i];
        int j = i-1;
        while(x < arr[j] && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = x;
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
    insertion_sort(arr, n);

    printf("\nSorted Array:\n");
    display(arr, n);
    return 0;
}