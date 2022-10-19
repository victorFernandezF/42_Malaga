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
	- all the necessary * #includes*
	- the following code controls what to do if you compile the program 
	without a *BUFFER_SIZE*
```
		#ifndef BUFFER_SIZE
		# define BUFFER_SIZE BUFSIZ
		#endif
```
if Buffer_size is undefined, the program gets the default size for the buffer_size. 
### FUNCTIONS USED
- **get_next_line** - *the function that will be called from main*    
	>this function checks if the file descriptor and the buffer size are settted
    then calls to the function ft_read.
    and then calls to the function that get the line and the rest.
    Return the line.

- **ft_read** - *the function read from the file*   
	>Ft_read allocate memory to save the line that is going to read
	Then read the file until finds a *'\n'* or until the bufffer_size is over.
	Then call to ft_free.

- **ft_free** - *join and free*

- **get_line** - *gets the line we want to return*
	>When '\n' is found but the Buffer_size is not over yet This function takes the current line.

- **get_line** - *gets the rest of the line.*   
	>When '\n' is found but the Buffer_size is not over yet the function takes the current line
	but we need to keep the rest of the line until buffer_size, to use it in case we call the
	function get_next_line more than once (in a loop for example).

## BONUS PART
The bonus part consist in:
	- using only one static var and.
	- Get_next_line must be able of manage variosu fd 