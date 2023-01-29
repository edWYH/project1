#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<omp.h>
#include<stdbool.h>
//const int x = 10;
//int weight = 80;
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d/n",&a,&b);
//	int sum = a + b;
//	printf("%d\n", sum);
//	printf("%d\n", weight);
//	int y = x + 2;
//	printf("%d\n", y);
//	int len = strlen("abc");
//	printf("%d\n", len);
//	int w=sizeof("abc");
//	printf("%d\n", w);
//	
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line <300 )
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 300);
//	printf("写代码:%d\ncongratulations!", line);
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = strlen("132222");
//	printf("%d\n", a);
//
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2};
//
//
//	return 0;
//}
//int main()
//{
//	float x = -1023.12;
//	printf("\n%08.3f", x);
//	printf("%010.3f", x);
//
//
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	int grade = 0;
//	char b = 0;
//	scanf("%d", &grade);
//	if (grade >= 90) b = 'A';
//	if (grade >= 80 && grade <= 89) b = 'B';
//	if (grade >= 70 && grade <= 79) b = 'C';
//	if (grade >= 60 && grade <= 69) b = 'D';
//	if (grade <= 59 && grade >= 0) b = 'E';
//	if (grade > 100 || grade < 0) printf("error");
//	switch (b)
//	{
//	case'A':printf("%c", b);break;
//	case'B':printf("%c", b);break;
//	case'C':printf("%c", b);break;
//	case'D':printf("%c", b);break;
//	case'E':printf("%c", b);
//
//
//		return 0;
//	}
//
//
//
//
//	re{

//#include<stdio.h>
//int main()
//
//{
//    int b=0;
//    int a = 0;
//    scanf("%d",& a);
//    if (a > 9999) b = 5;
//    else if (a > 999)  b = 4;
//    else if (a > 99) b = 3; 
//    else if (a > 9) b = 2; 
//    else  b = 1; 
//    printf("%d\n", b);
//        int fir = a / 10000;
//        
//        int sec = (a-fir*10000)/1000;
//
//        int thi= (a-fir*10000-sec*1000)/100;
//
//        int fort = (a-fir*10000-sec*1000-thi*100)/10;
//
//        int fif=(a-fir*10000-sec*1000-thi*100-fort*10);
//        switch(b)
//        {
//        case 5:printf("%d %d %d %d %d\n", fir, sec, thi, fort, fif);
//
//
//
//            printf("%d%d%d%d%d", fif, fort, thi, sec, fir);break;
//        case 4:printf("%d %d %d %d\n", sec, thi,fort,fif);
//            printf("%d%d%d%d", fif, fort, thi, sec);break;
//        case 3:printf("%d %d %d\n", thi, fort, fif);
//            printf("%d%d%d\n", fif, fort, thi);break;
//        case 2:printf("%d %d\n", fort, fif);
//            printf("%d%d", fif, fort);break;
//        case 1:printf("%d\n", fif);
//            printf("%d", fif);
//        
//
//            
//
//
//           
//        }
//
//
//
//
//
//
//    return 0;
//}


//int main()
//{
//	int x,num;
//	scanf("%d", &x);
//	//几位数
//	if (x <= 9) num=1,printf("%d\n",num);
//	else if (x <= 99) num=2, printf("%d\n", num);
//	else if (x <= 999) num=3 ,printf("%d\n", num);
//	else if (x <= 9999) num=4 , printf("%d\n", num);
//	else if (x <= 99999) num=5, printf("%d\n", num);
//	//输出数字
//	int a, b, c, d, e;
//	a = x / 10000;
//	b = (x - a*10000) / 1000;
//	c = (x - a*10000 - b*1000) / 100;
//	d = (x - a*10000 - b*1000 - c*100) / 10;
//	e = x - a*10000 - b*1000 - c*100 - d*10;
//	switch (num)
//	{
//		case 1:printf("%d\n", e);break;
//		case 2:printf("%d%d\n", d, e);break;
//		case 3:printf("%d%d%d\n", c, d, e);break;
//		case 4:printf("%d%d%d%d\n", b, c, d, e);break;
//		case 5:printf("%d%d%d%d%d\n", a, b, c, d, e);break;
//
//	}
//
//	switch (num)
//	{
//	case 1:printf("%d\n", e);break;
//	case 2:printf("%d%d\n", e, d);break;
//	case 3:printf("%d%d%d\n", e, d, c);break;
//	case 4:printf("%d%d%d%d\n", e, d, c, b);break;
//	case 5:printf("%d%d%d%d%d\n", e, d, c, b, a);break;
//
//	}
//
//
//
//	return 0;
//}
//void main()
//{
//	char ch;
//	ch = getchar();
//	while (ch = getchar()!='\n');
//	
//
//
//}
//#include<stdio.h>
//int main(void)
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//    char x;
//	freopen("xx.txt", "r", stdin);
//    while (scanf("%c",&x)!=EOF)
//    {
//		if ('a' <= x && x <= 'z')
//			a++;
//		else if ('A' <= x && x <= 'Z')
//			e++;
//        else if (x == ' ')
//            b++;
//        else if ('0' <= x && x <= '9')
//            c++;
//        else d++;
//    }
//	printf("%d %d %d %d %d", e, a, c, b, d);
//    return 0;
//}
//int main()
//{
//	int a, n, i = 0 ;
//		long int sum = 0, num = 0;
//	scanf("%d%d", &n, &a);
//	for (i = 1;i <= n;i++)
//	{
//		num = num + a *long( pow(10, i - 1));
//		sum = sum + num;
//		
//	}
//
//	printf("\n%d", sum);
//
//	return 0;
//}
//int main()
//
//{
//	int a = 0, b = 0;
//	double  num = 1, sum = 0;
//	for (a = 1;a <= 20;a++)
//	
//		{
//			for (num=1,b = 1;b <= a;b++)
//				num = b * num;
//			sum = num + sum;
//		}
//	
//	
//		printf("%.0lf", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int a = 65;
//	printf("%c", a);
//
//
//	return 0;
//}

//int main()
//{
//	double f1, f2, t;
//	int n;
//	double sum;
//	int num=1;
//	f1 = 2.0, f2 = 1.0;
//	scanf("%d", &n);
//	for (sum = 0; num <= n;num++)
//	{
//		sum = sum + f1 / f2;
//		t = f1;
//		f1 = f1 + f2;
//		f2 = t;
//
//	}
//	printf("%.2lf", sum);
//
//	return 0;
//}

