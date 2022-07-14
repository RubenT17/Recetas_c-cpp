#include <stdio.h>
int main()
{
  for( int i=0; i<10; i++ )
    contador();
}
void contador(void)
{
  static int var_estatica = 0;
  int var_no_estatica = 0;

  var_estatica++;
  var_no_estatica++;

  printf("%d %d\n", var_estatica, var_no_estatica);
}


