# Answers to questions

## Data control

Observe the following code:

```c++
int length = 0;
scanf("%d", &length);
int* vector = malloc(length * sizeof(int));
for (int i = 0; i < length; i++)
    scanf("%d", &vector[i]);
free(vector);
```

Know the answer of the following question:

- _What is happening line for line?_

**Answer**:

- Line 1: Allocate integer variable with value 0.
- Line 2: Read input from `stdin` to variable `length`
- Line 3: Allocate pointer to a variable with datatype `int` named `vector`. It will be the size of int multiplied by the `length` (number of int pointers it can contain). Basically a vector with room for `length` number of ints.
- Line 4-5: Iterate from 0 to length-1 and read input from `stdin` to `vector[i]` (basically assign values for all elements in vector).
- Line 5: Free the previously allocated memory for variable `vector`.

## Gammal hederlig läsförståelse

Observe the following function:

```c++
#include <stdio.h>
#include <time.h>
// Assume that foo is a function which takes longer time to execute
// for a larger value n.
void someFunction(void (*f)(int), int milliseconds, int n) {
    int milliseconds_since = 1;
    int end = 1;
    do {
        n = (int)(n * (double)end / milliseconds_since);
        milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
        end = milliseconds_since + milliseconds;
        foo(n);
        milliseconds_since = clock() * 1000 / CLOCKS_PER_SEC;
    } while (end - milliseconds_since > 100);
    printf("\nLargest n: %d", n);
}
```

Know the answer of the following question:

- _What does `someFunction` do?_

**Answer**: `clock()` returns approximate processor time consumed by the program. `CLOCKS_PER_SEC` is the number of clock ticks per second (`clock()` will increase with `CLOCKS_PER_SEC` every second). So the `while` loop inside `someFunction` will run until `end - miliseconds_since` is less than or equal to 100.

## Data types are like whaaat?

Observe the following function:

```c++
int x;
printf("Nothing: %d\nGive x a value: ", x);
scanf("%d", x);
printf("\nYour value is: %d\n", x);
```

Know the answer of the following question:

- _What is printed?_

**Answer**: First it will print `Nothing: 0`, since the integer `x` is `0` by defult (initial value when just init variable). Then the program will ask you to input another integer, and it should then print it. But it looks like there is an error in the above code, since `scanf` should take the pointer as argument, not the variable itself. So it should be `scanf("%d", &x);`.
