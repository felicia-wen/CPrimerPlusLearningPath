# Integers

on a 16 bits system:

<https://stackoverflow.com/questions/13403880/how-can-a-16bit-processor-have-4-byte-sized-long-int>

- short = 16 bits Integer
- int = 16 bits Integer
- long = 32 bits Integer

32 bit:

- short = 16 bits
- int = 32 bits
- long = 32 bits
- long long = 64 bits

The same type of name doesn't necessarily mean the same thing on different systems, which is not such a good thing.  

As of C99, here is a tricky header file called `stdint.h`.  

exact-width integer types: int8_t int32_t ...
minimum width types: int_least8_t (if the smallest type is not 8-bit but 16-bit, then it is perhaps implemented as 16-bit.)  

int_fast8_t allows the fastest calculations for 8-bit signed values.

intmax_t: define a type that can hold any valid signed integer value.  
uintmax_t: the largest available unsigned type.  
these types could be bigger than `long long` and `unsigned long` because C implementations are permitted to be bigger than the required one, some compilers introduced the long long type before it became part of the standard.  

Use PRId32 for an appropriate specifier for int32_t which is defined in `inttype.h, once you don't need to include `stdint.h`, it has already been included in `inttype.h`.  

# Specifiers

```c

unsigned /* for nonnegative integers.  */

// integers specifier
"%o"; "%#o"/* octal; Prefixed (0)octal */
"%x"; "%#x"; "%#X"; /* hexadecimal; Prefixed (0x)hexadecimal; Prefixed (0X)hexadecimal */
"%d"; /* decimal */

"%ld" "%hd" "%lld" /* long; short; long long (decimal) */

// float and double specifier
"%f" /* float and double numbers using decimal notation (32000.0) */
"%e" /* same, but using exponential notation (2.14e9) */
"%a" /* same, but uisng hexadecimal format. */

"%Lf" "%Le" "%La" /* long double */
```


# `_Bool` 

is an integer that only requires 1 bit of memory.  


# `float`, `double`, and `long double`

`float` provides at least six significant figures and allows a range of at least 10e-37 to 10e37.
Often, the system uses 32 bits to store a float: 8 for the exponential value and sign, and 24 bits for the nonexponent part.  

`double` extends the minimum number of significant figures that can be represented to 10(13 in the representation). Typical `double` representations use 64 bits instead of 32. 

`long double` is at least as precise as `double`.  

## floating point round-off error

`float` needs to be 6~7 digits mostly with an exponent. 2.0e20 + 1.0 makes mantissa exceed 6~7 digits limits.

## Overflow and Underflow

# `char`

# Complex and Imaginary Types

# Escape Sequences
