#include <unistd.h>


void affichagestring(char *str, char c)
{
  int i = 0;

  while (str[i] != '\0')
  {
    write (1, &str[i], 1);
    i++;
  }
  write (1, &c, 1);
}

int main(void)
{
  affichagestring("Bonjour", '\n');

  return 0;
}
  

