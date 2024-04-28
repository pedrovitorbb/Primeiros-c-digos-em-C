/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:pedro vitor baier
 *    Matrícula:202415473
 *    Turma:cc1md
 *    Email:pedrovitor@outlook.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Array que armazena o número de pontos de cada letra do alfabeto
int PONTOS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Protótipos das funções
int calcular_pontuacao(string palavra);

int main(void)
{
    // Solicita uma palavra de cada jogador
    string palavra1 = get_string("Jogador 1: ");
    string palavra2 = get_string("Jogador 2: ");

    // Calcula a pontuação de cada palavra
    int pontuacao1 = calcular_pontuacao(palavra1);
    int pontuacao2 = calcular_pontuacao(palavra2);

    // Imprime o resultado do jogo
    printf("Pontuação do Jogador 1: %d\n", pontuacao1);
    printf("Pontuação do Jogador 2: %d\n", pontuacao2);

    // Determina o vencedor
    if (pontuacao1 > pontuacao2)
    {
        printf("Jogador 1 venceu!\n");
    }
    else if (pontuacao2 > pontuacao1)
    {
        printf("Jogador 2 venceu!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}

// Calcula e retorna a pontuação da palavra
int calcular_pontuacao(string palavra)
{
    int pontuacao = 0;
    // Percorre a palavra para calcular a pontuação de cada letra
    for (int i = 0, n = strlen(palavra); i < n; i++)
    {
        char letra = toupper(palavra[i]);
        // Verifica se a letra está no intervalo de A-Z
        if (letra >= 'A' && letra <= 'Z')
        {
            // Ajusta o índice do array PONTOS[] para corresponder à letra
            int indice = letra - 'A';
            // Adiciona a pontuação da letra à pontuação total
            pontuacao += PONTOS[indice];
        }
    }
    return pontuacao;
}
