  float x, y, aux;

    printf("Digite número: ");
    scanf("%f %f", &x ,&y);

    printf("\nValor Digitado: A = %.2f, B = %.2f", x, y);

    aux = x;
    x = y;
    y = aux;

    printf("\nValor invertido: A = %.2f, B = %.2f", x, y);
