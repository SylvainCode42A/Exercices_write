#include <unistd.h>

void affichage(char c);

int main(void)
{
 
  affichage('A');
  affichage('\n');

  return 0;
}


void affichage(char c)
{
  write(1, &c, 1);
}
