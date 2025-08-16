#include <unistd.h>

void my_swap(int *a, int *b)
{
  
  int temporaire = *b;
  *b = *a;
  *a = temporaire; 

  //write ("Nombre A = %d, Nombre B = %d\n", *a, *b);
}
  


int main(void)
{
  int a = 2;
  int b = 4;
 
 
  ssize_t pwrite(int a , const void *buf, size_t nbyte);

  my_swap(&a, &b);

  return 0;
}
