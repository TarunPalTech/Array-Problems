/* 
Problem: Find the Leader Elements in an Array
An element is called a leader if it is greater than all elements to its right.
The rightmost element is always a leader.
*/

// Method - 1 (It prints values in the reverse order)

void findLeaders(int a[], int size){
    if(size==0) return;

    int i = size-2;

    int maxRight = a[size-1];
    printf("%d\t", maxRight);

    while(i>=0){
        if(a[i]>maxRight){
            maxRight = a[i];
            printf("%d\t", maxRight);
        }
        i--;
    }
}

// Method - 2 (To print values according to the sequesnce)

void findLeaders(int a[], int size){
    if(size==0) return;

    int leaders[size];
    int k=0;

    int maxRight = a[size-1];
    leaders[k++] = maxRight;

    for(int i=size-2;i>=0;i--){
        if(a[i]>maxRight){
            maxRight = a[i];
            leaders[k++]=maxRight;
        }
    }

    for(int i=k-1;i>=0;i--){
        printf("%d\t", leaders[i]);
    }
}