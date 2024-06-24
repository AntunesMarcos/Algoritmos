#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

typedef struct {
    int idCliente;
    char nomeCliente[50];
    char enderecoCliente[100];
    char telefoneCliente[15];
} Cliente;

typedef struct {
    int idFuncionario;
    char nomeFuncionario[50];
    char enderecoFuncionario[100];
    char telefoneFuncionario[15];
    double salarioFuncionario;
} Funcionario;

typedef struct {
    int numeroQuarto;
    int quantidadePessoas;
    double valorDiaria;
    char statusQuarto[10];
} Quarto;

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    int idestadia;
    Data dataentrada;
    Data datasaida;
    Cliente clientes;
    Quarto quartos;
} Estadia;

Cliente clientes[100];
Funcionario funcionarios[100];
Estadia estadias[100];
Quarto quartos[100];

int qtdClientes = 0, qtdFuncionarios = 0, qtdEstadias = 0, qtdQuartos = 0;


void converterParaTm(Data d, struct tm *tm) {
    tm->tm_mday = d.dia;
    tm->tm_mon = d.mes - 1; // Meses em struct tm são de 0 a 11
    tm->tm_year = d.ano - 1900; // Anos em struct tm são contados a partir de 1900
    tm->tm_hour = 0;
    tm->tm_min = 0;
    tm->tm_sec = 0;
    tm->tm_isdst = -1; // Informa para a biblioteca que deve calcular o horário de verão
}

int diferencaEmDias(Data d1, Data d2) {
    struct tm tm1 = {0};
    struct tm tm2 = {0};

    converterParaTm(d1, &tm1);
    converterParaTm(d2, &tm2);

    time_t t1 = mktime(&tm1);
    time_t t2 = mktime(&tm2);

    double diffInSeconds = difftime(t1, t2);
    int diffInDays = (int)(diffInSeconds / (60 * 60 * 24));

    return diffInDays;
}

float calcularDiarias() {
    printf("-------Calcular Diarias-------\n");
    int codigoEstadia;
    printf("Informe o codigo da estadia: ");
    scanf("%d", &codigoEstadia);

    for(int i = 0; i < qtdEstadias; i++) {
        if(estadias[i].idestadia == codigoEstadia) {
            int diasDeDiferenca = diferencaEmDias(estadias[i].datasaida, estadias[i].dataentrada);
            float valorTotal = diasDeDiferenca * estadias[i].quartos.valorDiaria;
            printf("Total a pagar: %.2f\n", valorTotal);
            return valorTotal;
        }
    }
    printf("Estadia não encontrada!\n");
    return 0;
}

void baixaEstadia() {
    printf("-------Baixa de Estadia-------\n");
    int idEstadia;
    char ajusteDiaria;

        printf("Deseja ajustar a diaria? (S/N): ");
        scanf(" %c", &ajusteDiaria);
        if(ajusteDiaria == 'S' || ajusteDiaria == 's'){
            return ajusteNasDiarias();
        }
    printf("\nInforme o codigo da estadia: ");
    scanf("%d", &idEstadia);

    for(int i = 0; i < qtdEstadias; i++) {
        if(estadias[i].idestadia == idEstadia) {
            if( estadias[i].dataentrada.dia == estadias[i].datasaida.dia && estadias[i].dataentrada.mes == estadias[i].datasaida.mes && estadias[i].dataentrada.ano == estadias[i].datasaida.ano){
                int diasDeDiferenca = 1;
                float valorTotal = diasDeDiferenca * estadias[i].quartos.valorDiaria;
                printf("Nome do cliente: %s\n", estadias[i].clientes.nomeCliente);
                printf("Numero do quarto: %d\n", estadias[i].quartos.numeroQuarto);
                printf("Data de entrada: %d/%d/%d\n", estadias[i].dataentrada.dia, estadias[i].dataentrada.mes, estadias[i].dataentrada.ano);
                printf("Data de saida: %d/%d/%d\n", estadias[i].datasaida.dia, estadias[i].datasaida.mes, estadias[i].datasaida.ano);
                printf("Total a pagar: %.2f\n", valorTotal);
                printf("Estadia encerrada!\n");
                strcpy(quartos[qtdQuartos].statusQuarto, "Desocupado");
            }else{
            int diasDeDiferenca = diferencaEmDias(estadias[i].datasaida, estadias[i].dataentrada);
            float valorTotal = diasDeDiferenca * estadias[i].quartos.valorDiaria;
            printf("Nome do cliente: %s\n", estadias[i].clientes.nomeCliente);
            printf("Numero do quarto: %d\n", estadias[i].quartos.numeroQuarto);
            printf("Data de entrada: %d/%d/%d\n", estadias[i].dataentrada.dia, estadias[i].dataentrada.mes, estadias[i].dataentrada.ano);
            printf("Data de saida: %d/%d/%d\n", estadias[i].datasaida.dia, estadias[i].datasaida.mes, estadias[i].datasaida.ano);
            printf("Total a pagar: %.2f\n", valorTotal);
            printf("Estadia encerrada!\n");
            strcpy(quartos[qtdQuartos].statusQuarto, "Desocupado");
            }
            return;
        }
    }
    printf("Estadia não encontrada!\n");
}
void  ajusteNasDiarias( ){
    printf("-------Ajuste nas Diarias-------\n");
    int idEstadia;
    char str[10];
    printf("Informe o codigo da estadia: ");
    scanf("%d", &idEstadia);
    for(int i = 0; i < qtdEstadias; i++) {
        if(estadias[i].idestadia == idEstadia) {
            printf("Informe a data de saida (dia): ");
            scanf("%d", &estadias[i].datasaida.dia);
            if(estadias[i].datasaida.dia > 31 || estadias[i].datasaida.dia < 1) {
                printf("Dia inválido!\n");
                return ajusteNasDiarias();
            }
            printf("Informe a data de saida (mes): ");
            scanf("%d", &estadias[i].datasaida.mes);
            if(estadias[i].datasaida.mes > 12 || estadias[i].datasaida.mes < 1) {
                printf("Mês inválido!\n");
                return ajusteNasDiarias();
            }
            printf("Informe a data de saida (ano): ");
            scanf("%d", &estadias[i].datasaida.ano);
            sprintf (str, "%d", estadias[i].datasaida.ano);
            if(strlen(str) != 4) {
                printf("Ano inválido!\n");
                return ajusteNasDiarias();
            }
            return baixaEstadia();
        }
    }
    printf("Estadia não encontrada!\n");
    return baixaEstadia();

}

