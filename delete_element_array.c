#include <stdio.h>
int main() {
    int n, i, pos;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to delete (0-based index): ");
    scanf("%d", &pos);

    for(i = pos; i < n-1; i++)
        arr[i] = arr[i+1];

    n--;

    printf("Array after deletion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
