#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c) {write(1, &c, 1); }
void ft_putnbr(int n)
{
  if (n < 0)
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

  if(str[i] == '-')
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
  char buffer[10];
  int r = read(0, buffer, 9);
  buffer[r - 1] = '\0';

  char temp[20];
  int temp_index = 0;
  int tab[10];
  int y = 0;
  int z = 0;

  while (buffer[y] != '\0')
  {
    if (buffer[y] != ' ')
    {
      temp[temp_index] = buffer[y];
      temp_index++; 
    } 
    else
    {
      temp[temp_index] = '\0';
      tab[z] = ft_atoi(temp);
      z++;
      temp_index = 0;
    }
    y++;
  }
  
  if (temp_index > 0)
  {
     temp[temp_index] = '\0';
      tab[z] = ft_atoi(temp);
      z++;
  }
  
  int o = 0;
  while (o < z)
  {
    ft_putnbr(tab[o]);
    ft_putchar(' ');
    o++;
  }

  return 0;
}
