int my_print_comb2(void)
{
  int  a, b, c, d;
  a = 48;
   while (a <= 57)
    {
      b = a + 1;
     while (b <= 57)
       {
	 c = b + a;
	 while (c <= 57)
	  {
	    d = c + b;
	   while (d <= 57)
	     {
	       my_putchar(a);
	       my_putchar(b);
	       my_putchar(' ');
	       my_putchar(c);
	       my_putchar(d);
	       my_putchar(',');
	       my_putchar(' ');
	    d++;
	  }
	 c++;
       }
     b++; 
    }
   a++;
}
   my_putchar('\n');
    return (0);
}
