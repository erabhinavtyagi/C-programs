

// FUNCTION 2 : CONCATATENATION OF TWO STRINGS.

void
concat (char *c, char *d)
{
  int i, l;
  l = len (c);                  //Calling length function to determine length of string.
  // Insert the second string in the first string
  for (i = 0; d[i] != '\0'; i++)
    {
      c[i + l] = d[i];
    }
  c[i + l] = '\0';
}

