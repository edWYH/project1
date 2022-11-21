#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
#include<math.h>
#include<string.h>
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
//    int a = 0, b = 0, c = 0, d = 0;
//    char x;
//    while (scanf("%c",&x)!=EOF)
//    {
//        if ('a' <= x &&x<= 'z' || 'A' <= x &&x<= 'Z')
//            a++;
//        else if (x == ' ')
//            b++;
//        else if ('0' <= x && x <= '9')
//            c++;
//        else d++;
//    }
//    printf("%d %d %d %d", a, b, c, d);
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