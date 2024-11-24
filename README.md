# sciprog_24

# Practical 04: Numerical Integration Using the Trapezoidal Rule

This program calculates the numerical integral of the tangent function over the interval `[0°, 60°]` using the trapezoidal rule. It approximates the result and compares it with the natural logarithm of 2 (`log(2)`).

## Contents

- `practical04.c`: A C program that computes the integral of the tangent function using the trapezoidal rule.

## Compilation and Execution

Follow these steps to compile and run the program:

1. **Ensure a C compiler is installed**:
   - GCC is recommended.

2. **Compile the program**:

   ```bash
   gcc -o practical04 practical04.c -lm
   ```

   The `-lm` flag links the math library, which is required for functions like `tan` and `log`.

3. **Run the executable**:

   ```bash
   ./practical04
   ```

## Program Overview

### Steps in the Program

1. **Initialization**:
   - The range `[0°, 60°]` is divided into `N = 12` intervals.
   - An array `TanArr` stores the tangent values at evenly spaced points within this range.

2. **Tangent Calculation**:
   - The `tan()` function from the math library calculates tangent values at points separated by 5°.
   - These values are converted to radians using the helper function `degtorad()` and stored in `TanArr`.

3. **Trapezoidal Rule**:
   - Applies the trapezoidal rule formula to compute the integral:
     \[
     	ext{Integral} pprox rac{b - a}{2N} 	imes 	ext{sum of all function values}
     \]
   - The sum includes:
     - The tangent values at the endpoints.
     - Twice the tangent values at the intermediate points.

4. **Comparison**:
   - The computed area is compared with the actual value of `log(2)`.

### Expected Output

The program displays:
- The tangent values at each interval.
- The initial area based on the first and last tangent values.
- The total area using the trapezoidal rule.
- The actual value of `log(2)` for comparison.

Example output:

```plaintext
TanArr[0] = 0.000000
TanArr[1] = 0.087489
TanArr[2] = 0.176327
TanArr[3] = 0.267949
TanArr[4] = 0.363970
TanArr[5] = 0.466308
TanArr[6] = 0.577350
TanArr[7] = 0.700208
TanArr[8] = 0.839100
TanArr[9] = 1.000000
TanArr[10] = 1.191754
TanArr[11] = 1.428148

Initial area (sum at x(0) and x(12)) = 1.428148

Trapezoidal result is: 0.619470
Real result is: 0.693147
```
