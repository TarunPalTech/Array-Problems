/* 8. Write a program to find a missing number into the given array. */

// Method - 1

int findMissingNumber(int a[], int size){
    if(size<=0) return -1;
    
    int n = size + 1; // Because, 1 value is missing...
    
    int actualSum = 0;
    int expectedSum = (n * (n + 1)) / 2;
    
    for(int i=0; i<size; i++){
        actualSum += a[i];
    }
    
    return expectedSum - actualSum;
}

/* 
The sum method can overflow if numbers are very large.
That’s why many programmers prefer the XOR solution, which is also O(n) but safer.
*/

