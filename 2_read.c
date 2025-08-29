#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}
void ft_putnbr(int n)
{
  if (n == 0)
  {
    write(1, "-", 1);
    n = -n;
  }

  if (n >= 10)
    ft_putnbr(n / 10);

  ft_putchar(n % 10 + '0');
}
int ft_atoi(char *str)
{
  int result = 0;
  int sign = 1;
  int i = 0;

  if (str[i] == '-')
  {
    sign = -1;
    i++;
  }
  else if (str[i] == '+')
    i++;

  while (str[i] >= '0' && str[i] <= '9')
  {
    result = result * 10 + (str[i] - '0');
    i++;
  }
  return result * sign;
}

int main(void)
{
  char buffer[100];
  int r = read(0, buffer, 99);
  buffer[r - 1] = '\0';
  
  int o = ft_atoi(buffer);
  ft_putnbr(o);
  ft_putchar('\n');
  
  return 0;
}
