1.
int main(int argc, const char * argv[])
{
    
    unsigned result;//定义无符号数
    int a;
    printf("请输入一个整数\n");
    scanf("%d", &a);
    //    最关键的核心 15的二进制为 0000 1111 所以这里使用15
    int b = 15;
    //    所谓的翻转就是0变1 1变0
    result = a ^ b;
    printf("result = %d",result);
    return 0;
}

2.
unsigned move(unsigned value, int n)
{
    unsigned z;
    
    if (n > 0) {
        //        循环左移
        z = (value >> (32 - n)) |(value << n);
    }else
    {
        //        循环右移
        n = -n;
        z = (value << (32 - n)) |(value >> n);
        
    }
    
    return z;
}
int main(int argc, const char * argv[])
{
    
    unsigned a;
    int n;
    printf("请输入一个八进制输:\n");
    scanf("%d", &a);
    printf("请输入要移位的位数:\n");
    scanf("%d", &n);
    printf("移位后的结果是：%o\n", move(a, n));
    return 0;
}
