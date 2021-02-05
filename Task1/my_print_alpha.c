int  my_print_alpha(void)

{
 char print = 97;
  
    while (print >= 97 && print <=122)
   {
     my_putchar(print);
     print++;
   }    
   my_putchar('\n');
   return (0);
}
