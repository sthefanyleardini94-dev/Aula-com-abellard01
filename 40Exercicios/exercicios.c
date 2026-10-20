#include <stdio.h>

 int main() {

     printf("Bem-vindo à oficina de programação!\n");
     printf("Local: labolatorio 2 \n");
    printf("Horario: 19:00");   
     return 0;
 }
 {
     int main() {
     char nome[50];
     printf("Digite o primeiro nome do usuário: ");
     scanf("%49s", nome);
     printf("Olá, %s! Seja muito bem-vindo(a)!\n", nome);
     return 0;
 }     
        
 int main() {
     char nome[50];
     int idade;
     char turma;

     printf("Digite o primeiro nome: ");
     scanf("%49s", nome);
     printf("Digite a idade em anos completos: ");
     scanf("%d", &idade);
     printf("Digite a letra da turma: ");
     scanf(" %c", &turma); // O espaço antes de %c consome quebras de linha pendentes

     printf("\n--- Conferência de Dados ---\n");
     printf("Nome: %s\n", nome);
   printf("Idade: %d anos\n", idade);
    printf("Turma: %c\n", turma);

     return 0;
 }
 int main() {
     float preco, total;
     int quantidade;

    printf("Digite o preço unitário do caderno: R$ ");
     scanf("%f", &preco);
     printf("Digite a quantidade comprada: ");
     scanf("%d", &quantidade);

    total = preco * quantidade;

     printf("O valor total da compra é: R$ %.2f\n", total);
     return 0;
 }
 


 
 
 int main() {
     int cadastroAtivo, autorizacao;

     printf("Possui cadastro ativo? (1 para Sim / 0 para Não): ");
     scanf("%d", &cadastroAtivo);
     printf("Apresentou autorização? (1 para Sim / 0 para Não): ");
     scanf("%d", &autorizacao);

     if (cadastroAtivo && autorizacao) {
         printf("Retirada permitida\n");
    } else {
         printf("Retirada não permitida\n");
     }

     return 0;
 }
 int main() {
     int participaClube, cupomValido;

     printf("Participa do clube? (1 para Sim / 0 para Não): ");
     scanf("%d", &participaClube);
     printf("Possui cupom válido? (1 para Sim / 0 para Não): ");
     scanf("%d", &cupomValido);

     if (participaClube || cupomValido) {
        printf("Frete: R$ 0,00 (Entrega Gratuita)\n");
    } else {
        printf("Frete: R$ 12,00\n");
     }

     return 0;
 }
 int main() {
    int assinaturaAtiva;

     printf("Possui assinatura ativa? (1 para Sim / 0 para Não): ");
     scanf("%d", &assinaturaAtiva);

     if (!assinaturaAtiva) {
         printf("Exibir anúncios\n");
     } else {
         printf("Reprodução sem anúncios\n");
     }

     return 0;
 }
 
 
 
 
 
 int main() {
    int totalPaginas, paginaAtual = 1;

     printf("Digite a quantidade total de páginas: ");
     scanf("%d", &totalPaginas);

    while (paginaAtual <= totalPaginas) {
         printf("Imprimindo página %d\n", paginaAtual);
         paginaAtual++;
     }

     printf("Impressão concluída\n");
     return 0;
 }
 

 int main() {
     int totalRecebido = 0;
     int opcao, quantidade;

     do {
         printf("\n=== MENU DE CONTROLE DE CAIXAS ===\n");
         printf("1 - Registrar recebimento\n");
         printf("2 - Consultar total recebido\n");
         printf("0 - Encerrar programa\n");
         printf("Escolha uma opção: ");
         scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                 printf("Digite a quantidade inteira positiva recebida: ");
                 scanf("%d", &quantidade);
                 if (quantidade > 0) {
                     totalRecebido += quantidade;
                     printf("Recebimento registrado com sucesso!\n");
                } else {
                    printf("Quantidade inválida. Deve ser positiva.\n");
                 }
                 break;
             case 2:
                 printf("Total acumulado recebido: %d caixas\n", totalRecebido);
                break;
             case 0:
                 printf("Encerrando o programa...\n");
                 break;
             default:
                 printf("Opção inválida\n");
                 break;
         }
     } while (opcao != 0);

     return 0;
 }
