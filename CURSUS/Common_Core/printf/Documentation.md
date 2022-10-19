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
- ft_print_unsigned.c
- ft_print_ptr.c
- ft_print_number.c
- ft_print_hexa.c
- ft_print_char_str.c
- ft_print_c_str.c
- libft folder with every libft functions

## FUNCTIONS
### ft_printf.c
- ft_printf -> *the function wich is called from main*   
>If the string passed has not '%' print it. Else call to ft_eval format and pass the following character to be evaluated.

- ft_eval_format -> *A function than evaluate the formar of the string*
>Evaluate the character passed by ft_printf and call to the function needed in each case. Example: 'if character is "c" it means we want to print a character so it will call to ft_print_char'