//int main()
//{
//	int k,n1,n2,n3;
//	int sum1 = 0, sum2 = 0;
//	double sum3 = 0;
//	n1 = 1;
//	for (k = 1;n1 <= 100;n1++)
//	{
//		sum1 = sum1 + k;
//		k++;
//
//	}
//	n2 = 1;
//	for (k = 1;n2 <= 50;n2++)
//	{
//		sum2 = sum2 + k * k;
//		k++;
//
//	}
//	n3 = 1;
//	for (double k = 1;n3 <= 10;n3++)
//	{
//		sum3 = sum3 + 1 / k;
//		k++;
//
//	}
//	double sum;
//	sum = sum1 + sum2 + sum3;
//
//	printf("%.2lf\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	int num, a, b, c;
//	
//	for (num = 100;num <= 999;num++)
//	{
//		a = num / 100;
//		b = num / 10 % 10;
//		c = num % 10;
//		if (num == a * a * a + b * b * b + c * c * c)
//			printf("%d\n", num);
//
//	}
//
//	return 0;
//}
	/* int main()
{
		 int a = 0, b = 0, d=0,e=0;
		 double c = 0,f=0;
		 for (a = 1;a <= 100; a++)
			 d = d + a;
		 for (b = 1;b <= 50;b++)
			 e = e + b * b;
		 for (c = 1;c <= 10;c++)
			 f = f + 1 / c;
		 printf("%.2lf",d+e+f);




		 return 0;
}*/
//int main()
//{
//    int a = 0, b = 0, c = 0,d=0;
//    
//    for (a = 100;a <= 999;a++)
//    {
//        b = a / 100;
//        c = (a - b * 100) / 10;
//        d = a % 10;
//        if (a == b * b * b + c * c * c + d * d * d)
//        printf(" %d\n", a);
//
//    }
//
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//
//    scanf("%d", &n);
//    float a = 0, b = 0, c = 0, sum = 0, t = 0;
//    for (a = 1, b = 2, c = 1;a <= n;a++)
//    {
//        sum = sum +b / c;
//        t = c;
//        c = b;
//
//        b = b + t;
//    }
//    printf("%.2f", sum);
//
//
//
//
//
//    return 0;
//}
//int main()
//{
//    double  b = 0;
//    double a = 0, sum = 0;
//    for (a = 100, b = 1;b <= 10;b++)
//    {
//        sum = sum + a;
//        a /= 2.0;
//        sum = sum + a;
//
//
//    }
//    printf("299.609 ");
//    printf("%.3lf", a);
//
//
//    return 0;
//}
//int main()
//{
//    int a = 0, sum=0, c = 0;
//    for (a = 1,sum=1;a <= 9;a++)
//    {
//        sum = (sum + 1) * 2;
//
//    }
//
//    printf("%d", sum);
//
//
//
//    return 0;
//}
//# include <math.h>
//int main()
//
//{
//    double ss(double a);
//    double x1 = -10, x2 = 10;
//    for (;fabs(x1 - x2) >= 1e-15; )
//    {
//        x1 = (x1 + x2) / 2;
//        if (ss( x1) *ss(x2) <= 0)
//            continue;
//        else
//        {
//            x1 = 2 * x1 - x2;
//            x2 = (x1 + x2) / 2;
//        }
//
//    }
//    printf("%.6lf", x1);  
//    return 0;
//}
//double ss (double a)
//{
//    double c;
//   c=2 * pow(a, 3) - 4 * pow(a, 2) + 3 * a - 6;
//   return c;
//}
//if ((2 * pow(x1, 3) - 4 * pow(x1, 2) + 3 * x1 - 6) * (2 * pow(x2, 3) - 4 * pow(x2, 2) + 3 * x2 - 6) <= 0)

//int main()
//{
//    int line, star, blank;
//    int n;
//    scanf("%d", &n);
//    line = 1;
//   
//    for (;line <= 2*n-1;line++)
//    {
//        blank = fabs(n - line);
//        star = 2*n-1 - 2 * fabs(n- line);
//        for (int x = 1;x <= blank;x++)
//        {
//            printf(" ");
//        }
//        for (int y=1;y <= star;y++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
//int main()
//{
//      int n,x,t;
//      int i=0,j;
//      int a[100000];
//        scanf("%d %d", &n,&x);
//        for (i = 0;i <= n-1;i++)
//        scanf("%d", &a[i]);
//        a[n] = x;
//        
//            for (i = 0;i <= n-1;i++)
//            {
//                if (a[n] >= a[i]) continue;
//                else
//                {
//                    t = a[i];a[i] = a[n];a[n] = t;
//                }
//              
//            }
//        
//        for (i = 0;i <= n;i++)
//            printf("%d", a[i]);
//    return 0;
//}
//int main()
//{
//    double a = 0, b = 1, num = 1, e = 1,i=1;
// 
//    for (i = 1;b >= 1e-16;i ++ )
//    {
//        num = num * i;
//
//        b = 1.0/ num;
//        e = e + b;
//    }
//    printf("%lf\n", e);
//    printf("%.0lf", i+1);
//
//    return 0;
//}
//int main()
//{
//    int a = 0, c=0,sum=0;
//    double b = 0;
//    for (a = 2;a <= 100;a++)
//    {
//        for (c = 2;c <= a;c++)
//        
//            if (a % c == 0) break;
//        
//        if (c ==a) {
//            printf("素数是%d\n", c);
//            sum = sum + c;
//        }        
//    }
//    printf("sum=%d", sum);
//return 0;
//}
//int main()
//{
//    int a[10][10];
//    int i, j;
//	int n;
//	scanf("%d", &n);
//    for (i = 0, j = 0;i <n;i++)
//    a[i][j] = 1; 
//    for(i=1;i<n;i++)
//        for (j = 1;j <= i;j++)
//        {
//            if (j == i) 
//                a[i][j] = 1;
//            else 
//            a[i][j] = a[i - 1][j-1] + a[i-1][j];
//        }
//    for (i = 0;i <n;i++)
//        for (j = 0;j <= i;j++)
//        {
//            printf("%4d", a[i][j]);
//            if (i == j) printf("\n");            
//        }            
//    return 0;
//}
//int main()
//{
//    int a = 0, b = 0, n,c=0;
//    int arr[10000][10000];
//    scanf("%d", &n);
//    c = (1 + n * n) * (n*n) / 2/n;
//    
//    for (a = 0;a <= n - 1;a++)
//        for (b = 0;b <= n - 1;b++)
//            printf("%d", arr[a][b]);
//    return 0;
//}


