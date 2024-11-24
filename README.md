# sciprog_24

# Practical 06: Matrix Multiplication

This program performs matrix multiplication of two matrices `A` and `B` to produce a resultant matrix `C` using a nested loop structure. It demonstrates basic matrix operations in C.

## Contents

- `practical06.c`: A C program that multiplies two matrices `A` (size n x p) and `B` (size p x q) to generate a resultant matrix `C` (size n x q).

## Compilation and Execution

Follow these steps to compile and run the program:

1. **Ensure a C compiler is installed**:
   - GCC is recommended.

2. **Compile the program**:

   ```bash
   gcc -o practical06 practical06.c
   ```

3. **Run the executable**:

   ```bash
   ./practical06
   ```

## Program Overview

### How It Works

1. **Matrix Initialization**:
   - The program initializes matrix `A` (size n x p) with elements calculated as `i + j`.
   - Matrix `B` (size p x q) is initialized with elements calculated as `i - j`.
   - Matrix `C` (size n x q) is initialized to zero.

2. **Matrix Multiplication**:
   - The function `matmul()` computes the product of matrices `A` and `B` and stores the result in matrix `C`.
   - This is achieved using three nested loops to iterate over the rows and columns of the matrices.

3. **Printing Matrices**:
   - The program prints matrices `A`, `B`, and `C` to display the input and resultant matrices.

### Example Output

```plaintext
A
0 1 2
1 2 3
2 3 4
3 4 5
4 5 6
B
0 -1 -2 -3
1 0 -1 -2
2 1 0 -1
C
5 2 -1 -4
8 5 2 -1
11 8 5 2
14 11 8 5
17 14 11 8
```

### Key Variables

- **`n`, `p`, `q`**: Dimensions of matrices `A`, `B`, and `C`.
- **`A[n][p]`**: Input matrix of size `n x p`.
- **`B[p][q]`**: Input matrix of size `p x q`.
- **`C[n][q]`**: Resultant matrix of size `n x q`.
