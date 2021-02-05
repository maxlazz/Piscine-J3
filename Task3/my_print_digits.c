int  my_print_digits(void)

{
 char print = 48;

    while (print >= 48 && print <=57)
   {
     my_putchar(print);
     print++;
   }
   my_putchar('\n');
   return (0);
}
