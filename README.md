# sciprog_24

# Practical 07: Dynamic Memory Management and Estimation of Euler's Number

This practical demonstrates the use of dynamic memory management in C and implements two programs:
1. **`part_2.c`**: Allocates, fills, and prints an array dynamically.
2. **`Sciprog_week_7.c`**: Estimates Euler's number (`e`) using a factorial-based series.

## Contents

### Files
- `part_2.c`: A program that dynamically allocates an array, fills it with ones, and prints the array.
- `Sciprog_week_7.c`: A program that estimates Euler's number (`e`) up to a user-specified order using dynamic memory allocation.

## Compilation and Execution

Ensure you have a C compiler installed, such as GCC. To compile and run the programs:

### Compile
1. **`part_2.c`**:
   ```bash
   gcc -o part_2 part_2.c
   ```
2. **`Sciprog_week_7.c`**:
   ```bash
   gcc -o Sciprog_week_7 Sciprog_week_7.c
   ```

### Execute
1. **Run `part_2.c`**:
   ```bash
   ./part_2
   ```
2. **Run `Sciprog_week_7.c`**:
   ```bash
   ./Sciprog_week_7
   ```

## Program Details

### `part_2.c`
This program:
- Dynamically allocates memory for an integer array of user-specified size.
- Fills the array with ones using the function `fillwithones`.
- Prints the contents of the array using the function `printarray`.
- Frees the allocated memory using the `freearr` function.

#### Example Execution:
```plaintext
Entering the size of the array: 5
Array filled with ones:
1 1 1 1 1
```

### `Sciprog_week_7.c`
This program:
- Estimates Euler's number (`e`) using a series expansion:
  \[
  e = \sum_{i=0}^	ext{order} rac{1}{i!}
  \]
- Dynamically allocates memory for storing the terms of the series.
- Calculates the estimation for orders from `1` to a user-specified maximum order.
- Prints the estimated value and the error compared to the actual value of `e`.

#### Example Execution:
```plaintext
Enter the maximum order for estimating e: 5
Order 1: Estimator = 2.0000000000, Fail = 0.7182818285
Order 2: Estimator = 2.5000000000, Fail = 0.2182818285
Order 3: Estimator = 2.6666666667, Fail = 0.0516151618
Order 4: Estimator = 2.7083333333, Fail = 0.0099484951
Order 5: Estimator = 2.7166666667, Fail = 0.0016151618
```
