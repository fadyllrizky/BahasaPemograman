/*Nama = Nero Cobartin
  Nim  = 20170801160 */
  
//nilai  : 15753
//pangkat: 6989
//modul	 : 17741

#include <stdio.h>

int main()
{

	long long int nilai, pangkat, hasil, modul, i;
	hasil = 1;
	printf("input nilai = ");
	scanf( "%d", &nilai);
	
	printf("input pangkat = ");
	scanf( "%d", &pangkat);
	
	printf("input modul = ");
	scanf( "%d", &modul);
	
	for ( i = 0; i < pangkat; i++)
	{
		hasil = hasil * nilai % modul;
	
	}
	
	printf("hasilnya adalah = %d\n", hasil);
	
}
