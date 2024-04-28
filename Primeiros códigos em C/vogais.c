/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Pedro Vitor Boeloni Baier
 *    Matrícula: 202415473
 *    Turma: CC1Md
 *    Email: pedrovitorbaier@outlook.com
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
#include <stdio.h>
#include <stdbool.h>

/**
 * MAIN
 */
int main(int argc, string argv[])
{
    // Verifica se o usuário forneceu um argumento de linha de comando
    if (argc != 2)
    {
        printf("Uso: %s <frase>\n", argv[0]);
        return 1; // Retorna 1 indicando erro
    }

    // Obtém a frase fornecida como argumento
    string frase = argv[1];

    // Inicializa as variáveis para contar as vogais
    int vogais = 0;

    // Percorre a frase para contar as vogais
    for (int i = 0; frase[i] != '\0'; i++)
    {
        char caractere = frase[i];

        // Verifica se o caractere é uma vogal (minúscula ou maiúscula)
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
            caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U')
        {
            vogais++;
        }
    }

    // Imprime o número de vogais na frase
    printf("Número de vogais na frase: %d\n", vogais);

    // Retorna 0 indicando sucesso
    return 0;
}
