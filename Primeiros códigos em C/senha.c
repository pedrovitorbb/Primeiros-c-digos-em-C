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
#include <string.h>

/**
 * Protótipo das funções
 */
bool validar(string senha);

int main(void)
{
    // Solicita uma senha ao usuário e valida a senha:
    string senha = get_string("Digite sua senha: ");
    if (validar(senha))
    {
        printf("%s\n", "Sua senha é válida!");
    }
    else
    {
        printf("%s",   "A senha precisa de 1 letra maiúscula, ");
        printf("%s",   "1 letra minúscula, 1 número e 1 símbolo!\n");
    }

    // Termina o programa
    return 0;
}

/**
 * VALIDAR
 * Função que recebe uma string contendo a senha do usuário e retorna TRUE ou
 * FALSE dependendo se a senha contém pelo menos 1 caractere de cada categoria
 * necessária: letra maiúscula, letra minúscula, número e símbolo.
 *
 * Parâmetros:
 *    (string) senha: string que representa a senha informada pelo usuário.
 *
 * Retorno:
 *    (bool): TRUE ou FALSE indicando se a senha é válida ou não.
 */
bool validar(string senha)
{
    // Variáveis para verificar se as condições são atendidas
    bool tem_maiuscula = false;
    bool tem_minuscula = false;
    bool tem_numero = false;
    bool tem_simbolo = false;

    // Verifica cada caractere da senha
    for (int i = 0, n = strlen(senha); i < n; i++)
    {
        char caractere = senha[i];

        // Verifica se é uma letra maiúscula
        if (caractere >= 'A' && caractere <= 'Z')
        {
            tem_maiuscula = true;
        }
        // Verifica se é uma letra minúscula
        else if (caractere >= 'a' && caractere <= 'z')
        {
            tem_minuscula = true;
        }
        // Verifica se é um número
        else if (caractere >= '0' && caractere <= '9')
        {
            tem_numero = true;
        }
        // Verifica se é um símbolo
        else
        {
            tem_simbolo = true;
        }
    }

    // Retorna TRUE se todas as condições forem atendidas, caso contrário, FALSE
    return tem_maiuscula && tem_minuscula && tem_numero && tem_simbolo;
}
