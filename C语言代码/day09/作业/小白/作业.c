 一、选择题

1. 若说明：int a[2][3];  则对a数组元素的正确引用是(c ) 。
A. a(1,2)        B. a[1,3]           C. a[1>2][!1]        D. a[2][0]

2. 若有定义：int  b[3][4]={0}；则下述正确的是(c ) 。
A. 此定义语句不正确
B. 没有元素可得初值0
C. 数组b中各元素均为0
D. 数组b中各元素可得初值但值不一定为0

3. 若有以下数组定义，其中不正确的是(b ) 。//d
A. int   a[2][3];
B  int   b[][3]={0,1,2,3};
C. int   c[100][100]={0};
D. int   d[3][]={{1,2},{1,2,3},{1,2,3,4}};

4. 若有以下的定义：int  t[5][4];能正确引用t数组的表达式是(c )。
A. t[2][4]     B. t[5][0]          C. t[0][0]           D. t[0,0]

5. 在定义int  m[ ][3]={1，2，3，4，5，6}；后，m[1][0]的值是(b )。//a
A. 4           B. 1                C. 2                 D. 5

6. 在定义int   n[5][6]后第10个元素是(d )。//c
A. n[2][5]     B. n[2][4]          C. n[1][3]           D. n[1][4]

7. 若二维数组c有m列，则计算任一元素c[i][j]在数组中的位置的公式为( )。//?
（假设c[0][0]位于数组的第一个位置）
A. i*m+j         B. j*m+i             C. i*m+j-1        D. i*m+j+1

8. 若有以下定义语句，则表达式“x[1][1]*x[2][2]”的值是( a)。
float  x[3][3]={{1.0,2.0,3.0},{4.0,5.0,6.0}};
A. 0.0           B. 4.0               C. 5.0            D. 6.0

9. 以下程序运行后，输出结果是 (c )。//a
main()
{
    int  a[4][4]={{1,3,5},{2,4,6},{3,5,7}};
    printf("%d%d%d%d\n",a[0][3],a[1][2],a[2][1],a[3][0]);
}
A. 0650          B. 1470              C. 5430            D. 输出值不定

10. 以下程序运行后，输出结果是(c )。
main()
{
    int aa[4][4]={{1,2,3,4},{5,6,7,8},{3,9,10,2},{4,2,9,6}};
    int i,s=0;
    for(i=0;i<4;i++)  s+=aa[i][1];
    printf(“%d\n”,s);
}
A. 11            B. 19                C. 13               D. 20

11. 有以下程序
main( )
{
    int  a[3][4]={{1,2},{3,4},{5,6}},i,j,s=0;
    for(i=1;i<3;i++)
        for(j=0;j<=i;j++)  s+=a[i][j]；//a[1][1]=3 a[2][2]=6 a[1][0]
            printf("%d\n",s);
}
该程序的输出结果是( )。
A. 18            B. 19                C. 20               D. 21

12. 若定义如下变量和数组:
int i;
int x[3][3]={1,2,3,4,5,6,7,8,9};
则下面语句的输出结果是(c  )。
for(i=0;i<3;i++) printf("%d",x[i][2-i]);x[0][2]  x[1][1]    x[2][0]
A. 1 5 9         B. 1 4 7            C. 3 5 7              D. 3 6 9

13. 下述对C语言字符数组的描述中错误的是( c)。
A. 字符数组可以存放字符串
B. 字符数组中的字符串可以整体输入、输出
C. 可以在赋值语句中通过赋值运算符"="对字符数组整体赋值
D. 不可以用关系运算符对字符数组中的字符串进行比较

14. 下述对C语言字符数组的描述中正确的是 ( a)。
A. 任何一维数组的名称都是该数组存储单元的开始地址，且其每个元素按照顺序连续占存储空间
B. 一维数组的元素在引用时其下标大小没有限制
C. 任何一个一维数组的元素，可以根据内存的情况按照其先后顺序以连续或非连续的方式占用存储空间
D. 一维数组的第一个元素是其下标为1的元素

15. 不能把字符串:Hello!赋给数组str的语句是(d )。//b
A. char str[10]= {'H', 'e', 'l', 'l', 'o', '! '};
B. char str[10];str="Hello!";
C. char str[10];strcpy(str,"Hello!");
D. char str[10]="Hello!";

