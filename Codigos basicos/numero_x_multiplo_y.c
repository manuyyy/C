 int x, y;

    printf("Digite x & y: ");
    scanf("%d%d", &x, &y);

    if(x % y == 0){
        printf("\nO número %d é múltiplo de %d!",x,y);
    }else{
        printf("\nO número %d NÃO é múltiplo de %d!",x,y);
    }