void ajustarDiarias()
{
    printf("-------Ajuste nas Diarias-------\n");
    int idEstadia;
    char str[10];
    printf("Informe o codigo da estadia: ");
    scanf("%d", &idEstadia);
    for (int i = 0; i < qtdEstadias; i++)
    {
        if (estadias[i].idestadia == idEstadia)
        {
            printf("Informe a data de saida (dia): ");
            scanf("%d", &estadias[i].datasaida.dia);
            if (estadias[i].datasaida.dia > 31 || estadias[i].datasaida.dia < 1)
            {
                printf("Dia inválido!\n");
                return ajusteNasDiarias();
            }
            printf("Informe a data de saida (mes): ");
            scanf("%d", &estadias[i].datasaida.mes);
            if (estadias[i].datasaida.mes > 12 || estadias[i].datasaida.mes < 1)
            {
                printf("Mês inválido!\n");
                return ajusteNasDiarias();
            }
            printf("Informe a data de saida (ano): ");
            scanf("%d", &estadias[i].datasaida.ano);
            sprintf(str, "%d", estadias[i].datasaida.ano);
            if (strlen(str) != 4)
            {
                printf("Ano inválido!\n");
                return ajusteNasDiarias();
            }
            printf("Datas ajustada!\n");
            return;
        }
    }
    printf("Estadia não encontrada!\n");
}
void pesquisarCliente() {
    printf("-------Pesquisar Cliente-------\n");
    int idCliente;
    printf("Informe o codigo do cliente: ");
    scanf("%d", &idCliente);

    for(int i = 0; i < qtdClientes; i++) {
        if(clientes[i].idCliente == idCliente) {
            printf("Nome: %s\n", clientes[i].nomeCliente);
            printf("Endereco: %s\n", clientes[i].enderecoCliente);
            printf("Telefone: %s\n", clientes[i].telefoneCliente);
            return;
        }
    }
    printf("Cliente não encontrado!\n");
}

void pesquisarFuncionario() {
    printf("-------Pesquisar Funcionario-------\n");
    int idFuncionario;
    printf("Informe o codigo do funcionario: ");
    scanf("%d", &idFuncionario);

    for(int i = 0; i < qtdFuncionarios; i++) {
        if(funcionarios[i].idFuncionario == idFuncionario) {
            printf("Nome: %s\n", funcionarios[i].nomeFuncionario);
            printf("Endereco: %s\n", funcionarios[i].enderecoFuncionario);
            printf("Telefone: %s\n", funcionarios[i].telefoneFuncionario);
            printf("Salario: %.2lf\n", funcionarios[i].salarioFuncionario);
            return;
        }
    }
    printf("Funcionario não encontrado!\n");
}

