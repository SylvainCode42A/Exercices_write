#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}
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
  ft_putchar(n % 10 + '0');
}
int ft_atoi(char *str)
{
  int result = 0;
  int sign = 1;
  int o = 0;
  
  if (str[o] == '-') 
  {
    sign = -1;
    o++;
  }
  else if (str[o] == '+')
    o++;

  while (str[o] >= '0' && str[o] <= '9')
  {
    result = result * 10 + (str[o] - '0');
    o++;
  }
  return result * sign;
}

int main(void)
{
  char buffer[100];
  int r = read(0, buffer, 99);
  buffer[r - 1] = '\0';

  int tab[10];
  char temp[20];
  int index_temp = 0;
  int i = 0;
  int j = 0;

  while (buffer[i] != '\0')
  {
    if (buffer[i] != ' ')
    {
      temp[index_temp] = buffer[i];
      index_temp++;
    }
    else 
    {
      temp[index_temp] = '\0';
      tab[j] = ft_atoi(temp);
      j++;
      index_temp = 0;
    }
    i++;
  }
  if (index_temp > 0)
  {
    temp[index_temp] = '\0';
    tab[j] = ft_atoi(temp);
    j++;
  }

  int a = 0;
  while (a < j)
  {
    ft_putnbr(tab[a]);
    ft_putchar(' ');
    a++;
  }
  ft_putchar('\n');

  return 0;
}
