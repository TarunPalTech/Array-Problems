/* 2. Write a program to find smallest element. */

int findSmallest(int a[], int size){
    int smallest = a[0];
    for(int i=1; i<size; i++){
        if(a[i] < smallest){
            smallest = a[i];
        }
    }
    return smallest;
}