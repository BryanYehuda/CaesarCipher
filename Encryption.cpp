#include<stdio.h>

int main()
{
	char plain[100], chg;
	int i, key;

	printf("Masukkan Pesan untuk dienkripsi: ");
	gets(plain);
	printf("Masukkan Key: ");
	scanf("%d", &key);

	for(i = 0; plain[i] != '\0'; ++i)
	{
		chg = plain[i];
		if(chg >= 'a' && chg <= 'z')
		{
			chg = chg + key;
			if(chg > 'z')
			{
				chg = chg - 'z' + 'a' - 1;
			}
			plain[i] = chg;
		}
		
		else if(chg >= 'A' && chg <= 'Z')
		{
			chg = chg + key;
			if(chg > 'Z')
			{
				chg = chg - 'Z' + 'A' - 1;
			}
			plain[i] = chg;
		}
	}

	printf("Pesan setelah didekripsi: %s", plain);
	return 0;
}
