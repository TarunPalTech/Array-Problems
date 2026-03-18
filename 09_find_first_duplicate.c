/* 9. Write a program to find the first duplicate element in the array. */

// Brute force solution...

int findFirstDuplicate(int a[], int size){
    if(size<=1) return -1;
    
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]==a[j]) return a[i];
        }
    }
    
    return -1;
}