/* 10. Write a program to check whether a given array is sorted or not. */

int isSorted(int a[], int size){
    if(size<=1) return 1;
    
    for(int i=0; i<size-1; i++){
        if(a[i]>a[i+1]) return 0;
    }
    
    return 1;
}