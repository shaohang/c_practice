/* This progam is started on the page 7
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char card_name[3];
	int count =0;
	do {
		puts("Enter the card name: ");
		scanf("%2s", card_name);
		
		int val = 0;
		switch(card_name[0]) {
		case 'K':
		case 'Q':
		case 'J':
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		case 'x':
			continue;
		default:
			val = atoi(card_name);
			if (!((val>0) && (val<11))) {
				puts("Not valid input.\n");
				continue;
			}
		}
		
		if ((val>2)&&(val<7)){
			count++;
		} else if (val==10){
			count--;
		}
		printf("Current count: %i \n",count);

		/*
		int val = 0;
		if (card_name[0] == 'K') {
			val = 10;
		} else if ( card_name[0] == 'Q') {
			val = 10;
		} else if ( card_name[0] == 'J' ) {
			val = 10;
		} else if ( card_name[0] == 'A' ) {
			val = 11;
		} else {
			val = atoi(card_name);
		}
		printf("The car value is : %i \n", val);
		
			/check card value: page 20 /
		if ((val>2)&&(val<7)){
			puts("Count has gone up");
		} else if (val==10){
			puts("Count has gone down");
		}
		*/
	} while ( card_name[0]!='x');

	return 0;
}
