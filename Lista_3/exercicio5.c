#include <stdio.h>
#include <stdlib.h>

int numVendedoresCadastrados = 0;
int numVendasCadastrados = 0;

typedef struct{
    int codigo;
    int mes;
    double valor;
}Venda;

Venda *alocarMemoriaVendas(int n);
int *alocarMemoriaVendedores(int n);

void cadastrarVendedor(int *vendedores, int n);
int cadastrarVendedorHelper(int *vendedores, int codigo);

void cadastrarVenda(Venda *vendas, int *vendedores);
int cadastrarVendaHelper(Venda *vendas, int codigo, int mes, double valor);

int calcVendasNoMes(Venda *vendas, int codigo, int mes);
int codigojaExiste(int *vendedores, int codigo);

void consultarVendasNoMesDoVendedor(Venda *vendas, int *vendedores);
void consultarVendasNoMesDoVendedorHelper(Venda *vendas, int codigo, int mes);

void consultarTotalDeVendasDoVendedor(Venda *vendas, int *vendedores);
double calcTotalDeVendas(Venda *vendas, int codigo);
double calcTotalDeVendasNoMes(Venda *vendas, int codigo, int mes);

void mostrarVendedorQueMaisVendeuNoMes(Venda *vendas, int *vendedores);
int mostrarVendedorQueMaisVendeuNoMesHelper(Venda *vendas, int *vendedores, int mes);

void mostrarMesComMaiorVenda(Venda *vendas, int *vendedores);

void mostrarMenu();
void lerCodigo(int *codigo, int *vendedores);
void lerMes(int *mes);

int main(){
    int n, m;
    do{
        printf("Qual a quantidade de vendedores? ");
        scanf("%d", &n);
    }while(m <= 0);

    int *vendedores = alocarMemoriaVendedores(n);
    m = n * 12;
    Venda *vendas = alocarMemoriaVendas(m);

    int acao;
    do{
        do{
            mostrarMenu();
            scanf("%d", &acao);
        }while(acao < 1 || acao > 7);

        switch(acao){
        case 1:
            cadastrarVendedor(vendedores, n);
            break;
        case 2:
            cadastrarVenda(vendas, vendedores);
            break;
        case 3:
            consultarVendasNoMesDoVendedor(vendas, vendedores);
            break;
        case 4:
            consultarTotalDeVendasDoVendedor(vendas, vendedores);
            break;
        case 5:
            mostrarVendedorQueMaisVendeuNoMes(vendas, vendedores);
            break;
        case 6:
            mostrarMesComMaiorVenda(vendas, vendedores);
            break;
        }
    }while(acao != 7);
}

void mostrarMesComMaiorVenda(Venda *vendas, int *vendedores){

}

void mostrarVendedorQueMaisVendeuNoMes(Venda *vendas, int *vendedores){
    if(numVendedoresCadastrados == 0)
        return;
    int mes;
    lerMes(&mes);

    int indexMaiorVenda = mostrarVendedorQueMaisVendeuNoMesHelper(vendas, vendedores, mes);
    printf("\nO vendedor que mais vendeu é: %d", vendedores[indexMaiorVenda]);
}

int mostrarVendedorQueMaisVendeuNoMesHelper(Venda *vendas, int *vendedores, int mes){
    double *totalVendedores = (double*) calloc(numVendedoresCadastrados, sizeof(double));
    int i;
    for(i = 0; i < numVendedoresCadastrados; i++){
        totalVendedores[i] = calcTotalDeVendasNoMes(vendas, vendedores[i], mes);
    }
    int indexMaiorVenda = 0;
    for(i = 1; i < numVendedoresCadastrados; i++){
        if(totalVendedores[indexMaiorVenda] < totalVendedores[i])
            indexMaiorVenda = i;
    }
    free(totalVendedores);
    return indexMaiorVenda;
}

void consultarTotalDeVendasDoVendedor(Venda *vendas, int *vendedores){
    int codigo, i;
    lerCodigo(&codigo, vendedores);

    printf("Total das Vendas: %lf", calcTotalDeVendas(vendas, codigo));
}

double calcTotalDeVendas(Venda *vendas, int codigo){
    int i;
    double total = 0;
    for(i = 0; i < numVendasCadastrados; i++){
        if(vendas[i].codigo == codigo){
            total+= vendas[i].valor;
        }
    }
    return total;
}

double calcTotalDeVendasNoMes(Venda *vendas, int codigo, int mes){
    int i;
    double total = 0;
    for(i = 0; i < numVendasCadastrados; i++){
        if(vendas[i].codigo == codigo && vendas[i].mes == mes){
            total+= vendas[i].valor;
        }
    }
    return total;
}

