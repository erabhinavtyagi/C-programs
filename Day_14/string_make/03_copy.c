// FUNCTION 3 : COPY CONTENTS OF STR2 TO STR1.

char
copy (char *c, char *d)
{
  int i;
  for (i = 0; c[i] != '0'; i++)
    {
      c[i] = d[i];
    }
  c[i] = '\0';
}


