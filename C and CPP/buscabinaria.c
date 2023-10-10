/*
 * buscabinaria.c
 * 
 * Copyright 2023 debian <debian@debian-pc>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int buscabinaria(int arr[], int tamanho, int alvo){
	int inicio = 0;
	int fim = tamanho - 1;
	
	while(inicio <= fim){
		int meio = inicio + (fim - inicio) / 2;
		if(arr[meio] == alvo)
			return meio;
		if(arr[meio] > alvo)
			fim = meio -1;
		else 
		   inicio = meio + 1;
	}
	return -1;
}

int main()
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tamanho = sizeof(arr) / sizeof(arr[0]);
	int alvo = 6;
	int resultado = buscabinaria(arr, tamanho, alvo);
	if(resultado != -1){
	  printf("Elemento encontrado na posição %d", resultado);
	}
	else{
	  printf("Elemento não encontrado");
	}
	return 0;
}

