#include<stdio.h>
int main(void){
	int valinta=1, luku1, luku2, summa, erotus, tulo;
	while(valinta!=0){
		 
		printf("\nNelilaskin\n");
		printf("Toiminnot:\n");
		printf("1)Yhteenlasku\n");
		printf("2)Vähennyslasku\n");
		printf("3)Kertolasku\n");
		printf("4)Jakolasku\n");
		printf("0)Lopeta\n");
		printf("Valitse toiminto 0-4: ");
		scanf("%d",&valinta);
		switch (valinta){
		case 1:
			printf("Anna kokonaisluku: ");
			scanf("%d", &luku1);
			printf("Anna toinen kokonaisluku: ");
			scanf("%d", &luku2);
			summa = luku1 + luku2;
			printf("Summaksi tuli %d\n", summa);
			break;
		case 2:
			printf("Anna kokonaisluku: ");
			scanf("%d", &luku1);
			printf("Anna toinen kokonaisluku: ");
			scanf("%d", &luku2);
			erotus = luku1 - luku2;
			printf("Erotukseksi tuli %d\n", erotus);
			break;
		case 3:
			printf("Anna kokonaisluku: ");
			scanf("%d", &luku1);
			printf("Anna toinen kokonaisluku: ");
			scanf("%d", &luku2);
			tulo = luku1 * luku2;
			printf("Tuloksi tuli %d\n", tulo);
			break;
		case 0:
			printf("Kiitos ohjelman käytöstä!\n");
			return 0;
			break;
		}
	}
	return 0;
}

		
