#include <unistd.h>

void ft_putnbr(int n)
{
  if (n < 0)
  {
    write(1, "-", 1);
    n = -n;
  }
  
  if (n >= 10)
  {
    ft_putnbr(n / 10); 
  }  

  char c = (n % 10) + '0';
  write(1, &c, 1);
}

int main(void)
{
  int nombre = 3456; 

  ft_putnbr(nombre);
}
