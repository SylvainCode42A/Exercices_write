#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *str)
{
  int result = 0;
  int sign = 1;
  int 
int main(void)
{
  char buffer[100];
  int r = read(0, buffer, 99);
  buffer[r - 1] = '\0';
  char temp[20];
  int tab[10];
  int index_temp = 0;
  int i = 0;
  int j = 0;

  while(buffer[i] != '\0')
  {
    if (buffer[i] != ' ')
    {
      temp[index_temp] = buffer[i];
      index_temp++;
    }
    else 
    {
      temp[index_temp] = '\0';
      tab[j] = ft_atoi (temp);
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
    
  }
  int z = 0;
  while(z < j) 
  {
    ft_putnbr(tab[z]);
    ft_putchar(' ');
    z++;
  }
  ft_putchar('\n');

  return 0;
}