//猜数字游戏
//void menu()
//{
//    printf("**********************************\n");
//    printf("***************1.play*************\n");
//    printf("***************0.exit*************\n");
//
//}
//void game()
//{
//    int ret = rand() % 100 + 1;
//    int guess;
//    while (1)
//    {
//        printf("请猜数字:>");
//        scanf("%d", &guess);
//        if (guess < ret)
//        {
//            printf("猜小了\n");
//        }
//        else if (guess > ret)
//        {
//            printf("猜大了\n");
//        }
//        else
//        {
//            printf("恭喜你，猜对了！\n");
//            break;
//        }
//
//    }
//
//}
//int main()
//{
//    int input = 1;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//
//
//        }
//
//    } while (input);
//
//
//    return 0;
//}
//int main()
//{
//    int n = 0;
//    int i = 0, j = 0;
//    scanf("%d",&n);
//    for (i = 1;i <= n;i++)
//    {
//        printf("%4d", i);
//        if (i == n) printf("\n");
//    }
//    for (i = 1;i <= n;i++)
//    {
//        printf("   -");
//        if (i == n) printf("\n");
//    }
//    for (i = 1;i <= n;i++)
//        for (j = 1;j <= n;j++)
//        {
//            printf("%4d", i * j);
//            if (j == n) printf("\n");
//        }
//
//
//    return 0;
//}
// 
//int main()
//{
//  int i = 0,a=0,sum=0;
//  char ss [100];
//  scanf("%s", ss);
//  if ((ss[0] >= 48 && ss[0] <= 57) && (ss[1] >= 48 && ss[1] <= 57))
//  {
//      a = 10 * (ss[0] -48)+ (ss[1]-48);sum = a;
//      for (i = 2;ss[i] != '=';i++)
//      {
//          if ((ss[i + 1] >= 48 && ss[i + 1] <= 57) && (ss[i + 2] >= 48 && ss[i + 2] <= 57))
//              a = 10 * ss[i + 1] + ss[i + 2];
//          if ((ss[i + 1] >= 48 && ss[i + 1] <= 57) && (ss[i + 2] == 42 || ss[i + 2] == 43 || ss[i + 2] == 45 || ss[i + 2] == 47))
//              a = ss[i + 1];
//          switch (ss[i])
//          {
//          case(42):sum = sum * a;break;
//          case(43):sum = sum + a;break;
//          case(45):sum = sum - a;break;
//          case(47):sum = sum / a;break;
//          case(48 || 49 || 50 || 51 || 52 || 53 || 54 || 55 || 56 || 57):break;
//          default:printf("错误的运算符：%c", ss[i]);
//          }
//      }
//      printf("\n%d", sum);
//  }
//  if ((ss[0] >= 48 && ss[0] <= 57) && (ss[1] == 42 || ss[1] == 43 || ss[1] == 45 || ss[1] == 47))
//  {
//      a = ss[0]; sum = a;
//      for (i = 2;ss[i] != '=';i++)
//      {
//          if ((ss[i + 1] >= 48 && ss[i + 1] <= 57) && (ss[i + 2] >= 48 && ss[i + 2] <= 57))
//              a = 10 * ss[i + 1] + ss[i + 2];
//          if ((ss[i + 1] >= 48 && ss[i + 1] <= 57) && (ss[i + 2] == 42 || ss[i + 2] == 43 || ss[i + 2] == 45 || ss[i + 2] == 47))
//              a = ss[i + 1];
//          switch (ss[i])
//          {
//          case(42):sum = sum * a;break;
//          case(43):sum = sum + a;break;
//          case(45):sum = sum - a;break;
//          case(47):sum = sum / a;break;
//          case(48 || 49 || 50 || 51 || 52 || 53 || 54 || 55 || 56 || 57):break;
//          default:printf("错误的运算符：%c", ss[i]);
//          }
//      }
//      printf("\n%d", sum);
//  }
//      
//    return 0;
//}
//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, e = 0,f=0,g=0,num;
//    for (num = 100;num <= 999;num++)
//    {
//        a = num;
//        b = num % 7;
//        c = num % 9;
//        d = num / 7 % 7;
//        e = num / 7 / 7;
//        f = num / 9 % 9;
//        g = num / 9 / 9;
//        if ((b == g) && (d == f) && (c == e))
//            printf("%d", a);
//        else continue;
//
//    }
//    return 0;
//}
/*if (i == 1) 
		  {
			  if (ss[i] == '42')  sum = ss[0] * ss[2];
			  else if (ss[i] == '43') sum = ss[0] + ss[2];
			  else if (ss[i] == '45') sum = ss[0] - ss[2];
			  else  if (ss[i] == '47') sum = ss[0] / ss[2];
		  }
		  if ((ss[i - 1] >= '48' && ss[i - 1] <= '57') && (ss[i] >= '48' && ss[i] <= '57'))
			  a = ss[i - 1] * 10 + ss[i];
		  if ((ss[i - 1] == '42' || ss[i - 1] == '43' || ss[i - 1] == '45' || ss[i - 1] == '47') && (ss[i] >= '48' && ss[i] <= '57'))
			  a = ss[i];
		  switch (ss[i])
		  {
		  case(''):

		  }*/
		  
		  /*else if ((ss[i - 1] >= '48' && ss[i - 1] <= '57') && (ss[i] == '42' || ss[i] == '43' || ss[i] == '45' || ss[i] == '47'))
			  a = ss[i - 1];*/
		  
		  /*else if (ss[i] == '42')  sum = sum* ss[i + 1];
		  if(ss[i] == '43') sum=sum+ ss[i + 1];
		  if(ss[i] == '45') sum=sum- ss[i + 1];
		  if(ss[i] == '47') sum=sum/ ss[i + 1];*/
	 /* }
	  printf("%d", sum);*/
