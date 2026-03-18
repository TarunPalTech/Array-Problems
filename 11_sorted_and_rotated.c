/* 11. Problem: Check if Array is Sorted and Rotated. An array is sorted and rotated if it was originally sorted and then rotated some number of times. */

// Only for ascending order...

int isSortedRotated(int a[], int size){
    if(size<=1) return 1;
    
    int count = 0;
    
    for(int i=0; i<size-1; i++){
        if(a[i]>a[i+1]) count++;
    }
    
    if(a[size-1]>a[0]) count++;
    
    return count<=1;
}


/* 
You can explain it like this:

**Explanation:**
A sorted rotated array has **at most one place where `a[i] > a[i+1]`**, because rotation breaks the sorted order only once.
We also check **`a[n-1] > a[0]`** since the array is circular; if this also breaks the order, then there are **two breaks → not a valid sorted rotated array**.

**Examples:**

Valid (sorted rotated):

```
[3,4,5,1,2]
```

Breaks:

```
5 > 1  (only one break) → valid
```

Invalid:

```
[2,1,3,4]
```

Breaks:

```
2 > 1
4 > 2  (last → first)
```

Two breaks → **not sorted rotated**.

*/