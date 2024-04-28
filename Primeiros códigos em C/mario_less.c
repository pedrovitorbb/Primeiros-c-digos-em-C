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
    int altura, li, colun, space;
    do
    {
        printf("Defina uma altura: ");
        scanf("%d", &altura);
    }
   
    while (altura <= 0 || altura >= 9);

    for (li = 0; li < altura; li = li + 1)
    {
        for (space = altura; space > li + 1; space = space - 1)
        {
            printf(" ");
        }

        for (colun = 0; colun <= li; colun = colun + 1)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