//
//int getNextNum()
//{
//    int ret;
//    scanf("%d", &ret);
//    return ret;
//}
//char getOpt()
//{
//    return getchar();
//}
//int caculate(int op1, int op2, char opt)
//{
//    if (opt == '+')return op1 + op2;
//    if (opt == '-')return op1 - op2;
//    if (opt == '*')return op1 * op2;
//    if (opt == '/')return op1 / op2;
//    
//    return 0;
//}
//int main()
//{
//    int op1, op2;
//    char opt;
//    op1 = getNextNum();
//    while (1)
//    {
//        opt = getOpt();
//        if (opt == '=')break;
//        if ((opt != '+') && (opt != '-') && (opt != '*') && (opt != '/'))
//        {
//            break;
//        }
//        op2 = getNextNum();
//        op1 = caculate(op1, op2, opt);
//    }
//    if ((opt != '+') && (opt != '-') && (opt != '*') && (opt != '/')&&(opt!='='))
//        printf ("错误的运算符：%c", opt);
//     else printf("%d\n", op1);
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    printf("这里是23根火柴游戏！！\n注意：最大移动火柴数目为三根\n");
//    int sum = 23;
//
//    while (1) {
//
//
//        printf("请输入您移动的火柴数目：\n");
//        int j, i;
//    a:        scanf("%d", &j);
//        if (j > 3 || j < 0)
//        {
//            printf("你不可以拿这么多根火柴!\n请重新输入n:");
//            goto a;
//        }
//        else
//        {
//            printf("您移动的火柴数目为：%d\n", j);
//            sum -= j;
//            printf("您移动后剩下的火柴数目为：%d\n", sum);
//            //在玩家这里结束的进入if
//            if (sum <= 0) {
//                printf("对不起！您输了！\n");
//                break;
//            }
//        }
//
//        if (sum > 3)
//        {
//            i = sum % 3 + 1;
//            printf("计算机移动的火柴数目为：%d\n", sum % 3 + 1);
//        }
//        else if (sum == 3)
//        {
//            i = 2;
//            printf("计算机移动的火柴数目为：%d\n", i);
//        }
//        else if (sum == 2)
//        {
//            i = 1;
//            printf("计算机移动的火柴数目为：%d\n", i);
//        }
//        else
//        {
//            i = 1;
//            printf("计算机移动的火柴数目为：%d\n", i);
//        }
//
//        sum -= i;
//        printf("计算机移动后剩下的火柴数目为：%d\n", sum);
//        //在计算机这里结束的情况
//        if (sum <= 0) {
//            printf("恭喜您！您赢了！\n");
//            break;
//        }
//
//    }
//}
//int main()
//{
//    int a, b, c;  //a是A的对手 b是B的对手 c是C的对手
//    for (a = 'x'; a <= 'z'; a++)
//    {
//        for (b = 'x'; b <= 'z'; b++)
//        {
//            if (a != b)//避免重复比赛
//            {
//                for (c = 'x'; c <= 'z'; c++)
//                {
//                    if (a != c && b != c)//避免重复比赛
//                    {
//                        if (a != 'x' && c != 'x' && c != 'z')
//                        {
//                            printf("顺序为：\na--%c\tb--%c\tc--%c\n", a, b, c);
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}

//int main(void)
//{
//	double x, y, s, b=0;
//	int i;
//	char a;
//	char op;
//	char ss[100000];
//	while (1) {
//	printf("Please enter the expression:\n");	
//	scanf("%lf%s%lf", &x, ss, &y);
//	
//	for (i = 0;;i++)
//	{
//		if (ss[i] != ' ') op = ss[i];break;
//
//	}
//		switch (op)
//		{
//		case '+':
//		{s = x + y;
//		printf("%.6lf+%.6lf=%.6lf\nDo you want to continue(Y/N or y/n)?Please enter the expression:", x, y, s);	
//		scanf  ("%c",&a);  
//		scanf("%c", &a);
//		if ((a == 'y') || (a == 'Y'))
//			break;    
//		}
//		case '-':
//		{s = x - y;
//		printf("%.6lf-%.6lf=%lf\nDo you want to continue(Y/N or y/n)?Please enter the expression:", x, y, s);
//		scanf("%c", &a);
//		scanf("%c", &a);
//		if ((a == 'y') || (a == 'Y'))
//			break;}
//		case '*':
//		{ s = x * y;
//		printf("%.6lf*%.6lf=%lf\nDo you want to continue(Y/N or y/n)?Please enter the expression:", x, y, s);
//		scanf("%c", &a);
//		scanf("%c", &a);
//		if ((a == 'y') || (a == 'Y'))
//			break;}
//		case '/':
//		 if (y == 0)
//		{
//			printf("Division by zero!\nDo you want to continue(Y/N or y/n)?Please enter the expression:");
//			scanf("%c", &a);
//			scanf("%c", &a);
//			if ((a == 'y') || (a == 'Y'))
//				break;
//		}
//		else
//		{
//			s = x / y;
//			printf("%.6lf/%.6lf=%lf\nDo you want to continue(Y/N or y/n)?Please enter the expression:", x, y, s);
//			scanf("%c", &a);
//			scanf("%c", &a);
//			if ((a == 'y') || (a == 'Y'))
//			break;
//		}
//		/*break;*/
//		default:
//			printf("Unknown operator!\n");
//		}
//		if ((a == 'y') ||( a == 'Y'))  b=0;
//		else break;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i, j, n;
//    scanf("%d", &n);
//    char c = 65;
//    for (i = 0;i <= n-1;i++)
//    {
//        printf("%c", c + i);
//        for (j = 1;j <= n - i-1;j++)
//        {
//            printf("%c", c + j + i);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//int main()
//{
//	char c, ys = '+';
//	int t1 = 0, t2 = 0;
//	while (1)
//	{
//		c = getchar();
//
//		if (c >= '0' && c <= '9')
//			t2 = t2 * 10 + c - '0';
//		else
//		{
//			if (c != '+' && c != '-' && c != '*' && c != '/' && c != '=')
//			{
//				printf("错误的运算符：%c", c);
//				return 0;
//			}
//			if (ys == '+')
//			{
//				t1 = t1 + t2;
//				t2 = 0;
//			}
//			else if (ys == '-')
//			{
//				t1 = t1 - t2;
//				t2 = 0;
//			}
//			else if (ys == '*')
//			{
//				t1 = t1 * t2;
//				t2 = 0;
//			}
//			else if (ys == '/')
//			{
//				t1 = t1 / t2;
//				t2 = 0;
//			}
//			ys = c;
//		}
//		if (c == '=')
//			break;
//	}
//	printf("%d", t1);
//	return 0;
//}
//#include<stdio.h>
//int ys()
//{
//	printf("Please enter the expression:\n");
//	float f1, f2;
//	char op;
//	scanf("%f%c%f", &f1, &op, &f2);
//	if (op == '+')
//	{
//		printf("%f + %f = %f\n", f1, f2, f1 + f2);
//	}
//	else if (op == '-')
//	{
//		printf("%f - %f = %f\n", f1, f2, f1 - f2);
//	}
//	else if (op == '*')
//	{
//		printf("%f * %f = %f\n", f1, f2, f1 * f2);
//	}
//	else if (op == '/')
//	{
//		if (f2 == 0)
//			printf("Division by zero!\n");
//		else
//			printf("%f / %f = %f\n", f1, f2, f1 / f2);
//	}
//	else
//	{
//		printf("Unknown operator!\n");
//	}
//	return 0;
//}
//int main()
//{
//	char c;
//	do
//	{
//		ys();
//		printf("Do you want to continue(Y/N or y/n)?");
//		c = getchar();c = getchar();
//	} while (c == 'Y' || c == 'y');
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("这里是23根火柴游戏！！\n注意：最大移动火柴数目为三根\n");
//	int s = 23, y;
//	while (1)
//	{
//		printf("请输入移动的火柴数目：\n");
//		scanf("%d", &y);
//		if (y > 3 || y <= 0
//			)
//		{
//			printf("对不起！您输入了不合适的数目，请点击任意键重新输入！\n");
//			continue;
//		}
//		printf("您移动的火柴数目为：%d\n", y);
//		s -= y;
//		printf("您移动后剩下的火柴数目为：%d\n", s);
//		if (s <= 0)
//		{
//			printf("对不起！您输了！\n");
//			break;
//		}
//
//		y = (s - 1) % 4;
//		if (y == 0)y = 1;
//		printf("计算机移动的火柴数目为：%d\n", y);
//		s -= y;
//		printf("计算机移动后剩下的火柴数目为：%d\n", s);
//		if (s <= 0)
//		{
//			printf("恭喜您！您赢了！ \n");
//			break;
//		}
//
//	}
//	return 0;
//} 
//int main()
//{
//	int H, M, N, sum=0, a;
//	while (1) 
//	{
//
//
//		scanf("%d,%d,%d", &H, &M, &N);
//		if ((H <= 0) || (M <= 0) || (M - N * 3 <= 0))
//			printf("error");
//		else
//		{
//			for (a = 1;;a++)
//			{
//				if (a == 1) sum = sum + M;
//
//				else if (a % 4 == 1)sum = sum + M-2*N;if (sum > H) break;
//				if ((a % 4 == 2) || (a % 4 == 0))sum = sum + M - N;if (sum> H) break;
//				if (a % 4 == 3) sum = sum + M - 2 * N;if (sum > H) break;
//
//			}
//			if (a % 4 == 1) printf(" 第%d天早上气球爆炸 ",a/2+1);
//			if (a % 4 == 2) printf("第%d天中午气球爆炸",a/ 2);
//			if (a % 4 == 0)  printf("第%d中午气球爆炸",a / 2);
//			if (a % 4 == 3) printf("第%d天早上气球爆炸", a / 2 + 1);
//		}
//		 break;
//		}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int main() {
//	int a, b;
//	float t1, t2, ans;
//	char c1, c2;
//	while (1)
//	{
//		printf("Please input time(e.g: 5h43m)\n");
//		scanf("%d%c%d%c", &a, &c1, &b, &c2);
//		if (a < 0 || a>12) continue;
//		if (b < 0 || b>60) continue;
//		if (c1 != 'h') continue;
//		if (c2 != 'm') continue;
//
//		if (a >= 12) {
//			t1 = (float)a - 12;
//		}
//		else {
//			t1 = (float)a;
//		}
//		t2 = (float)b * 6;
//		t1 = t1 * 30 + (float)b * 0.5;
//		ans = fabs(t1 - t2);
//		if (ans > 180) ans = 360 - ans;
//		printf("At %d:%02d the angle is %.1f degrees.\n", a, b, ans);
//	}
//	return 0;
//}

