# GET NEXT LINE

## DOCUMENTATION STUFF
### FILES
- get_next_line.c - *Contains the functions:*
	- get_next_line
	- ft_read
	- get_line
	- get_save
	- ft_free
- get_next_line_utils.c - *Contains other util functions*
	- ft_strjoin
	- ft_strchr
	- ft_strlen
	- ft_calloc -> this function use ft_bzeros() which is static.
- get_next_line.h - *contains the headers of the functions used*
	- all the necessary *'#'includes*
	- the following code controls what to do if you compile the program 
	without a *BUFFER_SIZE*
```
		#ifndef BUFFER_SIZE
		# define BUFFER_SIZE BUFSIZ
		#endif
```
	if Buffer_size is undefined, the program gets the default size for the buffer_size. 
### FUNCTIONS USED
- get_next_line - *the function that will be called from main*
- 