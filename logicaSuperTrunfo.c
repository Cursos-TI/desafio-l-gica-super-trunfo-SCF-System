#include <stdio.h>         // Inclusão da biblioteca
                                                            //juro que tentei hahahaha
//OBS: Nesse código todo, Eu não conseguir colocar NOME DA CIDADE COMPLETO COM ESPAÇOS,por isso eu coloco apenas as iniciais (SP e RJ)
// Eu também não conseguir definir o nome do vencedor (cidade), mas tem o numero da carta vencedora. exemplo: carta1.
// Eu estou em outros cursos de linguagem de programação, espero evoluir o contribuir

struct Cidade {                         // Definição da Estrutura (Cidade). Essa estrutura agrupa todos os dados que representam uma cidade.
    char estado;                        // Letra do estado (A a H)
    char codigo[4];                     // Código da carta (ex: A01, B03)
    char nome[100];                     // Nome da cidade
    int populacao;                      // População da cidade
    float area;                         // Área da cidade em km²
    float pib;                          // PIB da cidade em bilhões de reais
    int pontosTuristicos;               // Número de pontos turísticos
    float pibpercapita;                 // PIB dividido pela População 
    float densidade;                    // Polulaçã dividida pela Área 
    float superpoder;                   // É a soma = população + area + PIB + pontosturisticos + PIBpercapita + inversoPIBpercapita. 
    float inversopibpercapita;          // divisão = 1 / densidade 
  
};

