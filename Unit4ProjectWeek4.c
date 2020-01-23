//single line comment
/*Mitchell Wilson and Kendall Gurtowski
8/14/19
this is a template
this is a block commment*/


#include <stdio.h> // standard input output header file
#include <stdlib.h> //standard library 
#include <windows.h> //library for Sleep and system("cls")

int main()
{
		/*TITLE SCREEN*/
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("     ++++++++++++++++\n");
	printf ("     ++++++++++++++++\n");
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("           +++\n");
	
	Sleep(500);		//pauses program for .5 seconds
	system("cls");	//clears screen
	
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("                               ----------------\n");
	printf ("                               ----------------\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	
	Sleep(500);
	system("cls");
	
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("                 ///\n");
	printf ("               ///\n");
	printf ("             ///\n");
	printf ("           ///\n");
	printf ("         ///\n");
	printf ("       ///\n");
	printf ("     ///\n");
	
	Sleep(500);
	system("cls");
	
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("                               ***          ***\n");
	printf ("                                 ***      ***\n");
	printf ("                                   ***  ***\n");
	printf ("                                     ****\n");
	printf ("                                    ******\n");
	printf ("                                  ***    ***\n");
	printf ("                               ***          ***\n");
	
	Sleep(500);
	system("cls");
	
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("     ++++++++++++++++          ----------------\n");
	printf ("     ++++++++++++++++          ----------------\n");
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("\n");
	printf ("                 ///           ***          ***\n");
	printf ("               ///               ***      ***\n");
	printf ("             ///                   ***  ***\n");
	printf ("           ///                       ****\n");
	printf ("         ///                        ******\n");
	printf ("       ///                        ***    ***\n");
	printf ("     ///                       ***          ***\n");
	
	Sleep(500);
	system("cls");
	
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("     ++++++++++++++++          ----------------\n");
	printf ("     ++++++++++++++++          ----------------\n");
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("           +++\n");
	printf ("\n");
	printf ("\n");
	printf ("       Welcome to the Math Proficiency Quiz!\n");
	printf ("\n");
	printf ("\n");
	printf ("                 ///           ***          ***\n");
	printf ("               ///               ***      ***\n");
	printf ("             ///                   ***  ***\n");
	printf ("           ///                       ****\n");
	printf ("         ///                        ******\n");
	printf ("       ///                        ***    ***\n");
	printf ("     ///                       ***          ***\n");
	
	Sleep(2000);
	system("cls");
		/*END TITLE SCREEN*/
	
	//Declarations
	int userSelection;
	float userNumOne;
	float userNumTwo;
	float numSolution;
	float userAnswer;
	float numCounter = 0;
	float numOne;
	float numTwo;
	char userDifficulty;
	int totalAttempted = 0;
	int totalCorrect = 0;
	int divideOne;
	int divideTwo;
	int divideAnswer;
	int divideRemainder;
	int divideRemainderAnswer;
	
	//Main menu display
	printf("Math Practice Program Main Menu\n\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");	
	printf("Select an option: ");
	scanf("%d", &userSelection);
	if (userSelection != 5){
	printf("Select difficulty level e-easy m-medium h-hard");
	scanf("%s", &userDifficulty);
}
	system("cls");
	
	//Loop used to check the number entered by user
	while (userSelection != 5){
          //Switch used to go to type of problem user wants. 
		switch (userSelection) {
               //Case for Addition
			case 1:
                 //gets 2 numbers from the user
				if (userDifficulty == 'e'){
				numOne = rand()%10+1;
				numTwo = rand()%10+1;
				numSolution = numOne + numTwo;
				printf("%.2f + %.2f = ", numOne, numTwo);
				scanf("%f", &userAnswer);
					
					//if statement used to tell the user if their answer if correct
				if (userAnswer == numSolution){
					printf("You got the answer correct\n");
						totalCorrect = totalCorrect + 1;
						printf("Total answers correct so far: %d\n", totalCorrect);
						totalAttempted = totalAttempted + 1;
					}
					//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
				else{
				for (numCounter = 1; numCounter <= 2; ++numCounter){
					printf("That is the wrong answer, please try again.\n");
					scanf("%f", &userAnswer);
					
					if (userAnswer == numSolution){
						numCounter = 3;
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
					}
					if (numCounter == 2) {	
					printf("You have exceeded your attempted tries\n");
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
				}
					}
				
				}
				}
			else 
				if(userDifficulty == 'm'){
					numOne = rand()%100+1;
					numTwo = rand()%100+1;
					numSolution = numOne + numTwo;
					printf("%.2f + %.2f = ", numOne, numTwo);
					scanf("%f", &userAnswer);
					
						//if statement used to tell the user if their answer if correct
					if (userAnswer == numSolution){
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
					else{
						for (numCounter = 1; numCounter <= 2; ++numCounter){
						printf("That is the wrong answer, please try again.\n");
						scanf("%f", &userAnswer);
					
						if (userAnswer == numSolution){
							numCounter = 3;
							printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						if (numCounter == 2) {	
						printf("You have exceeded your attempted tries\n");
						printf(" answer was %d\n", numSolution);
						totalAttempted = totalAttempted + 1;
						printf("Total answers correct so far: %d\n", totalCorrect);
					}
						}
					}

				}
			else
				if (userDifficulty == 'h'){
					numOne = rand()%1000+1;
					numTwo = rand()%1000+1;
					numSolution = numOne + numTwo;
					printf("%.2f + %.2f = ", numOne, numTwo);
					scanf("%f", &userAnswer);
					
						//if statement used to tell the user if their answer if correct
					if (userAnswer == numSolution){
						printf("You got the answer correct\n");
						totalCorrect = totalCorrect + 1;
						totalAttempted = totalAttempted + 1;
						printf("Total answers correct so far: %d\n", totalCorrect);
						}
						//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
					else{
					for (numCounter = 1; numCounter <= 2; ++numCounter){
						printf("That is the wrong answer, please try again.\n");
						scanf("%f", &userAnswer);
					
						if (userAnswer == numSolution){
							numCounter = 3;
							printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						if (numCounter == 2) {	
						printf("You have exceeded your attempted tries\n");
						 totalAttempted = totalAttempted + 1;
						 printf("Total answers correct so far: %d\n", totalCorrect);
					}
						}
				
					}
				
				}
								//break statements used to break out of switch
				break;
			//Case for Subtraction 
			case 2:
				if (userDifficulty == 'e'){
				numOne = rand()%10+1;
				numTwo = rand()%10+1;
				numSolution = numOne - numTwo;
				printf("%.2f - %.2f = ", numOne, numTwo);
				scanf("%f", &userAnswer);
					
					//if statement used to tell the user if their answer if correct
				if (userAnswer == numSolution){
					printf("You got the answer correct\n");
						totalCorrect = totalCorrect + 1;
						totalAttempted = totalAttempted + 1;
						printf("Total answers correct so far: %d\n", totalCorrect);
					}
					//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
				else{
				for (numCounter = 1; numCounter <= 2; ++numCounter){
					printf("That is the wrong answer, please try again.\n");
					scanf("%f", &userAnswer);
					
					if (userAnswer == numSolution){
						numCounter = 3;
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
					}
					if (numCounter == 2) {	
					printf("You have exceeded your attempted tries\n");
					 totalAttempted = totalAttempted + 1;
					 printf("Total answers correct so far: %d\n", totalCorrect);
				}
					}
				
				}
				}
			else 
				if(userDifficulty == 'm'){
					numOne = rand()%100+1;
					numTwo = rand()%100+1;
					numSolution = numOne - numTwo;
					printf("%.2f - %.2f = ", numOne, numTwo);
					scanf("%f", &userAnswer);
					
						//if statement used to tell the user if their answer if correct
					if (userAnswer == numSolution){
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
					else{
						for (numCounter = 1; numCounter <= 2; ++numCounter){
						printf("That is the wrong answer, please try again.\n");
						scanf("%f", &userAnswer);
					
						if (userAnswer == numSolution){
							numCounter = 3;
							printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						if (numCounter == 2) {	
						printf("You have exceeded your attempted tries\n");
						 totalAttempted = totalAttempted + 1;
						 printf("Total answers correct so far: %d\n", totalCorrect);
					}
						}
					}

				}
			else
				if (userDifficulty == 'h'){
					numOne = rand()%1000+1;
					numTwo = rand()%1000+1;
					numSolution = numOne - numTwo;
					printf("%.2f - %.2f = ", numOne, numTwo);
					scanf("%f", &userAnswer);
					
						//if statement used to tell the user if their answer if correct
					if (userAnswer == numSolution){
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
					else{
					for (numCounter = 1; numCounter <= 2; ++numCounter){
						printf("That is the wrong answer, please try again.\n");
						scanf("%f", &userAnswer);
					
						if (userAnswer == numSolution){
							numCounter = 3;
							printf("You got the answer correct\n");
								totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						if (numCounter == 2) {	
						printf("You have exceeded your attempted tries\n");
						 totalAttempted = totalAttempted + 1;
						 printf("Total answers correct so far: %d\n", totalCorrect);
					}
						}
				
					}
				
				}
								//break statements used to break out of switch
				break;
				
			//Case for Multiplication
			case 3:
		        if (userDifficulty == 'e'){
				numOne = rand()%10+1;
				numTwo = rand()%10+1;
				numSolution = numOne * numTwo;
				printf("%.2f * %.2f = ", numOne, numTwo);
				scanf("%f", &userAnswer);
					
					//if statement used to tell the user if their answer if correct
				if (userAnswer == numSolution){
					printf("You got the answer correct\n");
						totalCorrect = totalCorrect + 1;
						totalAttempted = totalAttempted + 1;
						printf("Total answers correct so far: %d\n", totalCorrect);
					}
					//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
				else{
				for (numCounter = 1; numCounter <= 2; ++numCounter){
					printf("That is the wrong answer, please try again.\n");
					scanf("%f", &userAnswer);
					
					if (userAnswer == numSolution){
						numCounter = 3;
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
					}
					if (numCounter == 2) {	
					printf("You have exceeded your attempted tries\n");
					 totalAttempted = totalAttempted + 1; 
					 printf("Total answers correct so far: %d\n", totalCorrect);
				}
					}
				
				}
				}
			else 
				if(userDifficulty == 'm'){
					numOne = rand()%100+1;
					numTwo = rand()%100+1;
					numSolution = numOne * numTwo;
					printf("%.2f * %.2f = ", numOne, numTwo);
					scanf("%f", &userAnswer);
					
						//if statement used to tell the user if their answer if correct
					if (userAnswer == numSolution){
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
					else{
						for (numCounter = 1; numCounter <= 2; ++numCounter){
						printf("That is the wrong answer, please try again.\n");
						scanf("%f", &userAnswer);
					
						if (userAnswer == numSolution){
							numCounter = 3;
							printf("You got the answer correct\n");
								totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						if (numCounter == 2) {	
						printf("You have exceeded your attempted tries\n");
						 totalAttempted = totalAttempted + 1; 
						 printf("Total answers correct so far: %d\n", totalCorrect);
					}
						}
					}

				}
			else
				if (userDifficulty == 'h'){
					numOne = rand()%1000+1;
					numTwo = rand()%1000+1;
					numSolution = numOne * numTwo;
					printf("%.2f * %.2f = ", numOne, numTwo);
					scanf("%f", &userAnswer);
					
						//if statement used to tell the user if their answer if correct
					if (userAnswer == numSolution){
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 
					else{
					for (numCounter = 1; numCounter <= 2; ++numCounter){
						printf("That is the wrong answer, please try again.\n");
						scanf("%f", &userAnswer);
					
						if (userAnswer == numSolution){
							numCounter = 3;
							printf("You got the answer correct\n");
								totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						}
						if (numCounter == 2) {	
						printf("You have exceeded your attempted tries\n");
						 totalAttempted = totalAttempted + 1; 
						 printf("Total answers correct so far: %d\n", totalCorrect);
					}
						}
				
					}
				
				}
								//break statements used to break out of switch
				break;
			//Case for Division
			case 4:	
			
			if (userDifficulty == 'e'){	 
				divideOne = rand()%10+1;
				divideTwo = rand()%10+1;
				numSolution = divideOne / divideTwo;
				printf("%d / %d = ", divideOne, divideTwo);
				scanf("%d", &divideAnswer);
				
				divideRemainder = divideOne % divideTwo;
					
					//if statement used to tell the user if their answer if correct
				if (divideAnswer == numSolution){
					printf("You got the answer correct\n");
					totalCorrect = totalCorrect + 1;
					totalAttempted = totalAttempted + 1;
					printf("Total answers correct so far: %d\n", totalCorrect);
					printf("What is the remaining amount?\n");
					scanf("%d", &divideRemainderAnswer);
					if (divideRemainderAnswer == divideRemainder){
			  		     printf("That is correct\n");  
				    }	 
				    //Else statement used to get 
					else{
						 for (numCounter = 1; numCounter <= 2; ++numCounter){
						 printf("That is the wrong answer, please try again.\n");
						 scanf("%d", &divideRemainderAnswer);
					
						 if (divideRemainderAnswer == divideRemainder){
						 	numCounter = 3;
							printf("You got the answer correct\n");
							
				    	 }
						 if (numCounter == 2) {
		     			    printf("You have exceeded your attempted tries\n");
	    		         }
						 }
				
						 }
						 }
					//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 	
				else{
				for (numCounter = 1; numCounter <= 2; ++numCounter){
					printf("That is the wrong answer, please try again.\n");
					scanf("%d", &divideAnswer);
					
					if (divideAnswer == numSolution){
						numCounter = 3;
						printf("You got the answer correct\n");
						totalCorrect = totalCorrect + 1;
						totalAttempted = totalAttempted + 1;
						printf("Total answers correct so far: %d\n", totalCorrect);
						printf("What is the remaining amount?\n");
						scanf("%d", &divideRemainderAnswer);
						if (divideRemainderAnswer == divideRemainder){
			  		        printf("That is correct\n");
						}
						else{
						 for (numCounter = 1; numCounter <= 2; ++numCounter){
						 printf("That is the wrong answer, please try again.\n");
						 scanf("%d", &divideRemainderAnswer);
					
						 if (divideRemainderAnswer == divideRemainder){
						 	numCounter = 3;
							printf("You got the answer correct\n");
				    	 }
						 if (numCounter == 2) {	
		     			    printf("You have exceeded your attempted tries\n");
	    		         }
						 }
				
						 }
						
						
					}
					if (numCounter == 2) {	
					printf("You have exceeded your attempted tries\n");
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
					system("pause");
				    }
					}
				
					}
					}
				else
					if (userDifficulty == 'm'){	 
				divideOne = rand()%100+1;
				divideTwo = rand()%100+1;
				numSolution = divideOne / divideTwo;
				printf("%d / %d = ", divideOne, divideTwo);
				scanf("%d", &divideAnswer);
				
				divideRemainder = divideOne % divideTwo;
					
					//if statement used to tell the user if their answer if correct
				if (divideAnswer == numSolution){
					printf("You got the answer correct\n");
					totalCorrect = totalCorrect + 1;
					totalAttempted = totalAttempted + 1;
					printf("Total answers correct so far: %d\n", totalCorrect);
					printf("What is the remaining amount?\n");
					scanf("%d", &divideRemainderAnswer);
					if (divideRemainderAnswer == divideRemainder){
			  		     printf("That is correct\n");  
				    }	 
				    //Else statement used to get 
					else{
						 for (numCounter = 1; numCounter <= 2; ++numCounter){
						 printf("That is the wrong answer, please try again.\n");
						 scanf("%d", &divideRemainderAnswer);
					
						 if (divideRemainderAnswer == divideRemainder){
						 	numCounter = 3;
							printf("You got the answer correct\n");
				    	 }
						 if (numCounter == 2) {
		     			    printf("You have exceeded your attempted tries\n");
	    		         }
						 }
				
						 }
						 }
					//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 	
				else{
				for (numCounter = 1; numCounter <= 2; ++numCounter){
					printf("That is the wrong answer, please try again.\n");
					scanf("%d", &divideAnswer);
					
					if (divideAnswer == numSolution){
						numCounter = 3;
						printf("You got the answer correct\n");
							totalCorrect = totalCorrect + 1;
							totalAttempted = totalAttempted + 1;
							printf("Total answers correct so far: %d\n", totalCorrect);
						printf("What is the remaining amount?\n");
						scanf("%d", &divideRemainderAnswer);
						if (divideRemainderAnswer == divideRemainder){
			  		        printf("That is correct\n");
						}
						else{
						 for (numCounter = 1; numCounter <= 2; ++numCounter){
						 printf("That is the wrong answer, please try again.\n");
						 scanf("%d", &divideRemainderAnswer);
					
						 if (divideRemainderAnswer == divideRemainder){
						 	numCounter = 3;
							printf("You got the answer correct\n");
				    	 }
						 if (numCounter == 2) {	
		     			    printf("You have exceeded your attempted tries\n");
		     			    printf("Total answers correct so far: %d\n", totalCorrect);
		     			    
	    		         }
						 }
				
						 }
						
						
					}
					if (numCounter == 2) {	
					printf("You have exceeded your attempted tries\n");
					system("pause");
				    }
					}
				
					}
					}
					if (userDifficulty == 'h'){	 
				divideOne = rand()%1000+1;
				divideTwo = rand()%1000+1;
				numSolution = divideOne / divideTwo;
				printf("%d / %d = ", divideOne, divideTwo);
				scanf("%d", &divideAnswer);
				
				divideRemainder = divideOne % divideTwo;
					
					//if statement used to tell the user if their answer if correct
				if (divideAnswer == numSolution){
					printf("You got the answer correct\n");
					totalCorrect = totalCorrect + 1;
					totalAttempted = totalAttempted + 1;
					printf("Total answers correct so far: %d\n", totalCorrect);
					printf("What is the remaining amount?\n");
					scanf("%d", &divideRemainderAnswer);
					if (divideRemainderAnswer == divideRemainder){
			  		     printf("That is correct\n");  
				    }	 
				    //Else statement used to get 
					else{
						 for (numCounter = 1; numCounter <= 2; ++numCounter){
						 printf("That is the wrong answer, please try again.\n");
						 scanf("%d", &divideRemainderAnswer);
					
						 if (divideRemainderAnswer == divideRemainder){
						 	numCounter = 3;
							printf("You got the answer correct\n");
				    	 }
						 if (numCounter == 2) {	
		     			    printf("You have exceeded your attempted tries\n");
	    		         }
						 }
				
						 }
						 }
					//else statement gives 3 chances to user. If chances are exceeded, it goes back to menu. 	
				else{
				for (numCounter = 1; numCounter <= 2; ++numCounter){
					printf("That is the wrong answer, please try again.\n");
					scanf("%d", &divideAnswer);
					
					if (divideAnswer == numSolution){
						numCounter = 3;
						printf("You got the answer correct\n");
						totalCorrect = totalCorrect + 1;
						totalAttempted = totalAttempted + 1;
						printf("Total answers correct so far: %d\n", totalCorrect);
						printf("What is the remaining amount?\n");
						scanf("%d", &divideRemainderAnswer);
						if (divideRemainderAnswer == divideRemainder){
			  		        printf("That is correct\n");
						}
						else{
						 for (numCounter = 1; numCounter <= 2; ++numCounter){
						 printf("That is the wrong answer, please try again.\n");
						 scanf("%d", &divideRemainderAnswer);
					
						 if (divideRemainderAnswer == divideRemainder){
						 	numCounter = 3;
							printf("You got the answer correct\n");
				    	 }
						 if (numCounter == 2) {	
		     			    printf("You have exceeded your attempted tries\n");
	    		         }
						 }
				
						 }
						
						
					}
					if (numCounter == 2) {	
					printf("You have exceeded your attempted tries\n");
						totalAttempted = totalAttempted + 1;
						printf("Total answers correct so far: %d\n", totalCorrect);
					system("pause");
				    }
					}
				
					}
					}
				break;
			
			//Case used to exit the Math Practice Program
			case 5:
				break;
			//Default used if user enters an invalid number
			default:
				printf("You did not enter a valid number\n");	
					
	}
     //Pulls Menu up again after Switch and runs loop again
     printf("Math Practice Program Main Menu\n\n");
     printf("1. Addition\n");
     printf("2. Subtraction\n");
     printf("3. Multiplication\n");
     printf("4. Division\n");
     printf("5. Exit\n");	
     printf("Select an option: ");
     scanf("%d", &userSelection);
    if (userSelection != 5){
	printf("Select difficulty level e-easy m-medium h-hard");
	scanf("%s", &userDifficulty);
}
     system("cls");
}
//Have a good day :)
printf("You got %d answers correct out of %d questions\n", totalCorrect, totalAttempted);
printf("You have decided to exit the program. Have a Great Day :)\n");
	
	
	system("pause"); //hold the console window open
	return 0; //program was successful

}//stop
