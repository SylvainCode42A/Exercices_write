#include <unistd.h>


int ecriture(char c)
{

  write(1, &c, 1);
  write(1, "\n", 1);

  return 0;
}





int main(void)
{

  ecriture('H'); 


  return 0;
}
