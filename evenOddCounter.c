#include <stdio.h> 
void main(){
    int arr[5];
    int i, evenCount = 0, oddCount = 0;

    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);
}