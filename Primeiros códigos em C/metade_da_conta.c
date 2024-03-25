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
 * Função main
 */
#include <cs50.h>
#include <stdio.h>

int main(void)

{
    float total, pedro, gorjeta, imposto;
    float marcio;

    printf("Valor da comida: ");
    scanf("%f", &total);

    printf("Porcentagem de impostos: ");
    scanf("%f", &imposto);

    printf("Porcentagem da gorjeta: ");
    scanf("%f", &gorjeta);

    total = total * (1 + imposto * 0.01) * (1 + gorjeta * 0.01);
    marcio = total / 2;
    pedro = total / 2;

    // Imprimirá o valor que cada epssoa vai pagar na conta
    printf("Cada um pagará R$ %.2f!\n", marcio);
    return 0;
}
