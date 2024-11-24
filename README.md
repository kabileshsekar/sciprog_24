# sciprog_24

# Practical 03: Numerical Integration Using the Trapezoidal Rule

This practical focuses on approximating the integral of the tangent function over the interval [0, 60 degrees] using the trapezoidal rule and comparing the result with the natural logarithm of 2 (`log(2)`).

## Contents

- `practical03.c`: A C program that calculates the approximate integral of the tangent function over the specified range and compares it with `log(2)`.

## Compilation and Execution

Ensure you have a C compiler installed, such as GCC. To compile and run the program:

1. **Compile the program**:

   ```bash
   gcc -o practical03 practical03.c -lm
   ```

   The `-lm` flag links the math library, which is necessary for mathematical functions used in the program.

2. **Run the executable**:

   ```bash
   ./practical03
   ```

## Program Overview

The program performs the following steps:

1. **Initialization**:
   - Sets the number of intervals `N` to 12.
   - Defines the lower limit `a` as 0 degrees and the upper limit `b` as 60 degrees.
   - Converts `b` from degrees to radians (`b_rad`) for trigonometric calculations.

2. **Sum Calculation**:
   - Initializes the sum with the tangent values at the endpoints: `tan(a)` and `tan(b_rad)`.
   - Iterates through intermediate points, adding `2 * tan(xi)` for each, where `xi` is the angle in radians.

3. **Final Calculation**:
   - Applies the trapezoidal rule formula:

     \[
     	ext{Integral} pprox rac{b_{	ext{rad}} - a}{2N} 	imes 	ext{sum}
     \]

4. **Comparison**:
   - Outputs the calculated integral value.
   - Compares it with the actual value of `log(2)`.

## Expected Output

The program will display:

- The sum before and after the loop.
- The final calculated integral value.
- The actual value of `log(2)`.

Example output:

```
The value of sum before the loop is: 1.732051
The value of sum after the loop is: 15.929254
The final value of the sum is: 0.695045
The actual value is: 0.693147
```
