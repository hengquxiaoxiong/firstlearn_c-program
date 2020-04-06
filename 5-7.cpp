#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Writer:Xiong Qingyun  Class:three class
int main() 
{
    int a,b,i,real_anwser,your_anwser,t,total=0,score;    //i控制总的题目数量,t控制回答的次数 
    for(i=1;i<=10;i++,t=1)									//t=1表示每道题结束后将t重置为1 
    {
    	srand((unsigned)time(NULL));
    	a=rand()%11;
    	b=rand()%11;
    	printf("%d+%d\n",a,b);
    	real_anwser=a+b;                 					//得到正确答案 
    	while(t<=3)
		{
			scanf("%d",&your_anwser);
			if(real_anwser==your_anwser) 
    		{
			printf("your anwser is right.\n");
			break;											 
			}
			else
			{
			t++;
			printf("your anwser is wrong.\n请重新输入:\n");
			}
		}
		switch(t)											//根据循环的次数，t的大小得出每道题的分数 
		{
			case 1:score=10;break;
			case 2:score=5;break;
			case 3:score=2;break;
			default:score=0;
		}
		total=score+total;									//将每道题分数循环相加 
	}
	printf("your score is %d",total);
    return 0;
}

