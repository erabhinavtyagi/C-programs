// FUNCTION 1:TO FIND LENGTH OF A STRING. I have used this function in other functions as well where length of string is to be find.

	
int
len (char *c)
{
  int i, len = 0;
  for (i = 0; c[i] != '\0'; i++)
    len++;
  return len;
}