16. 合法的数组定义是(a )。//d
A. int a[]="string";                   		B. int a[5]={0,1,2,3,4,5};
C. int  s="string";                    		D. char a[]={0,1,2,3,4,5};

17. 下列语句中，不正确的是(c )。
A. static char a[2]={1,2};                   B. static char a[2]={ '1', '2'};
C. static char a[2]={ '1', '2', '3'};       D. static char a[2]={ '1'};

18. 若给出以下定义:
char x[ ]="abcdefg";
char y[ ]={'a','b','c','d','e','f','g'};
则正确的叙述为(c )。
A. 数组x和数组y等价              	        B. 数组x和数组y的长度相同
C. 数组x的长度大于数组y的长度            	D. 数组x的长度小于数组y的长度

19. 若有数组定义: char array [ ]="China"; 则数组 array所占的空间为(c )。
A. 4个字节       B. 5个字节        C. 6个字节          D. 7个字节

20. 若有定义和语句:
char s[10];s="abcd";printf("%s\n",s);
则结果是(以下└┘代表空格)(c )。//d 字符数组必须定义的同时进行整体初始化，所以编译不通过
A. 输出abcd      B. 输出a          C. 输出abcd└┘└┘└┘└┘    D. 编译不通过

21. 下面程序运行后，输出结果是( )。
main()
{
    char  ch[7]={ "b21"};
    int  i,s=0;a
    for(i=0;ch[i]>= '0'&&ch[i]<= '9';i+=2)
        s=10*s+ch[i]- '0';／／？？？？？？
    printf("%d\n",s);
}
A. 12ba56         B. 6521            C. 6                D. 62

22. 运行下面的程序,如果从键盘上输入:123<空格>456<空格>789<回车>,输出结果是( )。
A. 123,456,789                               B. 1,456,789
C. 1,23,456,789                              D. 1,23,456
main()
{
    char  s[100];  int  c, i;
    scanf("%c",&c);  scanf("%d",&i);  scanf("%s",s);
    printf("%c,%d,%s\n",c,i,s);
}

23. 运行下面的程序,如果从键盘上输入:
ab<回车>
c <回车>
def<回车>
则输出结果为( c)。
A. a       	B.  a               C. ab              	D. abcdef
b            b                  c
c            c                  d
d            d
e
f
#include<stdio.h>
#define   N  6
main()
{
    char  c[6];
    int   i=0;
    for(     ;i<6;c[i]=getchar(),i++);
    for( i=0;i<6;i++)   putchar(c[i]);
    printf("\n");
}

24. 运行下面的程序,如果从键盘上输入：ABC时，输出的结果是( )。
#include<string.h>
main()d
{
    char ss[10]="12345";
    strcat(ss, "6789" );
    gets(ss);printf("%s\n",ss);／／？
}
A. ABC         	B. ABC9        	C. 123456ABC    	D. ABC456789

25. 判断两个字符串是否相等，正确的表达方式是( c)。
A. while(s1==s2)                     B. while(s1=s2)
C. while(strcmp(s1,s2)==0)           D. while(strcmp(s1,s2)=0)//?

26. 以下程序的输出结果是（a ）。
main()
{
    char str[12]={ 's','t','r','i','n','g'};
    printf("%d\n",strlen(str));
}
A. 6        	B. 7            C. 11                D. 12

27. 若有以下程序片段:
char str[ ]="ab\n\012\\\"";
printf("%d",strlen(str));
上面程序片段的输出结果是 (c )。
A. 3            B. 4            C. 6                 D. 12

28. 若有以下程序段,输出结果是(d )。
char   s[ ]="\\141\141abc\t";
printf  ("%d\n",strlen(s));
A. 9         	B. 12           C. 13                D. 14

29. 设有static char str[ ]="Beijing";
则执行printf("%d\n", strlen(strcpy(str,"China")));
后的输出结果为 (c )。
A. 5         	B. 7              C. 12                D. 14

30. 以下程序运行后，输出结果是( )。//?
main()
{
    char  cf[3][5]={"AAAA","BBB","CC"};
    printf("\"%s\"\n",ch[1]);
}
A. "AAAA"     	B. "BBB"   	    C. "BBBCC"          D. "CC"

31. 以下程序运行后，输出的结果是(c )。
#include <stdio.h>
#include<string.h>
main()
{
    char w[ ][10]={"ABCD","EFGH","IJKL","MNOP"},k;
    for (k=1;k<3;k++)    1  1
        printf("%s\n",&w[k][k]);
}                        2  2
A. ABCD                       			  B. ABCD
FGH                                       EFG
KL                                        IJ
M
C. EFG                        			  D. FGH
JK                           			 KL
O