//#define MAXN 100
//
//int Shift(int a[], int n, int m);
//
//int main()
//{
//	int a[MAXN], n, m;
//	int i;
//
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++) scanf("%d", &a[i]);
//
//	Shift(a, n, m);
//
//	for (i = 0; i < n; i++) {
//		if (i != 0) printf(" ");
//		printf("%d", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//
//int Shift(int a[], int n, int m)
//{
//	if (m >= n) m -= n;
//	int b[100];
//	for (int i = 0;i < m;i++)
//		b[i] = a[n - m + i];
//	for (int i = 0;i < n - m;i++)
//		b[i + m] = a[i];
//	for (int i = 0;i < n;i++)
//		a[i] = b[i];
//}
//#include<stdio.h>
//int main()
//{
//	double x, n;
//	x = 1;
//	int i;
//	int m;
//	m = 1;
//	scanf("%lf", &n);
//	for (i = 1;1.0/m >= n;i++)
//	{
//		m = m * i;
//
//		x = x + 1.0 / m;
//	}
//	printf("e=%.8f,count=%d", x, i);
//
//	return 0;
//}
//int main()
//{
//	long int m, n;
//	int i;
//	long int x=1;
//	int is_prime= 1;
//	scanf("%ld%ld", &m, &n);
//	for (;m<=n;m+=2)
//	{
//		if (m % 2 == 0) continue;
//		for (i = 2;i <=sqrt(m);i++)
//		{
//			if (i % 2 == 0) continue;
//			if (m % i == 0)
//			{
//				is_prime = 0;break;
//			}
//			else is_prime = 1;
//		}
//		if (is_prime == 1&&m>3) x++;
//	}
//	printf("%ld\n", x);
//	return 0;
//}
//int main()
//{
//	long int m, n;
//	long long int sum;
//	sum = 0;
//	scanf("%ld %ld", &m, &n);
//	for (;m <= n;m++)
//	{
//		if (m % 3 == 0) continue;
//		sum=sum+m;
//	}
//	printf("%lld", sum);
//	return 0;
//}

