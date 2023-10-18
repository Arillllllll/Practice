#include <stdio.h>
/*int main()
{
	int a,m;
	scanf("%d",&a);
	switch ((int)(a/10))
	{
	case 0:
	case 1:
	case 2:
		m=1;break;
	case 3:
		m=2;break;
	case 4:
		m=3;break;
	case 5:
		m=4;break;
	default:m=5;
	
	}
	printf("%d",m);
	return 0;
}*/

/*int main()
{
	int num=0;
	scanf("%d",&num);
	if(num%2==1)
		printf("奇数");
	else printf("偶数");
	return 0;
}*/

/*int main()
{
	int y0,m0,d0,y1,m1,d1,age;
	printf("请输入你的生日");
	scanf("%d%d%d",&y0,&m0,&d0);
	printf("请输入当前的日期");
	scanf("%d%d%d",&y1,&m1,&d1);
	age=y1-y0;
	if(m1>=m0&&d1>=d0)
		printf("%d",age);
	else printf("%d",age-1);
	return 0;
}*/

/*int main()
{
	int a,b,c,max;
	printf("请输入a b c的值");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		if(a>c)
			max=a;
		else max=c;
	else 
		if(b>c)
			max=b;
		else 
			max=c;
	printf("%d",max);
	return 0;
}*/

/*int main()
{
	int x,y;
	scanf("%d",&x);
	if(-5<x&&x<0)
		printf("%d",x);
	if(x==0)
	{
		y=x-1;
		printf("%d",y);	
	}
	if(0<x&&x<10)
	{
		y=x+1;
		printf("%d",y);
	}
	return 0;
}*/

int main()
{
	int x=2;
	printf("%d",x-=1); //1
	printf("%d",x); //1				//printf函数可以写入表达式
	printf("%d",--x);//0 
	printf("%d",x-1);//-1
	return 0;
}

/*int main()
{
	int x=2;
	while(x--);
	printf("%d\n",x);
	return 0;
}*/