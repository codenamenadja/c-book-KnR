Functions Returning Non-Intergers
=================================

ft_atof
-------
   Write a function atof to handle scientific notation of the form *"123.45e-6".*
   floating point may be followed by *e* or *E* and an optionally signed exponent.

   Signature
      ``double ft_atof(const char *src);``

   Description
      input with *e* notation should contain + or - character to effect right side of *e* to return value.
      If *22.32e3* come as input, than just return *22.32*

