#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[]){ 
  /*
  Erasthotenes sieve for primes, no optimization
  from command line, primes n, where n is an integer will produce the list of all primes less than     
  n and write them in file primes.txt, it taks 0.95 sec  on Macbook Air M1 for n = 50_000_000 */
  FILE *primes;
  int ARRAY_SIZE = atoi(argv[1]);
  int *sieve;
  sieve = malloc (sizeof(int) * ARRAY_SIZE);
  int i;
  for (i = 0; i < ARRAY_SIZE; i++)
  {
      sieve[i] = 1;
  }
  sieve[0] = 0;
  sieve[1] = 0;

  for (i=2; i<sqrt(ARRAY_SIZE)+1; i++) 
  {
      if (sieve[i] == 1) 
      {
          for (int j= i*i; j < ARRAY_SIZE; j += i) 
          {
              sieve[j] = 0;
          }
      }
  }
  primes = fopen("primes.txt", "w");
  for (i=0; i < ARRAY_SIZE; i++)
  {
      if (sieve[i]  == 1) 
      {
          fprintf(primes, "%i\n", i);
      }
  }
  fclose(primes);
  free(sieve);
  return 0;
  }

	
