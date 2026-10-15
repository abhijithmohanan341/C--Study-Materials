# C Programming – Arrays

## 1. Array

### Definition
An array is a collection of elements of the same data type stored in consecutive memory locations. Each element is accessed using an index.

### Syntax
```c
data_type array_name[size];
```

### Example Declaration
```c
int a[10];
```

---

## 2. One-Dimensional Array (1D Array)

### Definition
A one-dimensional array stores elements in a single list. Each element is accessed using one index.

### Syntax
```c
data_type array_name[size];
```

### Reading Array Elements
```c
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
```

### Printing Array Elements
```c
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
```

---

## 3. Two-Dimensional Array (2D Array)

### Definition
A two-dimensional array stores elements in rows and columns. Each element is accessed using two indices: a row index and a column index.

### Syntax
```c
data_type array_name[rows][columns];
```

### Example Declaration
```c
int a[10][10];
```

### Reading Matrix Elements
```c
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
```

### Printing Matrix Elements
```c
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}
```

---

## 4. Important Points

- Array elements must have the same data type.
- Array indexing in C starts from `0`.
- For an array of size `n`, valid 1D indices are `0` to `n-1`.
- A 1D array uses one index, such as `a[i]`.
- A 2D array uses two indices, such as `a[i][j]`.
- In a matrix, `r` represents the number of rows and `c` represents the number of columns.
- Ensure that array sizes and input dimensions do not exceed the declared array limits.
