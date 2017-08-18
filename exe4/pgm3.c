#include <stdio.h>
#include <assert.h>

int grace_marks(int score)
{

	int grace_score;
	if(score==49)
		grace_score=score+1;
	else if(score>=45 && score<=48)
		grace_score=score+2;
	else if(score>=40 && score<=44)
		grace_score=score+3;
	else if(score>=35 && score<=39)
		grace_score=score+4;
	else if(score>=30 && score<=34)
		grace_score=score+5;
	else if(score>=25 && score<=29)
		grace_score=score+6;
	else if(score<25)
		grace_score=25;
	return grace_score;
}

int main(){

	int score,grace_intscore;
	printf("Enter student marks: ");
	scanf("%d",&score);
	printf("grace internal score is: %d\n",grace_marks(score));


	assert(grace_marks(20) == 25);
	assert(grace_marks(26) == 32);
	assert(grace_marks(32) == 37);
	assert(grace_marks(36) == 40);
	assert(grace_marks(41) == 44);
	assert(grace_marks(49) == 50);

	return 0;
}

