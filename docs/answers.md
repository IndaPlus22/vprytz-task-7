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

**Answer**:

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

**Answer**:
