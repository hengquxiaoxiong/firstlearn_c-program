#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int iNumber1=0,iNumber2=0;
    int iRightNum=0;
    int Num=10;
    int t=1;
    
    srand((int)time(0));
    for (int n=0; n<Num; n++) {
        int iResult=-1;
        iNumber1=rand()%10+1;
        iNumber2=rand()%10+1;
        printf("Question NO.%d\n",(n+1));
        printf("%d+%d=",iNumber1,iNumber2);
        scanf("%d",&iResult);
        while(t<=3)
        {
            if (iResult!=iNumber1+iNumber2) {
            printf("Wrong!\n"); 
            t++;
        }
        else
		{
            printf("Right!\n");
            iRightNum++;
            break;
        }
		}
      
    }
    printf("You have done %d questions, %d Right %d Wrong.\n",Num,iRightNum,(Num-iRightNum));
    
}