32. 以下程序运行后，输出结果是( )。
main()
{
    char  arr[2][4];
    strcpy(arr,"you");  strcpy(arr[1],"me");
    arr[0][3]='&';
    printf("%s \n",arr);
}
A. you&me        B. you           C. me            D. err

二、 填空题


1. 以下程序运行结果是 ________.
#include<stdio.h>
main()
{
    int  a[3][3]={1,2,3,4,5,6,7,8,9},i,s1=0,s2=1;
    for(i=0;i<=2;i++)     { s1=s1+ a[i][i];//S1=a[0][0]=1  a[1][1]=5 S1=6 a[2][2]=9
        s2=s2*a[i][i];};//1*a[0][0]=1    6
    printf("s1=%d,s2=%d",s1,s2);//15,45
}

2. 以下程序完成功能是：计算两个3*4阶矩阵相加，并打印出结果。请填空。
#include<stdio.h>
main()
{
    int  a[3][4]={{3,-2,1,2},{0,1,3,-2},{3,1,0,4}};
    int  b[3][4]={{-2,3,0,-1},{1,0,-2,3},{-2,0,1,-3}};
    int  i,j,c[3][4];
    for(i=0;i<3;i++)
        for(j=0;j<4;j++)
            ________;
    for(i=0;i<3;i++)
    { for(j=0;j<4;j++)
        printf("%d",c[i][j]);
        printf("\n");
    }
}

3. 以下程序的运行结果是________.
main()
{
    int  i, j,a[3][3];
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {if(i==3)  a[i][j]=a[i-1][a[i-1][j]]+1;//a[3][j]=a[2][a[2][j]]+1
    else      a[i][j]=j;
        printf("%4d",a[i][j]);
    }
        printf("\t");
    }
}

4. 阅读下列程序:
#include<stdio.h>
main()
{
    int i, j, row, column,m;
    static int array[3][3]={{100,200,300},{28,72,-30},{-850,2,6}};
    m=array[0][0];
    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
            if (array[i][j]<m)
            { m=array[i][j]; row=i; column=j;}
    printf("%d,%d,%d\n",m,row,column);
}
上述程序的输出结果是 ________。

5. 若想通过以下输入语句使a中存放字符串1234,b中存放字符5,则输入数据的形式应该是________。
:
.
char  a[10],b;
scanf("a=%s b=%c",a,&b);
:
.

6. 以下程序段的输出结果是________。
main()
{
    char  b[]="Hello,you";
    b[5]=0;
    printf("%s\n", b );
}

7. 若有以下程序段，若先后输入：
English
Good
则其运行结果是________。
main()
{
    char  c1[60],c2[3];
    int i=0,j=0;
    scanf("%s",c1);
    scanf("%s",c2);
    while(c1[i]!= '\0')   i++;
    while(c2[j]!= '\0')   c1[i++]=c2[j++];
    c1[i]= '\0';
    printf("\n%s",c1);
}

8. 从键盘输入由5个字符组成的单词，判断此单词是不是hello，并显示结果。
#include<stdio.h>
main()
{
    static  char  str[ ]={‘h’,’e’,’l’,’l’,’o’};
    char str1[5];
    【1】	;
    for(i=0;i<5;i++)
        【2】	;
    flag=0;
    for(i=0;i<5;i++)
        if  【3】  {flag=1;  break;}
    if(flag)   printf("this  word  is not  hello");
    else       printf("this   word  is  hello");
}

9. 以下程序的功能是:将字符数组a中下标值为偶数的元素从小到大排列,其它元素不变。请填空。
#include <stdio.h>
#include <string.h>
main()
{
    char  a[]="clanguage",t;
    int  i, j, k;
    k=strlen(a);
    for(i=0; i<=k-2; i+=2)
        for(j=i+2; j<=k; 【1】)
            if( 【2】 )
            { t=a[i]; a[i]=a[j]; a[j]=t; }
    puts(a);
    printf("\n");
}

10. 输入5个字符串，将其中最小的打印出来。
main()
{
    char  str[10],temp[10]; int  i;
    【1】;
    for(i=0;i<4;i++)
    {gets(str);
        if (strcmp(temp,str)>0)   【2】;
    }
    printf("\nThe first string is:%s\n",temp);
}

