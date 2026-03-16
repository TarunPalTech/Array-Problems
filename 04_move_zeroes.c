/* 4. Write a program to move zeroes at end. */

void moveZeroes(int a[], int size){
    if(size <= 0) return;
    
    int j=0;
    for(int i=0;i<size;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
    }
    while(j<size){
        a[j]=0;
        j++;
    }
}