/* 3. Write a program to reverse an array. */

void reverseArray(int a[], int size){
    if(size<=0) return;
    
    int start = 0, end = size -1;
    while(start<end){
        int temp = a[start];
        a[start++] = a[end];
        a[end--] = temp;
    }
}