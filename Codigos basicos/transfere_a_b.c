 int a, b, aux;

    printf("Digite A & B: ");
    scanf("%d %d", &a, &b);

    aux = a;
    a = b;
    b = aux;

    printf("\nA = %d | B = %d", a,b);
