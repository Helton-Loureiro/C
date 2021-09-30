/*
* matriz transposta é a matriz que se obtêm da troca de linhas por colunas de uma dada matriz.
ex:

1 5       1 7 8
7 3  -->  5 3 2
8 2

*/

//importação de bibliotecas
#include <stdio.h>
#include <time.h>

int linha=10, coluna=10;

//protótipos das funções
void preencherMatriz (int matriz [linha][coluna]);
void transporMatriz (int matriz [linha][coluna], int transposta [coluna][linha]);
void exibirMatriz (int matriz [linha][coluna]);

//função main
void main ()
{
	//declaraçãode variáveis
	int temp;
	int m[linha][coluna];
	int transposta[coluna][linha];

printf("Digite o numero de linhas da matriz: ");
scanf("%d", &linha);
printf("Digite o numero de colunas da matriz: ");
scanf("%d", &coluna);

	//preenchendo a matriz aleatoriamente
	printf("\n");
	preencherMatriz (m);

	//exibindo a matriz original
	printf("\n\nMatriz original:\n\n");
	exibirMatriz (m);
	
	//gerando a matriz transposta
	transporMatriz (m, transposta);
	
	//exibindo a matriz transposta 
	printf("\n\nMatriz transposta:\n\n");
	temp = linha;
	linha = coluna;
	coluna = temp;
	exibirMatriz (transposta);
}

//Implementando a função preencher matriz aleatoriamente 
void preencherMatriz (int matriz [linha][coluna])
{
	
//declaraçãode variáveis
int i, j;
	
	srand (time(NULL));
	
	for (i=0;i<linha;i++)
	{
		for(j=0;j<coluna;j++)
		{
			matriz[i][j] = rand() %100 +1;
		}
	}
}

//Implementando a função Exibir matriz de números inteiros
void exibirMatriz (int matriz [linha][coluna])
{
	//declaraçãode variáveis
	int i, j;
	
	//percorrendo as linhas da matriz
	for (i=0;i<linha;i++)
	{
		//percorrendo as colunas da matriz
		for (j=0;j<coluna;j++)
		{
			printf ("%2d ", matriz[i][j]); // esse 2 ajusta a exibição para 2 casas decimais
		}
		
		//pulando para a próxima linha
		printf ("\n");		
	}
}	

void transporMatriz (int matriz[linha][coluna], int transposta[coluna][linha])
{
	//declaração de variáveis
	int i, j;
	
	for (i=0;i<linha;i++)
	{
		for (j=0;j<coluna;j++)													
		{																	
			transposta [j][i] = matriz [i][j];
		}
	}
}
