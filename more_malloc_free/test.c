#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(5 * sizeof(int)); // 5 أعداد صحيحة
    if (arr == NULL) {
        printf("فشل التخصيص!\n");
        return 1;
    }

    // arr يحتوي الآن على قيم عشوائية!
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // طباعة قيم غير معرفة (قد تكون 0 أو أرقام غريبة)
    }

    free(arr);
    return 0;
}
