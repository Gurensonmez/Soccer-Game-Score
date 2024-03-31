#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
  int HomeTeamGoals,AwayTeamGoals;
  
  printf("Please enter the Home Team Goals\n");
  scanf("%d",&HomeTeamGoals);
  printf("Please enter the Away Team Goals\n");
  scanf("%d",&AwayTeamGoals);	
	
  if ( HomeTeamGoals > AwayTeamGoals ) {
  printf("home team earned 3 points\n");
}
   else if (HomeTeamGoals == AwayTeamGoals){ 
 printf("home team earned 1 points\n");
}
   else { 
  printf("home team earned 0 points\n");
}
 
  return 0;
}