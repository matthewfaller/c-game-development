
# Chapter 1, Hello World

Most programmer's first program will be the traditional "Hello, World" program. 

However, later on, there will be many, much cooler things we can build...

## Basic Program

```c
#include <stdio.h>

int main (void) {
    printf("Hello, world!");
    return 0;
}
```

#### Lets break this program down into a few steps:

First we include the standard library for input and output:

```c
    #include <stdio.h>
```
    
Second, we define a _main_ function that serves as the entry point for our program. 

```c
    int main (void) { ...
```

Third, we call a pre-defined function from the standard library we've included. 

```c
    printf("Hello, world!");
```

Finally, we return from our program. Zero indicates that the program has halted without error.

```c
    return 0;
```

## "printf" - Print with Formatting

Documentation for `printf` can be found [at this link](http://www.cplusplus.com/reference/cstdio/printf/ "click for docs")

### Quick Examples

Simple
```c
printf("My String");
```

```
My String
```

Newline
```c
printf("My String\n");
printf("My Other String");
```

```
My String
My Other String
```

## Practice Problems

### 1. Write a program that outputs the Konami Code to the console. 
> This program must display arrows as their corresponding  textual direction. For example, if the first two items in the code were up arrows, you'd output "Up Up". 
