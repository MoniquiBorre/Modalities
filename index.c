#include <stdio.h>;
#include <locale.h>;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade;
    /* code */
    printf("Qual a idade do competidor? ");
    scanf ("%d", &idade);

 
   if(idade >= 6 && idade <= 8){
    printf("Pode competir na categoria Infantil A");
    }else
    if (idade >= 9 && idade <= 12) {
    printf("Pode competir na categoria Infantil B");
    }else
    if (idade >= 13 && idade <= 14) {
    printf("Pode competir na categoria Juvenil A");
    }else
    if (idade >= 15 && idade <= 18) {
    printf("Pode competir na categoria Juvenil B");
    }else{
            printf("Não está apto a nenhuma modalidade");
    }


    return 0;
}
