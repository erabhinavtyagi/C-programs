// FUNCTION 5: REVERSING STRING1.

char
rev (char *c)
{
  int i,l;
  l = len (c);
  char temp;
  for (i = 0; i < l / 2; i++)
    {
      temp = c[i];
      c[i] = c[l - i - 1];
      c[l - i - 1] = temp;
    }
}
           
