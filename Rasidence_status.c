#include <stdio.h>
#include <stdlib.h>
#define Condition_BASIC 182
#define Condition_ADVANCE_ONE 60
#define Condition_ADVANCE_TWO 365 

int main (){
int Assessment_Year,Assessment_Year_end,Previous_Year,Four_PY;
int DAYS_LIVED_IN_PY,DAYS_LIVED_IN_4_PY;

printf("Write Assessment Year as xxyy-xxyz\n");
scanf("%d-%d", &Assessment_Year, &Assessment_Year_end);
if(Assessment_Year !=( Assessment_Year_end - 1 )) {
	printf("Error: Assessment Year added wrong... \n ...Exiting");
exit(0);
}


	printf("# Basic Condition\n\n") ;
	printf("ENTER: the days Individual Individual lived in India for the Previous Year( i.e. %d-%d) \n", Assessment_Year - 1,Assessment_Year_end - 1) ;
	scanf("%d", &DAYS_LIVED_IN_PY) ;

	if(DAYS_LIVED_IN_PY >= 182 ) {
		printf("\n\nThis Individual is a Resident of India") ;
	}
	else
	{
		printf("N:# Basic Condition = FALSE : Individual lived in India for less then %d days  for Previous Year \n", Condition_BASIC);
		if(DAYS_LIVED_IN_PY < 60 ) {
			printf("N: # Advance Condition = FALSE : Individual lived in India for less then %d days  for Previous Year \n", Condition_ADVANCE_ONE);
			printf("\n\nThis Individual is \"NOT a Resident of India\"") ; }
		else 
		{
			printf("# Advance Condition\n\n");
			printf("ENTER: The days Individual lived in India for 4 Previous Year(i.e. %d-%d)\n", Assessment_Year - 5,Assessment_Year_end - 1);
			scanf("%d", &DAYS_LIVED_IN_4_PY);
			if(DAYS_LIVED_IN_4_PY >= 365 && DAYS_LIVED_IN_PY >= 60){
				printf("\n\nThis Individual is a Resident of India") ;
			}
			else 
			{
			printf("N: # Advance Condition = FALSE : Individual lived in India for less then %d days  for 4 Previous Year \n", Condition_ADVANCE_TWO);
				printf("\n\nThis Individual is NOT a Resident of India") ;
			}
		}
		return 0;
	}
}
