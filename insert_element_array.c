#include <stdio.h>
int main() {
    int n, i, pos, value;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to insert (0-based index): ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);

    for(i = n; i > pos; i--)
        arr[i] = arr[i-1];

    arr[pos] = value;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
