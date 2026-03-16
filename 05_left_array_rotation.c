/* 5. Left rotate array by k positions */

// Approach name - Three reversal problem

void reverse(int a[], int start, int end){
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

void leftArrayRotation(int a[], int size, int k){
    k = k % size; /* k = k % size; because rotating an array more than its length repeats the same rotations.*/
    
    reverse(a, 0, size - 1);
    reverse(a, 0, size - k - 1);
    reverse(a, size - k, size - 1);
}