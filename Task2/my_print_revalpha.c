int  my_print_revalpha(void)

{
 char print = 122;

    while (print <= 122 && print >=97)
   {
     my_putchar(print);
     print--;
   }
   my_putchar('\n');
   return (0);
}