11. 以下程序用来对从键盘上输入的两个字符串进行比较,然后输出两个字符串中第一个不相同字符的ASCII码之差。例如:输入的两个字符串分别为abcdef和abceef,则输出为-1。请填空。
#include <stdio.h>
main( )
{
    char   str1[100],str2[100],c;
    int    i,s;
    printf("\n input string 1:\n");    gets(str1);
    printf("\n input string 2:\n");    gets(str2);
    i=0;
    while((strl[i]==str2[i]&&(str1[i]!= 【1】))
          i++;
          s= 【2】 ;
          printf("%d\n",s);
          }
          
12. 设有下列程序:
#include<stdio.h>
#include<string.h>
          main()
    {
        int i;
        char str[10], temp[10];
        gets(temp);
        for (i=0; i<4; i++)
        {   gets(str);
            if (strcmp(temp,str)<0) strcpy(temp,str);
        }
        printf("%s\n",temp);
    }
          上述程序运行后，如果从键盘上输入(在此<CR>代表回车符):
          C++<CR>
          BASIC<CR>
          QuickC<CR>
          Ada<CR>
          Pascal<CR>
          则程序的输出结果是 ________。
          
13. 以下程序功能是：统计从终端输入的字符中每个大写字母的个数。用#号作为输入结束标志，请填空。
#include <stdio.h>
#include <ctype.h>
          main( )
    {
        int num[26],i; char c;
        for(i=0; i<26; i++) num[i]=0;
        while(  【1】  != '#')    /*统计从终端输入的大写字母个数*/
            if( isupper(c))  num[c-65]+=1;
        for(i=0; i<26; i++)            /*输出大写字母和该字母的个数*/
            if(num[i]) printf("%c:%d\n",i  【2】  , num[i]);
    }
          
14. 下面程序段完成功能是：输出两个字符串中对应字符相等的字符。请填空。
          char   x[ ]= "language";
          char   y[ ]= "llngga";
          int   i=0;
          while (x[i]!= 【1】 &&y[i]!= 【2】 )
    { if (x[i]==y[i])  printf("%c", 【3】);
    else i++;
    }
          
15. 下面程序完成功能是：计算一个字符串中子串出现的次数。
#include<stdio.h>
          main()
    {
        int i ,j, k,count;
        char  str1[20],str2[20];
        printf("zhu chuan:");
        gets(str1);
        printf("zi chuan:");
        gets(str2);
        【1】;
        for(i=0;str1[i];i++)
            for(j=i,k=0;str1[j]==str2[k];j++,k++)
                if ( 【2】 )
                    count++;
        printf("chuxian  cishu=%d\n",count);
    } 
          
16. 下面程序完成以下功能：从键盘输入一行字符，统计其中有多少个单词，单词之间用空格分隔。
#include<stdio.h>
          main()
    {
        char  s[81];
        int   i , c, num=0,word=0;
        【1】;
        for(i=0;(c=s[i])!=’\0’;i++)
            if(c==32)  【2】;
            else if (word==0)  {word=1; 【3】;}   
        printf("there  are  %d  words.\n",num);
    } 
          
17. 下面程序完成功能是：判定用户输入的正整数是否为“回文数”，所谓“回文数”是指正读反读都相同的数。请填空。
#include<stdio.h>
          main()
          { 
              int  buffer[10], i,k,flag;
              long  number ,n;
              printf("please input  one  number");
              scanf("%ld",&number);
              k=0;
              n=number;
              do 
              {  【1】 ;
                  k=k+1;
                  n=n/10;
              }while (n!=0);
              flag=1;
              for( i=0;i<=(k-1)/2;i++)
                  if  (  【2】  )
                      flag=0;
              if(flag) 
                  printf("%ld  is  huiwenshu\n",number);
              else   printf("%ld  is  not  huiwenshu\n",number);
          }
三、编程题

1.
/*
 编程在一个已知的字符串中查找最长单词，假定字符串中只含字母和空格，用空格来分隔单词。
 */


2.
/*
 输入6个字符串，并对它们按从小到大的顺序排序后输出。
 */

3.
/*
 随机生成一个三维数组，编程求深度的平均值，保存在一个二维数组中。
 */

4.
/*
 找出一个二维数组中的“鞍点”，即该位置上的元素在该行中最大，在该列中最小（也可能没鞍点），打印出有关信息。
 */

