/*
 * 	THIS PROGRAM HERE WILL STORE :-
 *
 *	YOUR NAME
 *	     NUMBER
 *	     AGE
 *	     Email
 *	     PASSWORD IN struct <me>
 *
 *	And show you your details after conforming 
 *	your Email & password
 *
 */









#include <stdio.h>
#include <string.h>

	char name [50];
	char num [20];
	int age ;
	char email [50];
// have yet to be implemented 
	char pass [10];

int main(){
	
	printf("Pls enter your name: "); // Gets name
	fgets(name, 50, stdin);
//	fgetc(stdin);	//new added

ninput:	
	printf("\nPls enter your Number: "); // Gets num
	fgets(num, 11, stdin);
	//fgetc(stdin);	//new added

	int tnum = strlen(num);
		if (tnum == 10)	// use if
		{
		}
		else
		{
			printf("\nThis isn't a valid number.\n"); 
			goto ninput;
		}


	printf("Enter Your Age : ");
	scanf("%d", &age);
	//fgetc(stdin); //new added pre fgetc didn't work
	
	printf("Enter Your E-mail :\n");
	fgets(email, 50, stdin);
	
	//delete this later "for debugging"
	printf("\ndebug info:"
		"\n%s%d\n"
		"tnum = %d\n"
		"num = %lu\n"
		"num = %s\n"
		"email : %s\n"
	, name, age, tnum , strlen(num), num, email);	

	return 0;

}