//Função exibircarta: Essa função recebe uma cidade e o número da carta (1 ou 2) e imprime todos os dados formatados.
void exibircarta(struct Cidade cidade, int numerocarta){
    printf("\nCarta %d: \n", numerocarta);
    printf("Estado: %c\n", cidade.estado);
    printf("Código: %s\n", cidade.codigo);
    printf("Nome da Cidade: %s\n", cidade.nome);
    printf("População da Cidade: %d\n", cidade.populacao);
    printf("Área da cidade em km²: %.2f\n", cidade.area);
    printf("PIB da Cidade: %.2f\n", cidade.pib);
    printf("Número de Pontos Turísticos: %d\n", cidade.pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", cidade.densidade);
    printf("PIB per Capita: %.2f\n", cidade.pibpercapita);
    printf("Inverso do PIB Percapita: %f\n", cidade.inversopibpercapita);
    printf("Super Poder: %f\n", cidade.superpoder);

}

int main(){         //Função main() Aqui acontece a execução principal do programa.
    struct Cidade carta1, carta2, nome;   // Declara duas variáveis do tipo Cidade, para armazenar os dados das duas cartas.
    printf("\n**************************************** SUPER TRUNFO **************************************** \n\n");

    printf("\n=============== INSIRA DADOS DA CARTA [1] =============== \n\n");

    printf("Estado (A a D): ");
    scanf(" %c", &carta1.estado);
    printf("Código da Carta (Exp: A01, B03): \n");
    scanf("%s", &carta1.codigo);
    printf("Nome da Cidade: \n");
    scanf("%s", &carta1.nome);
    printf("População da Cidade: \n");
    scanf("%d", &carta1.populacao);
    printf("Área da cidade em km²: \n");
    scanf("%f", &carta1.area);
    printf("PIB da Cidade: \n");
    scanf("%f", &carta1.pib);
    printf("Número de Pontos Túristicos: \n");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidade = carta1.populacao / carta1.area;      //Cálculo da densidade populacional e do PIB 
    carta1.pibpercapita = carta1.pib / carta1.populacao;    //per capita com base nos dados fornecidos.
    carta1.inversopibpercapita = 1 / carta1.densidade;
    carta1.superpoder = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibpercapita + carta1.inversopibpercapita;
    printf("\n\n=============== INSIRA DADOS DA CARTA [2] =============== \n\n");

    printf("Estado (A a D): ");
    scanf(" %s", &carta2.estado);
    printf("Código da Carta (Exp: A01, B03): \n");
    scanf("%s", &carta2.codigo);
    printf("Nome da Cidade: \n");
    scanf("%s", &carta2.nome);
    printf("População da Cidade: \n");
    scanf("%d", &carta2.populacao);
    printf("Área da cidade em km²: \n");
    scanf("%f", &carta2.area);
    printf("PIB da Cidade: \n");
    scanf("%f", &carta2.pib);
    printf("Número de Pontos Túristicos: \n");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidade = carta2.populacao / carta2.area;      //Cálculo da densidade populacional e do PIB-
    carta2.pibpercapita = carta2.pib / carta2.populacao;    //-percapita com base nos dados fornecidos.
    carta2.inversopibpercapita = 1 / carta2.densidade;      //Cálculo do inverso do PIB percapita.
    //Abaixo cálculo do Super Poder
    carta2.superpoder = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibpercapita + carta2.inversopibpercapita;

    //Chama a função que imprime todos os dados formatados.
    exibircarta(carta1, 1);     
    exibircarta(carta2, 2);  
    
    int opcao;
    // Aqui eu imprimi ás opcões a serem selecionadas.
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - PIB per capita\n");
    printf("6 - Densidade populacional\n");
    printf("7 - Super Poder\n");
    printf("Digite a opção (1 a 7): ");
    scanf("%d", &opcao);

    printf("\n=========== RESULTADO DA COMPARAÇÃO ===========\n");
    

    /*
    Aqui eu dei ao usuario a opotunidade de selecionar qual atributo ele deseja comparar. utilizei o Comando SWITCH, case, if e else.
    a um totoal de 7 (Case), que é a mesma quantidade de opções. no final do código há um comando (default) 
    que servirá para uma invalidar uma escolha errada do usuário.
    */  
    switch (opcao) { /*é uma estrutura de controle que permite executar diferentes blocos de código dependendo do valor de uma variável ou expressão. 
        Ela é uma alternativa a estruturas if/else aninhadas, tornando o código mais limpo e legível quando se tem várias condições baseadas no mesmo valor. 
        */
        case 1: //estrutura de controle usada para executar um bloco de código a partir de múltiplas opções com base no valor de uma expressão.
            if (carta1.populacao > carta2.populacao)
                printf("Carta 1 vence em População!\n");
            else if (carta1.populacao < carta2.populacao)
                printf("Carta 2 vence em População!\n");
            else
                printf("Empate em População!\n");
            break; /*Em C, o comando break serve para interromper a execução de um loop (for, while, do-while) ou de um bloco switch
             e passar o controle para a próxima instrução após esse loop ou bloco. Ele é usado para sair do bloco de código antes do seu término natural. */

        case 2: 
            if (carta1.area > carta2.area)
                printf("Carta 1 vence em Área!\n");
            else if (carta1.area < carta2.area)
                printf("Carta 2 vence em Área!\n");
            else
                printf("Empate em Área!\n");
            break;

        case 3: 
            if (carta1.pib > carta2.pib)
                printf("Carta 1 vence em PIB!\n");
            else if (carta1.pib < carta2.pib)
                printf("Carta 2 vence em PIB!\n");
            else
                printf("Empate em PIB!\n");
            break;

        case 4: 
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Carta 1 vence em Pontos Turísticos!\n");
            else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
                printf("Carta 2 vence em Pontos Turísticos!\n");
            else
                printf("Empate em Pontos Turísticos!\n");
            break;

        case 5: 
            if (carta1.pibpercapita > carta2.pibpercapita)
                printf("Carta 1 vence em PIB per capita!\n");
            else if (carta1.pibpercapita < carta2.pibpercapita)
                printf("Carta 2 vence em PIB per capita!\n");
            else
                printf("Empate em PIB per capita!\n");
            break;

        case 6: 
            if (carta1.densidade > carta2.densidade)
                printf("Carta 1 vence em Densidade Populacional!\n");
            else if (carta1.densidade < carta2.densidade)
                printf("Carta 2 vence em Densidade Populacional!\n");
            else
                printf("Empate em Densidade Populacional!\n");
            break;

        case 7: 
            if (carta1.superpoder > carta2.superpoder)
                printf("Carta 1 vence em Super Poder!\n");
            else if (carta1.superpoder < carta2.superpoder)
                printf("Carta 2 vence em Super Poder!\n");
            else
                printf("Empate em Super Poder!\n");
            break;

        default: 
            printf("Opção inválida!\n");
            break;
    }

    return 0;

}


/* OPERADORES RELACIONAIS:
> : Maior que
< : Menor que
>= : Maior ou igual a
<= : Menor ou igual a
== : Igual a
!= : Diferente de
% : Resto de
*/

/*
BREAK:
Em C, o comando break serve para interromper a execução de um loop (for, while, do-while) ou de um bloco switch
e passar o controle para a próxima instrução após esse loop ou bloco. Ele é usado para sair do bloco de código antes do seu término natural

CASE:
Estrutura de controle usada para executar um bloco de código a partir de múltiplas opções com base no valor de uma expressão.

SWITCH:
é uma estrutura de controle que permite executar diferentes blocos de código dependendo do valor de uma variável ou expressão. 
Ela é uma alternativa a estruturas if/else aninhadas, tornando o código mais limpo e legível quando se tem várias condições baseadas no mesmo valor. 
*/

//DADOS PRIMITIVOS:
//int = Os inteiros são números sem casas decimais. Eles são usados quando você precisa contar ou trabalhar com números inteiros. Por exemplo, (int idade = 25;) armazena a idade de uma pessoa.
//float e double Exp1= São tipos de pontos FLUTUANTES, Os números de ponto flutuante são usados para representar números com casas decimais. Existem dois tipos principais: float e double . 
//float e double Exp2= A diferença entre eles é a precisão. float ocupa menos espaço na memória, mas tem menos precisão do que double. Exemp: (float altura = 1.75;) (double salario = 3000.50;)
//char = O tipo char é usado para armazenar um único caractere, como uma letra ou um símbolo.
//char nome[20] = ''Alice''; Uso de strings = Além de armazenar caracteres individuais, podemos também trabalhar com sequências de caracteres, conhecidas como strings. Em C, strings são representadas como arrays (vetores) de caracteres terminados com um caractere nulo ('\0'). 
//Vamos apresentar rapidamente o conceito de strings, pois será necessário para a realização do desafio. Por exemplo, a variável nome abaixo será um array (vetor) de char e pode armazenar um nome.

//A SEGUIR, VOCÊ TEM UMA LISTA DOS PRINCIPAIS ESPECIFICADORES UTILIZADOS:
/*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/