void consultarVendasNoMesDoVendedor(Venda *vendas, int *vendedores){
    int codigo, mes, total;
    lerCodigo(&codigo, vendedores);
    lerMes(&mes);
    consultarVendasNoMesDoVendedorHelper(vendas, codigo, mes);
}

void consultarVendasNoMesDoVendedorHelper(Venda *vendas, int codigo, int mes){
    int i;
    for(i = 0; i < numVendasCadastrados; i++){
        if(vendas[i].codigo == codigo && vendas[i].mes == mes){
            printf("\n\n------Venda %d------", i);
            printf("\nCodigo: %d", vendas[i].codigo);
            printf("\nMes: %d", vendas[i].mes);
            printf("\nValor: %lf", vendas[i].valor);
        }
    }
     printf("\n");
}

void cadastrarVenda(Venda *vendas, int *vendedores){
    int codigo, mes;
    double valor;
    do{
        lerCodigo(&codigo, vendedores);
        lerMes(&mes);

        do{
            printf("\nDigite o valor da venda: ");
            scanf("%lf", &valor);
        }while(valor <= 0);

    }while(cadastrarVendaHelper(vendas, codigo, mes, valor) == 0);
}

int cadastrarVendaHelper(Venda *vendas, int codigo, int mes, double valor){
    if(calcVendasNoMes(vendas, codigo, mes) == 1)
        return 0;
    Venda v;
    v.codigo = codigo;
    v.mes = mes;
    v.valor = valor;
    vendas[numVendasCadastrados] = v;
    numVendasCadastrados++;
    return 1;
}

int calcVendasNoMes(Venda *vendas, int codigo, int mes){
    int i, count = 0;
    for(i = 0; i < numVendasCadastrados; i++){
        if(vendas[i].codigo == codigo && vendas[i].mes == mes)
            count++;
    }
    return count;
}

void cadastrarVendedor(int *vendedores, int n){
    int max = n - numVendedoresCadastrados;
    if(max == 0){
        printf("\n****Não é possível salvar mais vendedores****\n");
        return;
    }
    int qtd;
    do{
        printf("\nQuantos vendedores voce irá cadastrar? Podem ser cadastrados %d vendedores\n", max);
        scanf("%d", &qtd);
    }while(qtd < 0 && qtd <= max);

    int i, codigo;
    for(i = 0; i < qtd; i++){
        do{
            printf("\nDigite o codigo do %d vendedor: ", i + 1);
            scanf("%d", &codigo);
        }while(cadastrarVendedorHelper(vendedores, codigo) == 0);
    }
}

int cadastrarVendedorHelper(int *vendedores, int codigo){
    if(codigojaExiste(vendedores, codigo) == 1)
        return 0;
    vendedores[numVendedoresCadastrados] = codigo;
    numVendedoresCadastrados++;
    return 1;
}

int codigojaExiste(int *vendedores, int codigo){
    int i;
    for(i = 0; i < numVendedoresCadastrados; i++){
        if(vendedores[i] == codigo)
            return 1;
    }
    return 0;
}

void mostrarMenu(){
    printf("\n1.Cadastrar Vendedor");
    printf("\n2.Cadastrar Venda");
    printf("\n3.Consultar as vendas de um funcionário em determinado mes");
    printf("\n4.Consultar o numero do vendedor que mais vendeu em um determinado mes");
    printf("\n5.Mostrar o número do vendedor que mais vendeu em um determinado mes");
    printf("\n6.Mostrar o número de mês com mais vendas");
    printf("\n7.Finalizar programa");
    printf("\nSelecione uma das ações acima: ");
}

Venda *alocarMemoriaVendas(int n){
    if(n < 1)
        return (NULL);
    Venda *vendas = (Venda*)calloc(n, sizeof(Venda));
    if(vendas == NULL){
        printf("Erro: Memoria insuficiente");
        return (NULL);
    }
    return vendas;
}

int *alocarMemoriaVendedores(int n){
    if(n < 1)
        return (NULL);
    int *vendedores= (int*)calloc(n, sizeof(int));
    if(vendedores == NULL){
        printf("Erro: Memoria insuficiente");
        return (NULL);
    }
    return vendedores;
}

void lerMes(int *mes){
   do{
        printf("\nDigite o mês da venda: ");
        scanf("%d", mes);
    }while(*mes < 1 || *mes > 12);
}

void lerCodigo(int *codigo, int *vendedores){
   do{
        printf("\nDigite o codigo do vendedor: ");
        scanf("%d", codigo);
    }while(codigojaExiste(vendedores, *codigo) == 0);
}
