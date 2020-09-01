//Author: Shengyou Jiang sjj5492@psu.edu
//Collaborator: Joel John jmj6182@psu.edu
//Collabarator: Michael Artlip mva5905@psu.edu
//Collabarator: Yue Wu yzw5627@psu.edu

#include <stdio.h>
#include<readline/readline.h>
#include<stdlib.h>

int main(void) {
  char *ctemp = readline("Enter temperature in Celsius: ");
  double c = atof(ctemp);
  double f = c * 1.8 + 32;
  printf("%f° in Celsius is equvalent to %f° Fahrenheit.\n",c, f);

  return 0;
}