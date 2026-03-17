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

// Method - 2 (Two Pass Method)

int findMissingNumber(int a[], int size){
    if(size<=0) return -1;
    
    int xor1 = 0;
    int xor2 = 0;
    
    for(int i=0; i<size; i++){
        xor1 ^= a[i];
    }
    
    for(int i=1; i<=size+1; i++){
        xor2 ^= i;
    }
    
    return xor1^xor2;
}

// Method - 3 (Single Pass Method)

int findMissingNumber(int a[], int size){
    if(size<=0) return -1;
    
    int xor = 0;
    
    for(int i=0; i<size; i++){
        xor ^= a[i];
        xor ^= (i+1);
    }
    
    return xor ^ (size+1);
}