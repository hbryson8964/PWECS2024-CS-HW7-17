#include <stdio.h>

double cost;
double ppg;
double odometer;
double PrevOdo;
double size;


int main(void) {
  printf("What is the cost to fill your tank? ");
  scanf( "%lf", &cost);
  printf("What is the price per gallon? ");
  scanf( "%lf", &ppg);
  printf("What is your current odometer reading? ");
  scanf( "%lf", &odometer);
  printf("What was your previous odometer reading? ");
  scanf( "%lf", &PrevOdo);
  printf("What is the size of your tank? ");
  scanf( "%lf", &size);


  printf("your answers were: $%.2lf, $%.3lf, %.2lf, %.2lf, %.1lf\n",cost, ppg, odometer, PrevOdo, size);
  printf("You bought this many gallons: %.1lf\n", cost/ppg); 

  double MPG = (odometer-PrevOdo)/size;
  
  printf("One gallon will get you this many miles: %.2lf\n", MPG);
  printf("Your cars cruising range is: %.2lf miles\n", MPG*size);

  //Extra credit
  printf("It would cost you: $%.2lf to fill your tank completely\n", ppg*size);
  printf("If you drove 15000 miles your fuel cost would be: $%.2lf\n", 15000/MPG*ppg);
  return 0;
}
