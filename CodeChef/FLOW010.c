// Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

// Class ID	Ship Class
// B or b	BattleShip
// C or c	Cruiser
// D or d	Destroyer
// F or f	Frigate

#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	    char alp;
	    scanf("\n%c",&alp);
	    if(alp=='b'|| alp=='B'){
	        printf("BattleShip\n");
	    }
	    else if(alp=='c' || alp=='C'){
	        printf("Cruiser\n");
	    }
	    else if(alp=='d' || alp=='D'){
	        printf("Destroyer\n");
	    }
	    else if(alp=='f' || alp=='F'){
	        printf("Frigate\n");
	    }
	}
	return 0;
}

