/* 1. Write a program to find largest element. */

int findLargest(int a[], int size){
    int largest = a[0];
    int i = 1;
    while(i<size){
        if(largest < a[i]){
            largest = a[i];
        }
        i++;
    }
    return largest;
}

// Two pointer technique...

int findLargest(int a[], int size){
    if(size <= 0) return -1;
    
    int start = 0;
    int end = size - 1;
    
    int largest = a[start];
    
    while(start<=end){
        if(a[start] > largest){
            largest = a[start];
        }
        if(a[end] > largest){
            largest = a[end];
        }
        start++;
        end--;
    }
    
    return largest;
}

/* First approach is preferable because it takes extra variable end and no of iterations are 5 but in the above example no of comparisons are 9 but in this example no of comparisons are 10 because in both cases no of comparision are same and time complexity is also same. 
So even though iterations are fewer, the work per iteration is larger.
*/