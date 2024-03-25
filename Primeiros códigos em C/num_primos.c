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

// Comece aqui seu programa.
// Imprime no terminal a frase "Olá, fulano!"
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int low;
    do
    {
        low = get_int("Menor número: ");
    }
    while (low < 1);

    int high;
    do
    {
        high = get_int("Maior número: ");
    }
    while (low >= high);

    while (low <= high)
    {
        int x = 0;
        for (int b = 1; b <= low; ++b)
        {
            if (low % b == 0)
            {
                x++;
            }
        }
        if (x == 2)
        {

            printf("%d\n", low);
        }

        low += 1;
    }
    return 0;
}
