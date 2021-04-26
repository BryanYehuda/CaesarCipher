#include<stdio.h>

int main()
{
	char msg[100], chg;
	int i, key;

	printf("Masukkan Pesan untuk didekripsi: ");
	gets(msg);
	printf("Masukkan Key: ");
	scanf("%d", &key);

	for(i = 0; msg[i] != '\0'; ++i)
	{
		chg = msg[i];

		if(chg >= 'a' && chg <= 'z')
		{
			chg = chg - key;
			if(chg < 'a')
			{
				chg = chg + 'z' - 'a' + 1;
			}
			msg[i] = chg;
		}
		
		else if(chg >= 'A' && chg <= 'Z')
		{
			chg = chg - key;

			if(chg < 'A')
			{
				chg = chg + 'Z' - 'A' + 1;
			}
			msg[i] = chg;
		}
	}

	printf("Pesan setelah didekripsi: %s", msg);
	return 0;
}
