//Author : Rohit Goswami

#include <stdio.h>
#include<string.h>
int main ()
{
  int n, i;
  char a[100];


  printf ("Enter a String: ");
  scanf ("%[^\n]s", a);

  for (i = 0; i < strlen (a); i++)
    {
      if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
	{
	  a[i] = a[i] - 'a' + 65;
	}
    }
  printf ("%s", a);

}
