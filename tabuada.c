int main()
{
  float valor;

  printf("Insira um valor para ver a tabuada:");
  scanf("%f", &valor);

  printf("Tabuada de Soma de %.0f\n", valor);
  for(float i = 0; i<= 10; i++){
    printf("%.0f + %.0f = %.0f \n", valor, i, valor+i);
  }

  printf("\n\nTabuada de Multiplicação de %.0f\n", valor);
  for(float i = 0; i<= 10; i++){
    printf("%.0f * %.0f = %.0f \n", valor, i, valor*i);
  }

  return 0;
}
