# Getting Input from the User
The C language has several functions to tell the computer to read input
from the user (typically through the keyboard.):-`getc()` and `getchar()`

## Using the `getc()` Function
The `getc()` function reads the next character from a file stream, and returns the character
as an integer.

### Sytax
```
#include <stdio.h>
int getc(FILE *stream)
```
**N/B:** Here FILE *stream declares a file stream (that is, a variable). The function returns the
numeric value of the character read. If an end-of-file or error occurs, the function returns
EOF
