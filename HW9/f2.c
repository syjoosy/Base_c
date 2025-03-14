void sort_even_odd(int n, int a[]) {
    int temp[n];
    int even_index = 0;
    int odd_index = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            temp[even_index++] = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            temp[even_index + odd_index++] = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
}