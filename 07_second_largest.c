/* 7. Write a program to calculate the second largest element in the array. */

#include<limits.h>

int findSecondLargest(int a[], int size){
    if(size<2) return -1;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(a[i]>largest){
            secondLargest = largest;
            largest = a[i];
        }else if(a[i]>secondLargest && a[i]!=largest){
            secondLargest = a[i];
        }
    }
    
    if(secondLargest==INT_MIN) return -1;
    return secondLargest;
}

/* 
1. If the values are [10, 10, 5], it handles this situation.
2. If all the values are equal then also it can handle that situation.
3. Only one case is available where it can fail when [INT_MIN, 5, 3] but it's very rare...
*/

// Another Method - It handles all the cases

int findSecondLargest(int a[], int size){
    if(size < 2) return -1;

    int largest = a[0];
    int secondLargest = 0;
    int foundSecond = 0;

    for(int i = 1; i < size; i++){
        if(a[i] > largest){
            secondLargest = largest;
            largest = a[i];
            foundSecond = 1;
        }
        else if(a[i] < largest && (!foundSecond || a[i] > secondLargest)){
            secondLargest = a[i];
            foundSecond = 1;
        }
    }

    if(!foundSecond) return -1;

    return secondLargest;
}