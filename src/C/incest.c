#include <stdio.h>

int main() {
  char choice;

  printf("Enter The Langauge You Need Incest In:\n[1]English\n[2]German\n[3]Japanese\n[4]Polish\n[5]Hindi\n[6]Afrikaans\n[7]Latin\n[8]Spanish\n\n");
  scanf("%c", &choice);

  switch (choice) {
    case '1':
      printf("English:\tIncest\n");
      break;
    case '2':
      printf("German:\tInzest\n");
      break;
    case '3':
      printf("Japenese:\tKonshinsōkan\n");
      break;
    case '4':
      printf("Polish:\tkazirodztwo\n");
      break;
    case '5':
      printf("Hindi:\tkautumbik vyabhichaar\n");
      break;
    case '6':
      printf("Afrikaans:\tbloedskande\n");
      break;
     case '7':
      printf("Latin:\tincestus\n");
      break;
    case '8'
      printf("Spanish:\tincesto\n");
      break;
    default:
      printf("That's Not A Real Langauge");
      break;
  }

  return 0;
}
