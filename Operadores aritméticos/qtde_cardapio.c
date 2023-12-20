    int hamb, cheb,fri, ref, mil;
    float total = 0.0;

    printf("Digite a quantidade de Hambúrgers consumidos: ");
    scanf("%d", &hamb);

    printf("\nDigite a quantidade de Cheeseburgers consumidos: ");
    scanf("%d", &cheb);

    printf("\nDigite a quantidade de Fritas consumidas: ");
    scanf("%d", &fri);

    printf("\nDigite a quantidade de Refris consumidos: ");
    scanf("%d", &ref);

    printf("\nDigite a quantidade de Milkshakes consumidos: ");
    scanf("%d", &mil);

    total = (hamb * 3.0) + (cheb * 2.5) + (fri * 2.5) + (ref * 1.0) + (mil * 3.0);

    system("cls");

    printf("Total consumido...........");
    printf("\nHambúrger................. %d\n", hamb);
    printf("Cheeseburger.............. %d\n", cheb);
    printf("Fritas.................... %d\n", fri);
    printf("Refrigerante.............. %d\n", ref);
    printf("Milkshake................. %d\n", mil);
    printf("Total..................... R$%.2f", total);