void cadastrarQuarto() {
    printf("-------Cadastrar Quarto-------\n");
    printf("Informe o numero do quarto: ");
    scanf("%d", &quartos[qtdQuartos].numeroQuarto);

    for(int i = 0; i < qtdQuartos; i++) {
        if(quartos[i].numeroQuarto == quartos[qtdQuartos].numeroQuarto) {
            printf("Numero de quarto já cadastrado!\n");
            return cadastrarQuarto();
        }
    }
    printf("Informe a quantidade de pessoas: ");
    scanf("%d", &quartos[qtdQuartos].quantidadePessoas);

    printf("Informe o valor da diaria: ");
    scanf("%lf", &quartos[qtdQuartos].valorDiaria);

    strcpy(quartos[qtdQuartos].statusQuarto, "Desocupado");

    qtdQuartos++;

    printf("Quarto cadastrado!\n");
}

void cadastrarEstadia() {
    printf("-------Cadastrar Estadia-------\n");
    int jaCadastrado = 0;
    int clienteEncontrado = 0;
    int quartoEncontrado = 0;
    char str[10];
    int quantidadePessoas;
    printf("Informe o codigo da estadia: ");
    scanf("%d", &estadias[qtdEstadias].idestadia);

    for(int i = 0; i < qtdEstadias; i++) {
        if(estadias[i].idestadia == estadias[qtdEstadias].idestadia) {
            jaCadastrado = 1;
            break;
        }
    }
    if(jaCadastrado) {
        printf("Codigo de estadia já cadastrado!\n");
        return;
    }
    printf("Informe o codigo do cliente: ");
    scanf("%d", &estadias[qtdEstadias].clientes.idCliente);
    for (int i = 0; i < qtdClientes; i++)
    {
        if (clientes[i].idCliente == estadias[qtdEstadias].clientes.idCliente)
        {
            estadias[qtdEstadias].clientes = clientes[i];
            clienteEncontrado = 1;
            break;
        }
    }

    printf("Informe o numero do quarto: ");
    scanf("%d", &estadias[qtdEstadias].quartos.numeroQuarto);

    printf("informe a quantidade de pessoas:");
    scanf("%d", &quantidadePessoas);

    for(int i=0; i < qtdQuartos; i++){
        if(estadias[qtdEstadias].quartos.numeroQuarto == quartos[i].numeroQuarto){
            if(quantidadePessoas > quartos[i].quantidadePessoas){
                printf("Quantidade de pessoas excede o limite do quarto\n");
                return cadastrarEstadia();
            }
        }
}

    printf("Informe a data de entrada (dia): ");
    scanf("%d", &estadias[qtdEstadias].dataentrada.dia);
    if(estadias[qtdEstadias].dataentrada.dia > 31 || estadias[qtdEstadias].dataentrada.dia < 1) {
        printf("Dia inválido!\n");
        return cadastrarEstadia();
    }
    printf("Informe a data de entrada (mes): ");
    scanf("%d", &estadias[qtdEstadias].dataentrada.mes);
    if(estadias[qtdEstadias].dataentrada.mes > 12 || estadias[qtdEstadias].dataentrada.mes < 1) {
        printf("Mês inválido!\n");
        return cadastrarEstadia();
    }
    printf("Informe a data de entrada (ano): ");
    scanf("%d", &estadias[qtdEstadias].dataentrada.ano);
    sprintf(str, "%d", estadias[qtdEstadias].dataentrada.ano);

    if(strlen(str) != 4) {
        printf("Ano inválido!\n");
        return cadastrarEstadia();
    }
    printf("\n\nInforme a data de saida (dia): ");
    scanf("%d", &estadias[qtdEstadias].datasaida.dia);
    if(estadias[qtdEstadias].datasaida.dia > 31 || estadias[qtdEstadias].datasaida.dia < 1) {
        printf("Dia inválido!\n");
        return cadastrarEstadia();
    }
    printf("Informe a data de saida (mes): ");
    scanf("%d", &estadias[qtdEstadias].datasaida.mes);
    if(estadias[qtdEstadias].datasaida.mes > 12 || estadias[qtdEstadias].datasaida.mes < 1) {
        printf("Mês inválido!\n");
        return cadastrarEstadia();
    }
    printf("Informe a data de saida (ano): ");
    scanf("%d", &estadias[qtdEstadias].datasaida.ano);
    sprintf(str, "%d", estadias[qtdEstadias].datasaida.ano);
    if(strlen(str) != 4) {
        printf("Ano inválido!\n");
        return cadastrarEstadia();
    }

    if(!clienteEncontrado) {
        printf("Cliente não cadastrado!\n");
        return cadastrarCliente();
    }

    for(int i = 0; i < qtdQuartos; i++) {
        if(quartos[i].numeroQuarto == estadias[qtdEstadias].quartos.numeroQuarto) {
            estadias[qtdEstadias].quartos = quartos[i];
            strcpy(quartos[i].statusQuarto, "Ocupado");
            quartoEncontrado = 1;
            break;
        }
    }

    if(!quartoEncontrado) {
        printf("Quarto não cadastrado!\n");
        return cadastrarQuarto();
    }
    strcpy(quartos[qtdQuartos].statusQuarto, "Ocupado");
    qtdEstadias++;

    printf("Estadia cadastrada!\n");
}

