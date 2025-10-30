#include <stdio.h>

void inTrangThai(int a[], int n, int k) {
    int i;
    printf("Buoc %d: ", k);
    printf("[Da sap xep: ");
    for (i = 0; i <= k; i++) {
        printf("%d ", a[i]);
    }
    printf("] | [Chua sap xep: ");
    for (i = k + 1; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("]\n");
}

void selectionSort(int a[], int n) {
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min])
                min = j;
        }
        // Đổi chỗ
        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }

        // Hiển thị trạng thái sau mỗi bước
        inTrangThai(a, n, i);
    }
}

int main() {
    int a[] = {7, 9, 10, -4, 5, 8, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n\nQua trinh sap xep:\n");

    selectionSort(a, n);

    printf("\nMang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
