#include<stdio.h>
#include<Windows.h>
int main()
{
	int i;
	char name[100];
	printf("输入你要轰炸的对象名称：");
	scanf("%s",&name,40);
	printf("输入你要轰炸的次数：");
	scanf("%d",&i);
	HWND H=FindWindow(0,name);
	while(i-->0)
	{
		SendMessage(H,WM_PASTE,0,0);
		SendMessage(H,WM_KEYDOWN,VK_RETURN,0);
	}
	
		 
}
