int main()
{
//para o script se a codição for verdadeira
    int p;
   float num,multiplicar=1;
    for (int i = 1; i <= 3; i++) {
        printf("Digite o seu %d° numero:\n",i);
        scanf("%f",&num);
        
        if(num < 0){
            break;
        }
        multiplicar*=num;
    }
    printf("%g",multiplicar);
    return 0;
}