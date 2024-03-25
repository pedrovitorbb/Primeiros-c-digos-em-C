/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Pedro Vitor Boeloni Baier
 *    Matrícula: 202415473
 *    Turma: CC1Mb
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

/**
 * Inclusão de bibliotecas:
 */
#include <cs50.h>
#include <stdio.h>

/**
 * Função main
 */
int main(void)
{
    int numero = get_int("Você quer qual tabuada? ");
    int inicio = get_int("Você quer qual numero pra o inicio? ");
    int termino = get_int("Você quer acabar em qual numero a tabuada? ");
    if (inicio > termino)
    {
        printf("A especificação da tabuada não foi acertiva.\n");
    }
    else
        while (inicio < termino + 1)
        {
            int x = numero * inicio;
            printf("%i x %i = %i\n", numero, inicio, x);
            inicio++;
        }
}
