#include <stdio.h>
#include <conio.h>

/*Developer by Neşet Aydın,
*This programme get a string(word) and change from vowel(a,e,i,o) to _(underline),
*But if you want change Turkish vowel character, 
*You can change the programme from c to c++.
*/

void changeUnderline(char word[]) {
	char vowel[] = { "aeiouAEIOU" };

	int counter1 = 0, counter2;
	while (word[counter1] != '\0')
	{

		for (counter2 = 0; counter2 < 5; counter2++) {

			if (word[counter1] == vowel[counter2])
			{
				printf("_"); //if you want,you can change (_) and you set another character. example; (/,*,+,- as) 
				counter1++;
				break;
			}
		}
		if (word[counter1] == !'a', 'e', 'i', 'o', 'A', 'E', 'I','O')
		{
			printf("%c", word[counter1]);
			counter1++;
		}
	}
}

int main() {
	int question = 0;
	char word[256]="null"; //you can change length of string
	while (1) {
		printf("\nPlease, enter a word;");
		scanf("%s",word);
		changeUnderline(word);
		
	again:
		printf("\nif you want go out of programme;\nYou can press 0, else 1;");
		scanf("%d",&question);
		if (0 == question) {
			goto out;
		}
		else if (1 !=question) {
			printf("You pressed the wrong key,Please again try...");
			goto again;
		}
	
	}
out:
	return 0;
}