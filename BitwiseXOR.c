#include<stdio.h>
void display (int x);
int
main (void)
{
  int a, bit, mask, bitposition;
  printf ("Enter an integer");
  scanf ("%d", &a);
  printf ("Enter the bit position");
  scanf ("%d", &bitposition);
  mask = 1 << bitposition;
  printf ("a=%d\n", a);
  displayBits (a);
  if ((a & mask) == 0)
    bit = 0;
  else
    bit = 1;
  printf ("The bit at position %d is %d \n", bitposition, bit);
  return 0;
}

void
displayBits (int value)
{
  int c = 0;			/* counter */

  /* define displayMask and left shift 31 bits */
  int displayMask = 1 << 31;	//binary value: 10000000 00000000 00000000 00000000

  printf ("%10d = ", value);

  /* loop through bits */
  for (c = 1; c <= 32; c++)
    {
      if (value & displayMask)
	{
	  printf ("1");
	}
      else
	{
	  printf ("0");
	}
      value <<= 1;		/* shift value left by 1 */
      value = value << 1;

      if (c % 8 == 0)
	{			/* output space after 8 bits */
	  printf (" ");
	}			/* end if */

    }				/* end for */

  printf ("\n");
}				/* end function displayBits */
