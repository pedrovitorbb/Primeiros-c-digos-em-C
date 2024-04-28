/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:pedro vitor baier
 *    Matrícula:202415473
 *    Turma:cc1md
 *    Email:pedrovitorbaier@outlook.com
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

// Comece aqui seu programa
#include <cs50.h>
#include <stdio.h>
#include <string.h>

/**
 * Variáveis e contantes globais
 */
const int BITS_NO_BYTE = 8;

void imprimir_lampada(int bit);

int main(void)
{
    int binario[BITS_NO_BYTE];
    int decimal_value;
    string input = get_string("mensagem: ");
    int comprimento = strlen(input);
    for (int i = 0; i < comprimento; i++)
    {
        decimal_value = input[i];
        for (int j = BITS_NO_BYTE - 1; j > 0; j--)
        {
            binario[j] = decimal_value % 2;
            decimal_value /= 2;
        }
        for (int j = 0; j < BITS_NO_BYTE; j++)
        {
            imprimir_lampada(binario[j]);
        }
        printf("\n");
    }
}

/**
 * IMPRIMIR_LAMPADA
 * Esta função recebe um inteiro que representa um bit (0 ou 1) e imprime no
 * terminal um Emoji que representa uma lâmpada acesa ou uma lâmpada apagada.
 * Não há nenhum retorno, só a impressão de um lâmpada acessa ou apagada.
 * Note como um Emoji é impresso através de seu código Unicode.
 *
 * Parâmetros:
 *    (int) bit: um número inteiro que pode ser 0 ou 1
 *
 * Retorno:
 *    (void)
 */
void imprimir_lampada(int bit)
{
    if (bit == 0)
    {
        // Emoji que representa uma lâmpada apagada
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Emoji que representa uma lâmpada acessa
        printf("\U0001F7E1");
    }
}
