/* IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo:Pedro Vitor Boeloni Baier
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
#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    string texto = get_string("Texto: ");

    int letras = 0;
    int palavras = 1;
    int setencas = 0;

    int n = 0;

    while (texto[n] != '\0')
    {
        int ascii = tolower(texto[n]);

        if (ascii == 32)
        {
            palavras++;
        }
        else if (ascii >= 97 && ascii <= 122)
        {
            letras++;
        }
        else if (ascii == 33 || ascii == 46 || ascii == 63)
        {
            setencas++;
        }
        n++;
    }

    float L = ((float) letras / palavras) * 100;   // numero médio de letras / 100 palavras
    float S = ((float) setencas / palavras) * 100; // numero medio de sentenças / 100 palavras

    int indice = round(0.0588 * L - 0.296 * S - 15.8);

    if (indice >= 16)
    {
        printf("grau 16+\n");
    }
    else if (indice < 1)
    {
        printf("abaixo do Grau 1\n");
    }
    else
    {
        printf("Grau %i\n", indice);
    }
}
