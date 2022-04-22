#include <unistd.h>

void	combinacao_4114(int *mat, int n, int inv);
void	combinacao_3223(int *mat, int n, int inv);
void	combinacao_3113(int *mat, int n, int inv);
void	combinacao_2112(int *mat, int n, int inv);
void	combinacao_2222(int *mat, int n);

void	iterador_matriz(int *vet_lin);
void	montar_matriz(int *lin_col);
void	options(int *mat, int comb, int n);

void	print_matriz(int matriz[4][4]);

int		numeracao_linha(int a, int b);
int		len(int comb);

int		verificar_matriz(int m[4][4]);
int		verificar_matriz2(int m[4][4], int *vet_lin);

void    erro(void);


int		main(int argc, char *argv[])
{
	int cont;
	int i;
	int vetor[16];

	if (argc != 2)
	{
		erro();
		return(0);
	}
	cont = 0;
	
  	while (argv[1][cont] != '\0')
        cont++;
		
    if (cont != 31)
	{
		erro();
		return(0);		
	}
	
	cont = 0;
	i = 0;
	while(argv[1][i] != '\0')
	{
		if (i%2 == 0)
		{
			vetor[cont] = (argv[1][i] - '0');
			cont ++;
		}
		i++;
	}
	i = 0;
	while (i < 16)
	{
		if (vetor[i] < 1 || vetor[i] > 4)
		{
			erro();
			return(0);			
		}
		i++;
	}
	montar_matriz(vetor);
	return(0);
}



void	montar_matriz(int *lin_col)
{
	int vet_lin[4];
	int cont;
	
	cont = 0;
	while (cont < 4)
	{
		vet_lin[cont] = numeracao_linha(lin_col[cont + 8], lin_col[cont + 12]);
		cont++;
	}
	iterador_matriz(&vet_lin[0]);
	// 41 | 32 | 22 | 12
	// 4 3 2 1 | 1 2 2 2 | 4 3 2 1 | 1 2 2 2
	
}
/*-------------------------------------------------------------------------------------------*/

int numeracao_linha(int a, int b)
{
	if (a == 4 && b == 1)  // a rowleft, b rowright
		return(41);
	else if (a == 3 && b == 2)
		return(32);
	else if (a == 3 && b == 1)
		return(31);
	else if (a == 2 && b == 3)
		return(23);
	else if (a == 2 && b == 2)
		return(22);
	else if (a == 2 && b == 1)
		return(21);
	else if (a == 1 && b == 4)
		return(14);
	else if (a == 1 && b == 3)
		return(13);
	else
		return(12);
}

/*-------------------------------------------------------------------------------------------*/

void	iterador_matriz(int *vet_lin)
{
	int l1 = 0;
	int l2 = 0;
	int l3 = 0;
	int l4 = 0;
	int matriz[4][4];

	while (l1 < len(vet_lin[0]))
	{
		options(matriz[0], vet_lin[0],l1);  // linha = 0, 41, l1 = 0
		while (l2 < len(vet_lin[1]))
		{
			options(matriz[1], vet_lin[1],l2);
			while (l3 < len(vet_lin[2]))
			{
				options(matriz[2], vet_lin[2],l3);
				while (l4 < len(vet_lin[3]))
				{
					options(matriz[3], vet_lin[3],l4);
					if (verificar_matriz(matriz))
					{
						if (verificar_matriz2(matriz,&vet_lin[0]))
						{
							print_matriz(matriz);
							break ;
						}
					}
					l4++;
				}
				l3++;
				l4 = 0;
			}
			l2++;
			l3 = 0;
		}
		l1++;
		l2 = 0;
	}
	erro();
}

void    erro(void)
{
    write(1, "Error", 5);
	write(1, "\n", 1);
}

