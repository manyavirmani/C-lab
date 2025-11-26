#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n1, n2;
    int common[100], commonCount = 0;
    
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    
    printf("Enter %d elements for first array: ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    
    printf("Enter %d elements for second array: ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {

                int alreadyExists = 0;
                for (int k = 0; k < commonCount; k++) {
                    if (common[k] == arr1[i]) {
                        alreadyExists = 1;
                        break;
                    }
                }
                

                if (!alreadyExists) {
                    common[commonCount] = arr1[i];
                    commonCount++;
                }
                break; 
            }
        }
    }
    

    printf("\nFirst array: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\nSecond array: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    
    printf("\nCommon elements: ");
    if (commonCount == 0) {
        printf("No common elements found");
    } else {
        for (int i = 0; i < commonCount; i++) {
            printf("%d ", common[i]);
        }
    }
    printf("\n");
    
    return 0;
}