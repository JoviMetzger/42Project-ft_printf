# 📝 ft_printf

This repository contains my own printf function, called "ft_printf".

## About

The ft_printf function is a function that will mimic the original printf().
I needed to implement the following conversions:
- %c  - Prints a single character.
- %s  - Prints a string (as defined by the common C convention).
- %p  - The void * pointer argument has to be printed in hexadecimal format.
- %d  - Prints a decimal (base 10) number.
- %i  - Prints an integer in base 10.
- %u  - Prints an unsigned decimal (base 10) number.
- %x  - Prints a number in hexadecimal (base 16) lowercase format.
- %X  - Prints a number in hexadecimal (base 16) uppercase format.
- %%  - Prints a percent sign.

## Installation

To use the function, follow the steps below:

1. Compile by running the following command:
```bash
make
```
2. You can create your own main() or use my main() which I have included/commented out in the ft_printf.c file.
3. Finally, execute the function using the following command: 
```bash
gcc -Wall -Werror -Wextra libftprintf.a ft_printf.c && ./a.out
```

## Subject

You can find the subject for this project [here](https://cdn.intra.42.fr/pdf/pdf/68788/en.subject.pdf).
