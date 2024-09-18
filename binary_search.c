#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int arr[ ], int n) {
    int i,j;
    for(i=0;  i < n -1;  i++) {
        for(j = 0;      j< n - 1 - i;  j++) {
            if(arr[ j ]  >  arr[ j + 1]) {
                int temp = arr[ j ];
                arr[ j ] = arr[ j+1];
                arr[ j+1]=temp;
            }
        }
    }
}
int binary_search(int arr[ ], int n, int data) {
    int l=0, r=n-1;

    while(l<=r) {
        int mid=(l+r)/2;

        if(data == arr[mid] ) {
            return mid;
        } else if (data<arr[mid]) {
            r = mid - 1;
        } else {
            l=mid+1;
        }

    }
      return -1;
}

int main() {
    int arr1[ 100];
    int n ,target;


    printf("number of element (max 100): ");
    scanf("%d", &n);

     for(int i=0; i<n; i++) {
       scanf("%d", &arr1[i]);
    }

    //int len = sizeof(arr1) / sizeof(arr1[0]);

    bubble_sort(arr1,n);

    printf("shorted array is: ");
    for(int i=0; i<n; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n");
    printf("input an element that you want to search:");
    scanf("%d", &target);
    printf("\n");
    printf("-------------------------------------------------\n");
    int index = binary_search(arr1,n,target);
    if(index ==  -1){
        printf("The element is not found.\n");
    }
    else{
        printf("The element%d is found at position is %d", target,index+1);
    }

    return 0;

}
