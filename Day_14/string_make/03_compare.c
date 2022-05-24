// FUNCTION 4 : COMPARE BOTH STRINGS. 

int
cmp (char *c, char *d)
{
  int l1, l2, flag = 0;
  l1 = len (c);
  l2 = len (d);

  if (l1 != l2)         //if length of both strings are not same then obviously they are different.
    {
      return (1);
    }
  else
    {
      for (int i = 0; i < l1; i++)      //if length of both is same and any element in array c and array d differs then came out of loop.
        {
          if (c[i] != d[i])
            {
              flag = 1;
              break;
            }
        }

      if (flag == 0)                    // If Elements of both arrays are same then don't change the flag. And return 0 for true.
        {
          return (0);
        }
      else
        {
          return (1);
        }
    }
}