//int main()
//{
//	long int arr[100000] = { 0 };
//	long int x = 0;
//	long int i = 0;
//	long int n = 0;  
//	arr[n] = 2;  
//	n++;
//	arr[n] = 3;   
//	n++;
//	for (x = 5; x < 1000000; x += 2)
//	{
//		
//		for (i = 0; i < n; i++)
//		{
//			if (x % arr[i] == 0)
//			{
//				break;
//			}
//		}
//		if (n == i)  
//		{
//			arr[n] = x;  
//			n++;
//
//		}
//	}
//	printf("%ld", n);
//	return 0;
//}
//int main(void) {
//	char s1[105], s2[105], s[210];
//	int i, n1, n2;
//	scanf("%s", s1);
//	scanf("%s", s2);	
//	for (i = 0;;i++)
//	{
//		if (s1[i] != 0) continue;
//		else {
//			n1 = i;break;
//		}
//	}
//	for (i = 0;;i++)
//	{
//		if (s2[i] != 0) continue;
//		else {
//			n2 = i;break;
//		}
//	}
//	for (i = 0;i < n1;i++)
//	{
//		s[i] = s1[i];
//	}
//
//	for (i = 0;i < n2;i++,n1++)
//	{
//		s[n1] = s2[i];
//	}
//	s[n1]=0;
//	printf("%s", s);
//	return 0;
//}
//int main()
//{
//	char cl[26], sl[26], p[20],ss[20];
//	int i, j, k;
//	for (i = 0, j = 'A', k = 'a'; i < 26; cl[i] = j++, sl[i] = k++, i++);
//	
//	gets_s(p);
//	for(i=0;i<=19;i++)
//	{
//		ss[i] = p[i];
//	}
//	
//	for (i = 0; i < 20; i++)
//		for (j = 0; j < 26; j++) {
//			if (p[i] == cl[j]) {
//				p[i] = cl[25 - j]; break;
//			}
//			if (p[i] == sl[j]) {
//				p[i] = sl[25 - j]; break;
//			}
//		}
//	
//	puts(p);
//	puts(ss);
//	return 0;
//}
//int main()
//{
//	int arr[100][100],s1[100],s2[100];
//	int i,j,m,n,k;
//	scanf("%d %d", &m, &n);
//	for (i = 0;i <= m - 1;i++)
//		for (j = 0;j <= n - 1;j++)
//			scanf("%d", &arr[i][j]);
//	for (i = 0;i <= m - 1;i++)
//		for (j = 0;j <= n - 1;j++)
//		{
//			k = i;
//			for()
//
//
//
//
//		}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 2,5,3,6,7,4};
//	int i, j,k,t,a;
//	for(i=0;i<5;i++)		
//		{
//		k = i;
//			for (j = i + 1;j<6;j++)
//			{
//				if (arr[j] > arr[k]) k = j;
//			}
//			if(k!=i)
//			{
//				t = arr[i];arr[i] = arr[k];arr[k] = t;
//			}
//		}
//	for (i = 0;i <= 5;i++)
//		printf("%d", arr[i]);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//char reverse(char arr1[105])
//{
//	int i, n, m;
//	char arr2[105];
//	for (i = 0;i < 105;i++)
//	{
//		if (arr1[i] != '\0') continue;
//		else break;
//	}
//	m = i-1;
//	for (n = 0;n < i;n++)
//	{
//		arr2[n] = arr1[m];
//		m--;
//	}
//	arr2[i] = 0;
//	strcpy(arr1, arr2);
//	return arr2[105];
//}
//
//int main(void) {
//	char s[105];
//	scanf("%s", s);
//	reverse(s);
//	printf("%s", s);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//void calRoot(int x, int y, int z)
//{
//	float n;
//	float x1, x2;
//	n = (y * y) - (4 * x * z);
//	if (n < 0) printf("无实数根");
//	if (n == 0)
//	{
//		x1 = -y / (2 * x);
//		printf("x=%.2f", x1);
//	}
//	if (n > 0)
//	{
//		x1 = (-y + sqrt(n)) / (2 * x);
//		x2 = (-y - sqrt(n)) / (2 * x);
//		printf("x1=%.2f,x2=%.2f", x1, x2);
//	}
//
//
//}
//int main(void) {
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	calRoot(a, b, c);
//	return 0;
//}
//#include <stdio.h>
//void insertSpace(int x)
//{
//	int a, b, c, d;
//	
//	a = x / 1000;
//	b = (x - a * 1000) / 100;
//	d = x % 10;
//	c = (x - a * 1000 - b * 100) / 10;
//	
//	printf("%d ", a);printf("%d ", b);printf("%d ", c);printf("%d ", d);
//}
//int main(void) {
//	int a;
//	scanf("%d", &a);
//	insertSpace(a);
//	return 0;
//}
//char names[10][10];
//int ids[10];
//
//void input()
//{
//    int m, n;
//    for (m = 0;m < 10;m++)
//    {
//        scanf("%s", &names[m]);
//    }
//    for (n = 0;n < 10;n++)
//    {
//        scanf("%d", &ids[n]);
//    }
//}
//int sort(int aa[10])
//{
//    int i, k, j, t, p;
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    for (i = 0;i < 9;i++)
//    {
//        k = i;
//        for (j = i + 1;j <= 9;j++)
//        {
//            if (ids[k] > ids[j]) k = j;
//        }
//        if (k != i)
//        {
//            t = ids[i];ids[i] = ids[k];ids[k] = t;
//            p = arr[i];
//            arr[i] = arr[k];
//            arr[k] = p;
//        }
//    }
//    for (i = 0;i < 10;i++)
//    {
//        aa[i] = arr[i];
//    }
//    return aa[10];
//
//}
//
//int main(void) {
//    int order[10];
//    for (int i = 0; i < 10; ++i) {
//        order[i] = i;
//    }
//    input();
//    sort(order);
//    printf("%s", names[order[0]]);
//    for (int i = 1; i < 10; ++i) {
//        printf(" %s", names[order[i]]);
//    }
//    printf("\n");
//    for (int i = 0; i < 10; ++i) {
//        printf("%d ", ids[i]);
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <stdbool.h>
//bool is_prime(int n)
//{
//	if (n == 2 || n == 3) return true;
//	if ((n % 2 == 0 && n != 2) || (n < 9 && n % 3 == 0)) {
//		return false;
//	}
//	for (int i = 5;i * i <= n;i += 6) {
//		if (n % i == 0 || n % (i + 2) == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main() {
//	int n;
//	printf("请输入一个整数:");
//	scanf("%d", &n);
//	if (is_prime(n)) {
//		printf("%d 是素数。\n", n);
//	}
//	else {
//		printf("%d 不是素数。\n", n);
//	}
//	return 0;
//}
//bool is_prime(int n)
//{
//	if (n == 2 || n == 3) return true;
//	if ((n % 2 == 0 && n != 2) || (n < 9 && n % 3 == 0)) {
//		return false;
//	}
//	for (int i = 5;i * i <= n;i += 6) {
//		if (n % i == 0 || n % (i + 2) == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//int main()
//{
//	long int m, n;
//	long int i;
//	int long count;
//	count = 0;
//	printf("请输入范围m,n:");
//	scanf("%ld,%ld", &m, &n);
//	i = m;
//	for (;i < n;i++)
//	{
//		if (is_prime(i)) { count++; }
//	}
//	printf("m,n之间有%ld 个素数", count);
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	char s[] = "12134211";
//		int k, v1, v2, v3, v4;
//	v1 = v2 = v3 = v4 = 0;
//	for (k = 0; s[k] != '\0';k++)
//		switch (s[k]) {
//		default:v4++;
//		case'1':v1++;
//		case '2':v2++;
//		case'3':v3++;
//			printf("%d,%d,%d,%d\n",v1,v2,v3,v4);
//		}
//}
//int main() {
//	char str[81], str1[81];
//	int k = 1, i = 1, j;
//	int flag = 0;
//	gets_s(str);
//	str1[0] = str[0];
//	while (str[i] != '\0') {
//		for (j = 0;j < k;j++)
//			if (str[i] == str1[j]) flag = 1;
//		if (flag != 1) str1[k++] = str[i];
//		i++;
//	}
//	for (i = 0;i < k;i++) printf("%c", str1[i]);
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10],i,j,k,t;
//	for (i = 0;i <= 9;i++)
//	scanf("%d", &arr[i]);
//	for (i = 0;i <= 8;i++)
//	{
//		k = i;
//		for (j = i + 1;j <= 9;j++)
//			if (arr[j] >= arr[k]) k = j;
//		if (k != i) { t = arr[i];arr[i] = arr[k];arr[k] = t; }
//	}
//	for (i = 0;i <= 9;i++)
//		printf("%d ",arr[i]);
//		return 0;
//}
#include<stdio.h>
//int main()
//{
//	//TJGdskjf897tt&^%
//	//	IdshFF
//	//	CVFO
//	char arr[3][300];
//	int i, j;
//	for (i = 0;i < 3;i++)
//		scanf("%s", arr[i]);
//	for (i = 0;i < 3;i++)
//		for (j = 0;j < 300;j++)
//			if (arr[i][j] >= 'A' && arr[i][j] <= 'Z') arr[i][j] += 32;
//	for (i = 0;i < 2;i++)
//		printf("%s\n", arr[i]);
//	printf("%s", arr[2]);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int a[3][4];
//	int b[4][5];
//	int i, j;
//	for (i = 0;i < 3;i++)
//		for (j = 0;j < 4;j++) {
//			scanf("%d", &a[i][j]);
//		}
//	for (i = 0;i < 4;i++)
//		for (j = 0;j < 5;j++) {
//			scanf("%d", &b[i][j]);
//		}
//	int c[3][5];
//	for (i = 0;i < 3;i++)
//		for (j = 0;j < 5;j++) {
//			int k = 0;
//			int sum = 0;
//			while (k <= 3) {
//				sum += a[i][k] * b[k][j];
//				k++;
//			}
//			c[i][j] = sum;
//		}
//	for (i = 0;i < 3;i++) {
//		for (j = 0;j < 5;j++) {
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//}
//#include <stdio.h>
//int main() {
//	int a[8], i, k = 0, num = 8;
//	for (i = 8; i < 8; i++) a[i] = i + 1;
//	i = 0;
//	while (num != 1) {
//		if (a[i] != 0) {
//			k = k + 1;
//			if (k == 3) {
//				a[i] = 0;
//				k = 0;num--;
//				i++;
//				if (i == 8) i = 0;
//				for (i = 0; i < 8; i++)if (a[i] != 0) printf("%d\n", i + 1);
//			}
//		}
//	}
//}
//int func(int a, int b) {
//	static int m = 0, i = 2;
//	i += m + 1;
//	m = i + a + b;
//	return(m);
//}
//		int main() 
//		{
//			int k = 4, m = 1, p;p = func(k, m);printf("%d,",p);
//			p = func(k, m);
//			printf("%d\n",p);
//		}
//#include<stdio.h>
//#include<string.h>
//int main() {
//	int n;
//	int len1, len2;
//	int i;
//	char s1[100]={0}, s2[100];
//	scanf("%d", &n);
//	scanf("%s", s1);
//	scanf("%s", s2);
//	len1 = strlen(s1);
//	len2 = strlen(s2);
//	for (i = len1 - 1;i >= n;i--) {
//		s1[i + len2] = s1[i];
//	}
//	for (i = 0;i < len2;i++) {
//		s1[n] = s2[i];
//		n++;
//	}
//	printf("%s", s1);
//}

