void InsertionSort(int A[], int size) {
    for (int i=0; i<size; ++i) {
        int key = A[i];
        int j = i-1;
        while (-1<j && A[j]>key) {
            A[j+1] = A[j];
            --j;
        }
        A[j+1] = key;
    }
}