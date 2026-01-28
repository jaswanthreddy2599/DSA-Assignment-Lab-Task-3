#include <stdio.h>
int main() {
    int n, i, j, flag;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Unique elements are:\n");
    for(i = 0; i < n; i++) {
        flag = 0;
        for(j = 0; j < n; j++) {
            if(i != j && arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", arr[i]);
    }
    return 0;
}
