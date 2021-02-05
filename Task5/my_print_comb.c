int my_print_comb(void)
{
  char a = 48, b = 48, c = 48;
   while (a <= 57)
    {
      b = a + 1;
     while (b <= 57)
       { 
	c = b + 1;
	 while (c <= 57)
	{
	 my_putchar(a);
	 my_putchar(b);
	 my_putchar(c);
	 my_putchar(',');
	 my_putchar(' ');
	 c++;
	}
	 b++; 
       }
     a++;
   }
   my_putchar('\n')
    return (0);
}
