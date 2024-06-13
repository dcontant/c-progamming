#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int normal_int = 10e2;
  short short_int = 10e2;
  unsigned unsigned_int = 10e2;
  long long_int = 10e2;
  unsigned long unsigned_long = 10e2;
  long long long_long_int = 10e2;
  unsigned long long unsigned_long_long = 10e2;
  float float_num = 10e2;
  double double_float = 10e2;
  long double long_double_float = 10e2;
  
  
  printf("size ot INT_MAX = %i\n", INT_MAX);
  printf("size ot INt_Min = %i\n", INT_MIN);
  printf("size normal int = %lu\n", sizeof(normal_int));
  printf("size short int = %lu\n", sizeof(short_int));
  printf("size unsigned_int = %lu\n", sizeof(unsigned_int));
  printf("size long_int = %lu\n", sizeof(long_int));
  printf("size long_long_int = %lu\n", sizeof(long_long_int));
  printf("size unsigned_long_long = %lu\n", sizeof(unsigned_long_long));
  printf("size float_num = %lu\n", sizeof(float_num));
  printf("size double_float = %lu\n", sizeof(double_float));
  printf("size long_double_float = %lu\n", sizeof(long_double_float));
  
  
}
