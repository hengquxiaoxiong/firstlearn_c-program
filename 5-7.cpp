#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Writer:Xiong Qingyun  Class:three class
int main() 
{
    int a,b,i,real_anwser,your_anwser,t,total=0,score;    //i�����ܵ���Ŀ����,t���ƻش�Ĵ��� 
    for(i=1;i<=10;i++,t=1)									//t=1��ʾÿ���������t����Ϊ1 
    {
    	srand((unsigned)time(NULL));
    	a=rand()%11;
    	b=rand()%11;
    	printf("%d+%d\n",a,b);
    	real_anwser=a+b;                 					//�õ���ȷ�� 
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
			printf("your anwser is wrong.\n����������:\n");
			}
		}
		switch(t)											//����ѭ���Ĵ�����t�Ĵ�С�ó�ÿ����ķ��� 
		{
			case 1:score=10;break;
			case 2:score=5;break;
			case 3:score=2;break;
			default:score=0;
		}
		total=score+total;									//��ÿ�������ѭ����� 
	}
	printf("your score is %d",total);
    return 0;
}