void	print_matriz(int matriz[4][4])
{
	int i;
	int j;
	char c;

	i = 0;
	while  (i < 4)
	{
		j = 0;
		while ( j < 4)
		{
			c = matriz[i][j] + '0';
			write(1 , &c, 1);
			write(1, " ", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
int		verificar_matriz2(int m[4][4], int *vet_lin)
{
	int i;
	int j;
	int caixa;
	int cont;
	
	i = 0;
	j = 0;
	cont = 1;
	while (j < 4)
	{
		cont = 1;
		caixa = m[i][j];
		while (i < 3)
		{	
			if (caixa < m[i + 1][j])
			{
				caixa = m[i + 1][j];
				cont++;
			}
			i++;
		}
		i = 0;
 		if (vet_lin[j]/10 != cont)
			return(0); 
		j++;
	}
	i = 3;
	j = 0;
	cont = 1;
	while (j < 4)
	{
		cont = 1;
		caixa = m[i][j];
		while (i > 0)
		{	
			if (caixa < m[i - 1][j])
			{
				caixa = m[i - 1][j];
				cont++;
			}
			i--;
		}
		i = 3;
		if (vet_lin[j]%10 != cont)
			return(0); 
		j++;
	}
	return (1);
}

int		verificar_matriz(int m[4][4])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if ( m[0][i] == m[1][i] || m[0][i] == m[2][i] || m[0][i] == m[3][i])
			return(0);
		if ( m[1][i] == m[2][i] || m[1][i] == m[3][i])
			return(0);
		if ( m[2][i] == m[3][i])
			return(0);
		i++;
	
	}
	return (1);
}

int		len(int comb)
{
	if (comb == 41 || comb == 14)  
		return (1);
	else if (comb == 21 || comb == 12)
		return (2);
	else if (comb == 32 || comb == 23 || comb == 31 || comb == 13)
		return (3);
	else 
		return (6);
}


void	options(int *mat, int comb, int n) // linha = 0, 41, l1 = 0 
{
	if (comb == 41)
		combinacao_4114(mat, n, 0); // matriz 00
	else if (comb == 14)
		combinacao_4114(mat, n, 1);	
	else if (comb == 32)
		combinacao_3223(mat, n, 0);
	else if (comb == 23)
		combinacao_3223(mat, n, 1);
	else if (comb == 31)
		combinacao_3113(mat, n, 0);
	else if (comb == 13)
		combinacao_3113(mat, n, 1);	
	else if (comb == 21)
		combinacao_2112(mat, n, 0);
	else if (comb == 12)
		combinacao_2112(mat, n, 1);
	else
		combinacao_2222(mat, n);	
}

void	combinacao_4114(int *mat, int n, int inv) // linha = 0, 41, l1 = 0 
{	
	int M_4114[1][4];
	int i;

	M_4114[0][0] = 1;
	M_4114[0][1] = 2;
	M_4114[0][2] = 3;
	M_4114[0][3] = 4;
	if (inv == 0)
	{
		i = 0;
		while (i < 4)
		{
			mat[i] = M_4114[n][i];
			i++;
		}
	}
	else
	{
		i = 3;
		while (i >= 0)
		{
			mat[3 - i] = M_4114[n][i];
			i--;
		}
	}
}

void	combinacao_3223(int *mat, int n, int inv)
{	
	int M_3223[3][4];
	int i;
	
	M_3223[0][0] = 1;
	M_3223[0][1] = 2;
	M_3223[0][2] = 4;
	M_3223[0][3] = 3;
	//
	M_3223[1][0] = 1;
	M_3223[1][1] = 3;
	M_3223[1][2] = 4;
	M_3223[1][3] = 2;
	//
	M_3223[2][0] = 2;
	M_3223[2][1] = 3;
	M_3223[2][2] = 4;
	M_3223[2][3] = 1;
	if (inv == 0)
	{
		i = 0;
		while (i < 4)
		{
			mat[i] = M_3223[n][i];
			i++;
		}
	}
	else
	{
		i = 3;
		while (i >= 0)
		{
			mat[3 - i] = M_3223[n][i];
			i--;
		}
	}
}

void	combinacao_3113(int *mat, int n, int inv)
{	
	int M_3113[3][4];
	int i;
	M_3113[0][0] = 1;
	M_3113[0][1] = 3;
	M_3113[0][2] = 2;
	M_3113[0][3] = 4;
	//
	M_3113[1][0] = 2;
	M_3113[1][1] = 1;
	M_3113[1][2] = 3;
	M_3113[1][3] = 4;
	//
	M_3113[2][0] = 2;
	M_3113[2][1] = 3;
	M_3113[2][2] = 1;
	M_3113[2][3] = 4;
	if (inv == 0)
	{
		i = 0;
		while (i < 4)
		{
			mat[i] = M_3113[n][i];
			i++;
		}
	}
	else
	{
		i = 3;
		while (i >= 0)
		{
			mat[3 - i] = M_3113[n][i];
			i--;
		}
	}
}

void	combinacao_2112(int *mat, int n, int inv)
{	
	int M_2112[2][4];
	int i;

	M_2112[0][0] = 3;
	M_2112[0][1] = 1;
	M_2112[0][2] = 2;
	M_2112[0][3] = 4;
	//
	M_2112[1][0] = 3;
	M_2112[1][1] = 2;
	M_2112[1][2] = 1;
	M_2112[1][3] = 4;
	if (inv == 0)
	{
		i = 0;
		while (i < 4)
		{
			mat[i] = M_2112[n][i];
			i++;
		}
	}
	else
	{
		i = 3;
		while (i >= 0)
		{
			mat[3 - i] = M_2112[n][i];
			i--;
		}
	}
}

void	combinacao_2222(int *mat, int n)
{	
	int M_2222[3][4];
	int i;

	M_2222[0][0] = 3;
	M_2222[0][1] = 2;
	M_2222[0][2] = 4;
	M_2222[0][3] = 1;

	M_2222[1][0] = 3;
	M_2222[1][1] = 4;
	M_2222[1][2] = 1;
	M_2222[1][3] = 2;

	M_2222[2][0] = 2;
	M_2222[2][1] = 4;
	M_2222[2][2] = 1;
	M_2222[2][3] = 3;

	if (n < 3)
	{
		i = 0;
		while (i < 4)
		{
			mat[i] = M_2222[n][i];
			i++;
		}
	}
	else
	{
		i = 3;
		while (i >= 0)
		{
			mat[3 - i] = M_2222[n - 3][i];
			i--;
		}
	}
}