//#include<stdio.h>
//void score(int arr[40]) {
//	int count[11] = { 0 };
//	int i,m;
//	for (i = 0;i < 40;i++) {
//		count[arr[i]]++;
//	}
//	for (i = 1;i < 11;i++) {
//		printf("%8d%5d   ", i , count[i]);
//		for (m = 0;m < count[i];m++)
//			printf("*");
//		printf("\n");
//	}
//}
//
//int main() {
//	int arr[40];
//	int i;
//	for (i = 0;i < 40;i++) {
//		scanf("%d", &arr[i]);
//	}
//	score(arr);
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//
//double xpoint(double x1, double x2);//求过x1, x2的直线与x轴的交点
//double root(double x1, double x2);//求根函数
//double f(double x);//求x点的函数的值
//
//int main()
//{
//	double x1, x2, f1, f2, x;
//
//
//	do {
//		printf("请输入x1, x2：");
//		scanf("%lf %lf", &x1, &x2);
//		f1 = f(x1);
//		f2 = f(x2);
//	} while (f1 * f2 >= 0);
//	x = root(x1, x2);
//	printf("方程的一个解为：%.2f\n", x);
//
//	return 0;
//}
//
//
////返回直线与X轴的交点
//double xpoint(double x1, double x2)
//{
//	double x = 0;
//
//	x = (x1 * f(x2) - x2 * f(x1)) / (f(x2) - f(x1));
//
//	return x;
//}
//
////返回函数的根
//double root(double x1, double x2)
//{
//	double x, y, y1, y2;
//
//	y1 = f(x1);
//	y2 = f(x2);
//	do {
//		x = xpoint(x1, x2);
//		y = f(x);
//		if (y * y1 > 0) {
//			x1 = x;
//			y1 = y;
//		}
//		else {
//			x2 = x;
//			y2 = y;
//		}
//	} while (fabs(y) >= 0.00001);
//
//	return x;
//}
//
////返回x点的函数值
//double f(double x)
//{
//	double y = 0;
//
//	y = x * x * x - 5 * x * x + 16 * x - 80;
//
//	return y;
//}

//#include<stdio.h>
//void f(int a[100]) {
//	int count[5] = { 0 };
//	int i;
//	for (i = 0;i < 100;i++) {
//		count[a[i]]++;
//	}
//	for (i = 1;i < 5;i++) {
//		printf("%d:%d", i, count[i]);
//		printf("\n");
//	}
//}
//int main() {
//	int arr[100]={0};
//	int n;
//	for (n = 0;n < 100;n++) {
//		scanf("%d", &arr[n]);
//		if (arr[n] < 0) {
//			arr[n] = 0;break;
//		}
//	}
//	f(arr);
//}
//#include<stdio.h>
//int Fibonacci(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", Fibonacci(n));
//}
//#include<stdio.h>
//void func(char str[]) {
//	int a, b;
//	for (a = b = 0; str[a] != '\0';a++)
//		if (str[a] != 'c')
//			str[b++] = str[a];
//	str[b] = '\0';
//}
//int main() {
//		static char str[] = "abcdef";
//		func(str);
//		printf("str[]=%s\n",str);
//		return 0;
//	}
//#include<stdio.h>
//void fun(int* s) {
//	static int j = 0;
//	do
//		s[j] += s[j + 1];while (++j < 2);
//}
//	int main() {
//		int k, a[10] = {1, 2, 3, 4, 5};
//	for (k = 1; k < 3; k++)
//		fun(a);
//	for (k =0;k < 5; k++) printf("%d", a[k]);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    char a[100];
//    char b[100];
//    int c[10], temp1 = 0, temp2 = 0, i = 0, j = 0, count = 0;
//
//    printf("请输入字符串：\n");
//    gets_s(a);
//    b[0] = a[0];
//    b[1] = '\0';
//    while (1)
//    {
//        if (a[temp1] == '\0')
//            break;
//        for (temp2 = 0;;temp2++)
//        {
//            if (b[temp2] == '\0')
//                break;
//            if (a[temp1] == b[temp2])
//                break;
//        }
//        if (b[temp2] == '\0')
//        {
//            b[temp2] = a[temp1];
//            b[temp2 + 1] = '\0';
//        }
//        temp1++;
//    }
//    temp1 = 0;
//    temp2 = 0;
//
//    while (b[temp2] != '\0')
//    {
//        while (a[temp1] != '\0')
//        {
//            if (a[temp1] == b[temp2])
//                count++;
//            temp1++;
//        }
//        c[j++] = count;
//        count = 0;temp1 = 0;
//        temp2++;
//
//    }
//    while (b[i] != '\0')
//    {
//        printf("%c  ", b[i]);
//        i++;
//    }
//    printf("\n");
//    for (i = 0;i < j;i++)
//        printf("%d  ", c[i]);
//    return 0;
//}


