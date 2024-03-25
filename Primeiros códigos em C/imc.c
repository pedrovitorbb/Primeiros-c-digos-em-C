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

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float weight;
    do
    {
        weight = get_float("informe seu peso em Kg: ");
    }
    while (weight < 40 || weight > 200);

    float height;
    do
    {
        height = get_float("diga sua altura em metros: ");
    }
    while (height < 1.4 || height > 2.5);

    float imc = weight / (height * height);
    string class = "";
    if (imc < 16)
    {
        class = "Desnutrição grau III";
    }
    else if (16 <= imc && imc < 17)
    {
        class = "desnutrição grau II";
    }
    else if (17 <= imc && imc < 18.5)
    {
        class = "desnutrição grau I";
    }
    else if (18.5 <= imc && imc < 125)
    {
        class = "Peso Saúdavel";
    }
    else if (25 <= imc && imc < 30)
    {
        class = "Sobrepeso";
    }
    else if (30 <= imc && imc < 35)
    {
        class = "Obesidade I";
    }
    else if (35 <= imc && imc < 40)
    {
        class = "Obesidade II";
    }
    else if (imc >= 40)
    {
        class = "Obesidade III";
    }
    printf("IMC: %.2f; Classificação: %s.\n", imc, class);

    // termina o progrma
    return 0;
}
