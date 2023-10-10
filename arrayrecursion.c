/*
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

/* 
Exércio recursão com array
Dado um array de inteiros e o seu número de elementos,
inverta a posição dos seus elementos.
Caso base? Tamanho do array menor ou igual a 1
*/

#include <stdio.h>

void inverte(int v[], int esq, int dir){
  int t;
  if(esq >= dir) return;
  t = v[esq];
  v[esq] = v[dir];
  v[dir] = t;
  inverte(v, esq+1, dir - 1);
}

int main(int argc, char **argv)
{
	int array[] = {1,2,3,4,5};
	int tamanho = sizeof(array) / sizeof(array[0]);
	printf("Array original: ");
	for(int i = 0; i < tamanho; i++){
		printf("%d", array[i]);
	}
	inverte(array, 0, tamanho - 1);
	printf("\nArray invertido: ");
	for(int i = 0; i < tamanho; i++){
		printf("%d", array[i]);
	}
	return 0;
}

