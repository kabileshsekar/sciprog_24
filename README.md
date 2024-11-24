# sciprog_24

# Practical 02: Number Conversion and Summation

This practical focuses on two key programming exercises:

1. **Number Conversion**: Converting an integer to its binary representation and analyzing its properties.
2. **Summation Analysis**: Calculating the harmonic series in different orders to observe the effects of floating-point arithmetic.

## Contents

- `Conversion.c`: Converts a given integer to its binary form, calculates the number of binary digits, and displays both the integer and its binary representation.
- `Sum.c`: Computes the sum of the series 1/n for n ranging from 1 to 1000 in both ascending and descending orders, then compares the results to highlight potential discrepancies due to floating-point precision.

## Compilation and Execution

Ensure you have a C compiler installed, such as GCC. To compile and run the programs:

1. **Conversion.c**:

   ```bash
   gcc -o Conversion Conversion.c -lm
   ./Conversion
   ```

2. **Sum.c**:

   ```bash
   gcc -o Sum Sum.c -lm
   ./Sum
   ```

The `-lm` flag links the math library, which is necessary for certain mathematical functions used in the programs.

## Expected Output

1. **Conversion.c**:

   The program will output the integer value, its binary representation, and the number of digits in the binary form.

   Example:

   ```
   The number of digits is 25
   inum=33554431, fnum=33554432.000000, inum in binary=1111111111111111111111111
   ```

2. **Sum.c**:

   The program will display the sum of the series calculated in ascending and descending orders, followed by the difference between the two sums.

   Example:

   ```
   Sum1=7.485478
   Sum2=7.485472
   Difference between the two is 0.000007
   ```
