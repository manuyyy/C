    float valorReais, cotacao, valorDolar = 0;

    printf("Escreva o valor em reais e a cotação: ");
    scanf(" %f %f", &valorReais, &cotacao);

    system("cls");

    valorDolar = valorReais/cotacao;

    printf("\nO valor em reais: R$%.2f",valorReais);
    printf("\nCotação: $%.2f\n",cotacao);
    printf("\nValor em Dólares: $%.2f\n\n",valorDolar);