void cadastrarFuncionario() {
    printf("-------Cadastrar Funcionario-------\n");
    int jaCadastrado = 0;
    printf("Informe o codigo do funcionario: ");
    scanf("%d", &funcionarios[qtdFuncionarios].idFuncionario);

    for(int i = 0; i < qtdFuncionarios; i++) {
        if(funcionarios[i].idFuncionario == funcionarios[qtdFuncionarios].idFuncionario) {
            jaCadastrado = 1;
            break;
        }
    }
    if(jaCadastrado) {
        printf("Codigo de funcionario já cadastrado!\n");
        return;
    }
    printf("Informe o nome do funcionario: ");
    scanf(" %[^\n]s", funcionarios[qtdFuncionarios].nomeFuncionario);

    printf("Informe o endereco do funcionario: ");
    scanf(" %[^\n]s", funcionarios[qtdFuncionarios].enderecoFuncionario);

    printf("Informe o telefone do funcionario: ");
    scanf(" %[^\n]s", funcionarios[qtdFuncionarios].telefoneFuncionario);

    printf("Informe o salario do funcionario: ");
    scanf("%lf", &funcionarios[qtdFuncionarios].salarioFuncionario);

    qtdFuncionarios++;

    printf("Funcionario cadastrado!\n");
}

void cadastrarCliente() {
    printf("-------Cadastrar Cliente-------\n");
    int jaCadastrado = 0;
    printf("Informe o codigo do cliente: ");
    scanf("%d", &clientes[qtdClientes].idCliente);

    for(int i = 0; i < qtdClientes; i++) {
        if(clientes[i].idCliente == clientes[qtdClientes].idCliente) {
            jaCadastrado = 1;
            break;
        }
    }
    if(jaCadastrado) {
        printf("Codigo de cliente já cadastrado!\n");
        return;
    }
    printf("Informe o nome do cliente: ");
    scanf(" %[^\n]s", clientes[qtdClientes].nomeCliente);
    printf("Informe o endereco do cliente: ");
    scanf(" %[^\n]s", clientes[qtdClientes].enderecoCliente);
    printf("Informe o telefone do cliente: ");
    scanf(" %[^\n]s", clientes[qtdClientes].telefoneCliente);
    qtdClientes++;

    printf("Cliente cadastrado!\n");
}
void pesquisarQuarto()
{
    printf("-------Pesquisar Quarto-------\n");
    int numeroQuarto;
    printf("Informe o numero do quarto: ");
    scanf("%d", &numeroQuarto);

    for (int i = 0; i < qtdQuartos; i++)
    {
        if (quartos[i].numeroQuarto == numeroQuarto)
        {
            printf("Numero do quarto: %d\n", quartos[i].numeroQuarto);
            printf("Quantidade de pessoas: %d\n", quartos[i].quantidadePessoas);
            printf("Valor da diaria: %.2lf\n", quartos[i].valorDiaria);
            printf("Status do quarto: %s\n", quartos[i].statusQuarto);
            return;
        }
    }
    printf("Quarto Desocupado\n");
    return cadastrarCliente();
}
int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do {
        printf("\n");
        printf("1 - Cadastrar Cliente\n");
        printf("2 - Cadastrar Funcionario\n");
        printf("3 - Cadastrar Quarto\n");
        printf("4 - Cadastrar Estadia\n");
        printf("5 - Pesquisar Cliente\n");
        printf("6 - Pesquisar Funcionario\n");
        printf("7 - Pesquisar Quarto\n");
        printf("8 - Calcular Diarias\n");
        printf("9 - Baixa de Estadia\n");
        printf("10 - Ajuste nas diarias\n");
        printf("0 - Sair\n");
        printf("\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");
        switch(opcao) {
            case 1:
                cadastrarCliente();
                break;
            case 2:
                cadastrarFuncionario();
                break;
            case 3:
                cadastrarQuarto();
                break;
            case 4:
                cadastrarEstadia();
                break;
            case 5:
                pesquisarCliente();
                break;
            case 6:
                pesquisarFuncionario();
                break;
            case 7:
                pesquisarQuarto();
                break;
            case 8:
                calcularDiarias();
                break;
            case 9:
                baixaEstadia();
                break;
            case 10:
                ajustarDiarias();
                break;
            case 0:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(opcao != 0);

    return 0;
}
