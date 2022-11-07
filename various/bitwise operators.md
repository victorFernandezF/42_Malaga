# BITWISE OPERATORS
<hr/>
- AND (&): return 1 if the two bits are 1 and 0 if bits are differents or equal to 0.   

**Exampe**
~~~~   
	100  
&	110  
  -------   
	100

* Only when both are 1 the result is 1 else the result is 0. 
~~~~

- OR (|): return 1 if at least one of the bits is 1. 

**Exampe**
~~~~
	100  
|	110  
  -------   
	110

* When one of the bits is 1 the result is 1 else the result is 0.
~~~~

- XOR (^): return 1 if the bits are the opposite and 0 if they are the same. 

**Exampe**
~~~~
	100  
^	110  
  -------   
	010

* When one of the bits is the opposite of the other, thw result is 1 else the result is 0.
~~~~

- Bitwise Complement (~): Change 1 to 0 and 0 to 1.

 **Exampe**
~~~~
~100 -> 011  

* but in c programming bitwise complement of n will be -(n + 1)
~~~~

### Shifts

- \>\>:  Move every bits to the right by *n* bits.

**Exampe**
~~~~
100 >> 1  *move everything to the right by 1 bit*  
result -> 10

1110 >> 2  *move everything to the right by 2 bit*  
result -> 11
~~~~

- \<\<:  Move every bits to the left by *n* bits.

**Exampe**
~~~~
110 << 1  *move everything to the left by 1 bit*  
result -> 1100

1110 << 2  *move everything to the left by 2 bit*  
result -> 111000

10010110 << 2  *move everything to the left by 2 bit*  
result -> 1001011000
~~~~
