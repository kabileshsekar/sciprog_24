# sciprog_24

# Magic Square Checker

This practical demonstrates the implementation of a magic square checker in C. A magic square is a matrix where the sums of each row, each column, and the two diagonals are equal.

## Contents

### Files
- `magic_square.h`: Contains the function `isMagicSquare` to check if a given matrix is a magic square.
- `magic_square.txt`: A sample magic square matrix for testing.
- `not_magic_square.txt`: A sample non-magic square matrix for testing.
- `main_stub.c`: A main program that reads a matrix from a file and checks if it is a magic square.

## Compilation and Execution

Ensure you have a C compiler installed, such as GCC. To compile and run the program:

### Compile
```bash
gcc -o magic_square_checker main_stub.c
```

### Execute
```bash
./magic_square_checker
```

### Input
When prompted, enter the name of the file containing the matrix to check. Example:
```plaintext
Enter file name: magic_square.txt
```

## Program Details

### `magic_square.h`
- Implements the `isMagicSquare` function.
- The function:
  - Eliminates negative side lengths.
  - Checks if the sums of rows, columns, and diagonals match the expected magic constant: `M = n(n^2 + 1)/2`.

### `magic_square.txt` and `not_magic_square.txt`
- **`magic_square.txt`**:
  A valid magic square:
  ```plaintext
  2 7 6
  9 5 1
  4 3 8
  ```

- **`not_magic_square.txt`**:
  A non-magic square:
  ```plaintext
  1 2 3
  4 5 6
  7 8 9
  ```

### `main_stub.c`
- Reads a matrix from a user-specified file.
- Allocates memory dynamically for the matrix.
- Populates the matrix with data from the file.
- Calls `isMagicSquare` to determine if the matrix is a magic square.
- Frees dynamically allocated memory after use.

### Example Execution

#### Valid Magic Square
Input: `magic_square.txt`
```plaintext
Enter file name: magic_square.txt
The matrix is a magic square.
```

#### Invalid Magic Square
Input: `not_magic_square.txt`
```plaintext
Enter file name: not_magic_square.txt
The matrix is NOT a magic square.
```
