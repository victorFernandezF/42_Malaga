# PRINTF

## OBJECTIVE
> By now, you must be fed up alternating the ft_putstr and ft_putnbr
functions when doing your printing. Are you not allowed to use printf? You can recode
yours! It will be a chance for you to discover a feature of the C language – variadic
functions – and to practice detailed management of the printing options. You will then
be allowed to use your ft_printf in all your future projects.

## FILES

- ft_printf.c
- ft_printf.h
- ft_print_c_str_int.c
- ft_print_unsigned.c
- ft_print_ptr.c
- ft_print_hexa.c
- libft folder with every libft functions

## FUNCTIONS
### ft_printf.c
- ft_printf -> *the function wich is called from main*   
>If the string passed has not '%' print it. Else call to ft_eval_format and pass the following character to be evaluated.
>- Example 1: *in ft_printf("Hello World") there are not '%' so it will print "Hello World"*.
>- Example 2: *in ft_printf("number %d", var_number) there are a '%' so it will call to ft_eval_format passing the char 'd' and the variables to print.*

- ft_eval_format -> *A function than evaluate the formar of the string*
>Evaluate the character passed by ft_printf and call to the function needed in each case. Example: 'if char is "c" it means we want to print a character so it will call to ft_print_char'

### ft_print_c_str_int.c
>Contains every necessary function to print char, string and int.

### ft_unsigned.c
>Contains every necessary function to print unsigned int.

### ft_print_ptr.c
>Contains every necessary function to print a void pointer in hexadecimal base.

### ft_print_c_str_int.c
>Contains every necessary function to print char, string and int.

### ft_print_hexa.c
>Contains every necessary function to print a number in hexadecimal base.
