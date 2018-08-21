//Rohit Goswami

#include <stdio.h>
#include<string.h>
int main ()
{
  int n, i;
  char a[100];
  int count = 0;
  i = 2;

  printf ("Enter a String: ");
  scanf ("%s", a);
  n = strlen (a);
  int temp = n;

  while (count != 4)
    {
      if (count < 2)
	{
	  printf ("%c", a[n - temp]);
	  count++;
	  temp--;
	}
      else
	{
	  printf ("%c", a[n - i]);
	  i--;
	  count++;
	}
    }


}
