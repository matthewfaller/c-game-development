// Coments with // are ignored by the compiler

// Include "Standard" Input / Output Functions
#include <stdio.h>

/*
    This is a multiline comment, it allows you to document things. 

    Even across multiple lines *gasp*

    All programs must have a "main" entry point. Typically, this is
    done by defining a "main" function. 

    The simplist main function is shown below:

    int main(void) {
        return 0;
    }

    "return 0" means that we are returning a 
    status code of '0' to the operating system. 
*/

int main(void) {
    
    // printf stands for, print with formatting

    printf("Hello, world\n");

    // The "backslash n" creates a newline. 

    return 0;
}