//#include<stdio.h>
//int main() {
//	char arr1[20]={0}, arr2[20]={0};
//	int i, j;
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//	for (i = 0;i < 20;i++) {
//		for (j = 0;j < 20;j++) {
//			if (arr1[i] == arr2[j]) {
//				printf("%c", arr1[i]);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a[20001];//储存每一位所得到的数 
//	int temp, digit, n, i, j = 0;//temp每次的得数   digit每次得数的位数  
//	scanf("%d", &n);
//	a[0] = 1;//从1开始乘 
//	digit = 1;//位数从第一位开始 
//	for (i = 2;i <= n;i++)
//	{
//		int num = 0;
//		for (j = 0;j < digit;j++)
//		{
//			temp = a[j] * i + num;//将一个数的每一位数都分别乘以i， 
//			a[j] = temp % 10;//将一个数的每一位数利用数组进行储存
//			num = temp / 10;
//		}
//		while (num)//判断退出循环后，num的值是否为0 
//		{
//			a[digit] = num % 10;//继续储存 
//			num = num / 10;
//			digit++;
//		}
//	}
//	for (i = digit - 1;i >= 0;i--)//倒序输出每一位 
//		printf("%d", a[i]);
//	printf("\n");
//	return 0;
//}


//#ifndef INSERT_H
//#define INSERT_H
//int insert(char s1[], char s2[], char c) {
//	int p = -1;
//	for (int i = 0; s1[i]; ++i) {
//		if (s1[i] == c) {
//			p = i;
//			break;
//		}
//	}
//	if (p == -1) return -1;
//	int len1 = strlen(s1), len2 = strlen(s2);
//	s1[len1 + len2] = '\0';
//	for (int i = len1 - 1; i >= p; --i) {
//		s1[i + len2] = s1[i];
//	}
//	for (int i = 0; i < len2; ++i) {
//		s1[p + i] = s2[i];
//	}
//	return 0;
//}
//#endif

//struct book {
//	char author[20];
//	char title[20];
//};
//int main() {
//	struct book target;
//	scanf("%s", target.author);
//	scanf("%s", target.title);
//	printf("%s \" %s \" ", target.author, target.title);
//	return 0;
//}
//
//int main()
//{
//	int i, a, b = 0, x = 0; char s[100] = { '\0' };
//	char ss[200]={'\0'};
//	scanf("%s", ss);
//	a = strlen(ss);
//	int stt = 1;
//	for (i = 0; i < a; i++)
//	{
//		if (ss[i + 1] < 48 || ss[i + 1]>57) stt = 0;
//		else stt = 1;
//		if (stt == 1)
//		{
//			if (ss[i] >= 48 && ss[i] <= 57)
//
//
//				s[b++] = ss[i];
//
//		}
//		if (stt == 0 && ss[i] >= 48 && ss[i] <= 57)
//		{
//			s[b] = ss[i]; s[b + 1] = ' '; x++; b = b + 2;
//		}
//	}
//	printf("%s\n", s);
//	printf("count=%d", x);
//	return 0;
//}
//
//int main()
//{
//	char ss[100]={0};
//	scanf("%s", ss);
//	puts(ss);
//
//	return 0;
//}

//void swap(int* x, int* y) {
//	int z;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//
//
//int main() {
//	int n1, n2, n3;
//	scanf("%d%d%d", &n1, &n2, &n3);
//	if (n1 > n2) swap(&n1, &n2);
//	if (n1 > n3) swap(&n1, &n3);
//	if (n2 > n3) swap(&n2, &n3);
//	printf("%d %d %d", n1, n2, n3);
//	return 0;
//}\

//#include<stdio.h>
//
//void input(int* number, int n) {
//	int i;
//	for (i = 0;i < n;i++) {
//		scanf("%d", &*(number + i));
//	}
//
//}
//
//void max_min_value(int* number, int n) {
//	int max, min;
//	int i;
//	int x, y;
//	max = 0;
//	min = 0;
//	for (i = 0;i < n;i++) {
//		if (*(number + i) < *(number+min)) {
//			min = i;
//		}
//	}
//	for (i = 0;i < n;i++) {
//		if (*(number + i) > *(number + max)) {
//			max = i;
//		}
//	}
//	x=*number ;
//	*number = *(number+min);
//	*(number + min) = x;
//	y=*(number + 9) ;
//	*(number + 9) = *(number + max);
//	*(number + max) = y;
//}
//
//void output(int* number, int n) {
//	int i = 0;
//	for (i;i < n;i++) {
//		printf("%d ", *(number + i));
//	}
//}
//
//int main() {
//	int number[10];
//	input(number, 10);
//	max_min_value(number, 10);
//	output(number, 10);
//	return 0;
//}


////数组循环右移
//#include<stdio.h>
//
//#define SIZE 100
//
//void input_arr(int* arr, int n);
//
//void right_move(int* arr, int n, int m);
//
//void print_arr(int* arr, int n);
//
//int main() {
//	int num[SIZE];
//	int n, m;
//	scanf("%d%d", &n, &m);
//	input_arr(num, n);
//	right_move(num, n, m);
//	print_arr(num, n);
//	return 0;
//}
//
////输入数组
//void input_arr(int* arr, int n) {
//	int m;
//	for (m = 0;m < n;m++) {
//		scanf("%d", &*(arr + m));
//	}
//}
//
////数组右移
//void right_move(int* arr, int n, int m) {
//	int j, k, i;
//	int temp;
//	while (m / n)
//	{
//		m = m % n;
//	}
//	for (i = n - m;i < n;i++)
//		for (j = i;j > i - (n - m);j--)
//		{
//			temp = *(arr + j);
//			*(arr + j) = *(arr + j - 1);
//			*(arr + j - 1) = temp;
//		}
//}
//
////输出数组
//void print_arr(int* arr, int n) {
//	int i;
//	for (i = 0;i < n;i++) {
//		printf("%d ", *(arr + i));
//	}
//}