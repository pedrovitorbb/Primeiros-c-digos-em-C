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

    float total;
    do
    {
        total = get_float("Valor da conta: ");
    }
    while (total < 10.00 || total > 999.99);

    float imposto;
    do
    {
        imposto = get_float("porcentagem de imposto: ");
    }
    while (imposto < 0.00 || imposto > 100.00);

    float gorjeta;
    do
    {
        gorjeta = get_float("porcentagem de gorjeta: ");
    }
    while (gorjeta < 0 || imposto > 100);

    float valorpessoa;
    int numeropessoas;

    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &numeropessoas);

    total = total * (1 + imposto * 0.01) * (1 + gorjeta * 0.01);
    valorpessoa = total / numeropessoas;

    // imprimirá o valor que cada pessoa vai pagar na conta/
    printf("Cada um pagará R$ %.2f!\n", valorpessoa);
    return 0;
}
