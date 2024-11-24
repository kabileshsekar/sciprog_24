# sciprog_24

# Practical 08: Calculating the Greatest Common Divisor (GCD)

This practical demonstrates two implementations of the Greatest Common Divisor (GCD) calculation using recursion and iteration in C.

## Contents

### Files
- `part_2.c`: A program that calculates the GCD of two integers using a recursive approach.
- `sciprog_week_8.c`: A program that calculates the GCD of two integers using an iterative approach.

## Compilation and Execution

Ensure you have a C compiler installed, such as GCC. To compile and run the programs:

### Compile
1. **`part_2.c`**:
   ```bash
   gcc -o part_2 part_2.c
   ```
2. **`sciprog_week_8.c`**:
   ```bash
   gcc -o sciprog_week_8 sciprog_week_8.c
   ```

### Execute
1. **Run `part_2.c`**:
   ```bash
   ./part_2
   ```
2. **Run `sciprog_week_8.c`**:
   ```bash
   ./sciprog_week_8
   ```

## Program Details

### `part_2.c`

This program:
- Uses a recursive function `gcd(int a, int b)` to calculate the GCD of two integers.
- Prompts the user to input two integers and computes their GCD.
- Recursively reduces the problem size until `b == 0`, at which point `a` is the GCD.

#### Example Execution:
```plaintext
Provide two integer values: 56 98
Greatest Common Divisor of 56 and 98 is: 14
```

### `sciprog_week_8.c`

This program:
- Uses an iterative function `gcd(int a, int b)` to calculate the GCD of two integers.
- Prompts the user to input two integers and computes their GCD.
- Iteratively swaps and reduces the values of `a` and `b` until `b == 0`, at which point `a` is the GCD.

#### Example Execution:
```plaintext
Provide two integer values: 120 45
Greatest Common Divisor of 120 and 45 is: 15
```
