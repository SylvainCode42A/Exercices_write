#include <unistd.h>


void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
   int i = 0;
  
   while(str[i] != '\0')
   {
     ft_putchar(str[i]);
     i++;
   }
}

void ft_putnbr(int n)
{
  if (n < 0)
  {
    write(1, "-", 1);
  }

  if (n >= 10)
  {
    ft_putnbr(n / 10);
  }

  char c = n % 10 + '0';
  write(1, &c, 1);
}


int main(void)
{
  int nombre = 42;

  ft_putstr("Bonjour");
  write(1, "\n", 1);

  ft_putnbr(nombre);
  write(1, "\n", 1);

  ft_putstr("Piscine");
  write(1, "\n", 1);

  return 0;
}
