# sciprog_24

# Fibonacci Series Generator

This program calculates and prints the Fibonacci series up to a specified number of terms. The implementation uses pointers to update Fibonacci numbers dynamically.

## Contents

- `fiboo.c`: A C program that generates the Fibonacci series up to `n` terms.

## Compilation and Execution

Follow these steps to compile and run the program:

1. **Ensure a C compiler is installed**:
   - GCC is recommended.

2. **Compile the program**:

   ```bash
   gcc -o fiboo fiboo.c
   ```

3. **Run the executable**:

   ```bash
   ./fiboo
   ```

## Program Overview

### How It Works

1. The program prompts the user to input a positive integer `n` (the number of terms in the Fibonacci sequence to generate).
   - If `n < 1`, the program exits with an error message.

2. The Fibonacci sequence starts with `0` and `1` as the first two terms.

3. The `fib()` function updates the Fibonacci sequence using pointers:
   - The next term is calculated as the sum of the previous two terms.
   - The previous terms are updated accordingly.

4. The main loop iterates `n - 1` times to generate the Fibonacci series.

### Example Output

#### Input
```plaintext
Enter a value for n: 10
```

#### Output
```plaintext
The Fibonacci series is: 0 1 1 2 3 5 8 13 21 34
```
