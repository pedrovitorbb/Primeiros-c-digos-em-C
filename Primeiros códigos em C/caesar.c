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
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void texto_cifrado(string textosimples, int chave);
/**
 * MAIN
 */

int main(int argc, string argv[])
{

    if (argc == 2)
    {
        // verifica se argv[1] é um dígito positivo
        for (int i = 0; i < strlen(argv[1]); i++)
        {
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar chave\n");
                return 1;
            }
        }
        // converte argv[1] para um int
        int chave = atoi(argv[1]);

        printf("Sucesso\n"
               "%d\n",
               chave);

        string textosimples = get_string("Texto Simples: ");

        printf("Texto cifrado: ");
        // cifrar
        // saída de texto cifrado
        texto_cifrado(textosimples, chave);
    }
    else
    {
        printf("Usage: ./caesar chave\n");
        return 1;
    }

    printf("\n");
}

void texto_cifrado(string textosimples, int chave)
{
    for (int i = 0; i < strlen(textosimples); i++)
    {
        if (textosimples[i] >= 'a' && textosimples[i] <= 'z')
        {
            printf("%c", ((textosimples[i] - 'a' + chave) % 26) + 'a');
        }

        if (textosimples[i] >= 'A' && textosimples[i] <= 'Z')
        {
            printf("%c", ((textosimples[i] - 'A' + chave) % 26) + 'A');
        }

        else if (isalpha(textosimples[i]) == false)
        {
            printf("%c", textosimples[i]);
        }
    }
}
