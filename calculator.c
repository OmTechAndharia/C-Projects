#include <stdio.h>
#include <conio.h>

int main()
{
  char opration;
  printf("enter the opration(+,-,*,/)");
  scanf("%c", &opration);
  int i, value;
  if (opration == '-')
  {
    printf("Remember to put '-' before negative value\n");
  }
  printf("total value:");
  scanf("%d", &value);
  float no[value];
  for (i = 1; i <= value; i++)
  {
    printf("enter the value");
    scanf("%f", &no[i]);
  }

  float sum = 0.0, dif = 0.0, multi = 0.0, div = 0.0;

  switch (opration)
  {
  case '+':

    for (i = 1; i <= value; i++)
    {
      sum = sum + no[i];
    }
    printf("%f", sum);
    break;
  case '-':

    for (i = 1; i <= value; i++)
    {
      sum = sum + no[i];
    }
    printf("%f", sum);
    break;

  case '*':
    for (i = 1; i <= value; i++)
    {
      if (i == 1)
      {
        multi = no[i];
      }
      else
      {
        multi = multi * no[i];
      }
    }
    printf("%f", multi);
    break;

  case '/':
    for (i = 1; i <= value; i++)
    {
      if (i == 1)
      {
        div = no[i];
      }
      else
      {
        div = div / no[i];
      }
    }
    printf("%f", div);
    break;

  default:
    printf("Error! opration is not correct");
  }
  return 0;
}