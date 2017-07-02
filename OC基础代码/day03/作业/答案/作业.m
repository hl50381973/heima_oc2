//习题1

//定义一个表示颜色的枚举
typedef enum _CZColor{
    CZColorWhite,//白色
    CZColorBlack,//黑色
    CZColorBlue//蓝色
} CZColor;

@interface CZWindowsPhone : NSObject
{
    CZColor _color;//颜色
    float _size;//尺寸
    int   _ram;//内存
    NSString *_cpu;//处理器
}

- (void) setColor:(CZColor) color;

- (CZColor) color;

- (void) setSize:(float) size;

- (float) size;

- (void) setRam:(int) ram;

- (int) ram;

- (void) setCpu:(NSString *) cpu;

- (NSString *) cup;

/**播放音乐*/
- (void) playMusic:(NSString *) music;
/**看电视*/
- (void) playMovie: (NSString *) movie;
/**发送信息*/
- (void) sendMessage:(NSString *) content to:(NSString *) phoneNum;
/**照相*/
- (void) takePicture;


@end

@implementation CZWindowsPhone


- (void) setColor:(CZColor) color
{
    _color = color;
}

- (CZColor) color
{
    return _color;
}

- (void) setSize:(float) size
{
    _size = size;
}

- (float) size
{
    return _size;
}

- (void) setRam:(int) ram
{
    _ram = ram;
}

- (int) ram
{
    return _ram;
}

- (void) setCpu:(NSString *) cpu
{
    _cpu = cpu;
}

- (NSString *) cup
{
    return _cpu;
}

/**播放音乐*/
- (void) playMusic:(NSString *) music
{
    NSLog(@"播放音乐%@ ",music);
}
/**看电视*/
- (void) playMovie: (NSString *) movie
{
    NSLog(@"播放电影%@ ",movie);
}
/**发送信息*/
- (void) sendMessage:(NSString *) content to:(NSString *) phoneNum
{
    NSLog(@"给%@发送了一封内容为：%@的邮件",phoneNum,content);
}
/**照相*/
- (void) takePicture
{
    NSLog(@"拍照片");
}

@end


//习题2

@interface CZMovie : NSObject
{
    NSString *_name;//电影名称
    NSString *_actors;//演员
    NSString *_releaseTime;//上映时间
}

- (void) setName:(NSString *)name;

- (NSString *) name;

- (void) setActors:(NSString *) actors;

- (NSString *) actors;

- (void) setReleaseTime:(NSString *) releaseTime;

- (NSString *) releaseTime;


@end

@implementation CZMovie


- (void) setName:(NSString *)name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}

- (void) setActors:(NSString *) actors
{
    _actors = actors;
}

- (NSString *) actors
{
    return _actors;
}

- (void) setReleaseTime:(NSString *) releaseTime
{
    _releaseTime = releaseTime;
}

- (NSString *) releaseTime
{
    return _releaseTime;
}


@end

//习题3

@interface CZCalculator : NSObject

/**计算一个数的平方*/
+ (double) squareOfNum:(double) num;
/**计算两个数的差*/
+ (double) minusOfNum:(double) num andOther:(double) other;
/**计算两个数的和*/
+ (double) sumOfNum:(double) num andOther:(double) other;

@end


@implementation CZCalculator

/**计算一个数的平方*/
+ (double) squareOfNum:(double) num
{
    return num * num;
}
/**计算两个数的差*/
+ (double) minusOfNum:(double) num andOther:(double) other
{
    return num - other;
}
/**计算两个数的和*/
+ (double) sumOfNum:(double) num andOther:(double) other
{
    return num + other;
}
@end


@interface CZWeibo : NSObject
{
    NSString *_autor;//作者
    NSString * _content;//微博内容
    NSString * _sendTime;//发送时间
    BOOL      _vip;//是否为Vip
    BOOL      _vertified;//是否已认证
    int       _commentaryNum;//评论数
    int       _dianzanNum;//点赞数
    
}

- (void) setAutor:(NSString *) autor;

- (NSString *) autor;

- (void) setContent:(NSString *) content;

- (NSString *) content;

- (void) setSendTime:(NSString *) sendTime;

- (NSString *) sendTime;

- (void) setVip:(BOOL) vip;

- (BOOL) isVip;

- (void) setVertified:(BOOL) vertified;

- (BOOL) isVertified;

- (void) setCommentaryNum:(int) commentaryNum;

- (int) commentaryNum;

- (void) setDianzanNum:(int)dianzanNum;

- (int) dianzanNum;


@end

@implementation CZWeibo

- (void) setAutor:(NSString *) autor
{
    _autor = autor;
}

- (NSString *) autor
{
    return _autor;
}

- (void) setContent:(NSString *) content
{
    _content = content;
}

- (NSString *) content
{
    return _content;
}

- (void) setSendTime:(NSString *) sendTime
{
    _sendTime = sendTime;
}

- (NSString *) sendTime
{
    return _sendTime;
}

- (void) setVip:(BOOL) vip
{
    _vip = vip;
}

- (BOOL) isVip
{
    return _vip;
}

- (void) setVertified:(BOOL) vertified
{
    _vertified = vertified;
}

- (BOOL) isVertified
{
    return _vertified;
}

- (void) setCommentaryNum:(int) commentaryNum
{
    _commentaryNum = commentaryNum;
}

- (int) commentaryNum
{
    return _commentaryNum;
}

- (void) setDianzanNum:(int)dianzanNum
{
    _dianzanNum = dianzanNum;
}

- (int) dianzanNum
{
    return _dianzanNum;
}

@end

//习题5

@interface CZA : NSObject
{
    int _v;
}

- (void) setV:(int) v;

- (int) v;

-(void) guessNum:(int) num;

@end

@implementation CZA

- (void) setV:(int) v
{
    _v = v;
}

- (int) v
{
    return _v;
}
/**
 *  猜数
 */
-(void) guessNum:(int) num
{
    if(num == _v)
    {
        NSLog(@"猜对了");
    }else if(num > _v)
    {
        NSLog(@"猜大了");
    }else{
        NSLog(@"猜小了");
    }
}

@end


//习题6
@interface CZIPad : NSObject
{
    CZColor _color;
    float _size;
}

- (void) setColor:(CZColor) color;

- (CZColor) color;

- (void) setSize:(int) size;

- (float) size;
/**
 *  下载软件
 */
- (void) downloadSoftware;
/**
 *  安装软件
 */
- (void) installSoftware;
/**
 *  玩游戏
 */
- (void) playGame;
/**
 *  播放音乐
 */
- (void) playMusic;
/**
 *搜索信息
 */
- (void) searchInfo;
/**
 *  发送邮件
 */
- (void) sendEmail;
/**
 *  编辑Words
 */
- (void) editWords;

@end

@implementation CZIPad

- (void) setColor:(CZColor) color
{
    _color = color;
}

- (CZColor) color
{
    return _color;
}

- (void) setSize:(int) size
{
    _size = size;
}

- (float) size
{
    return _size;
}
/**
 *  下载软件
 */
- (void) downloadSoftware
{
    NSLog(@"下载软件");
}
/**
 *  安装软件
 */
- (void) installSoftware
{
    NSLog(@"安装软件");
}
/**
 *  玩游戏
 */
- (void) playGame
{
    NSLog(@"玩游戏");
}
/**
 *  播放音乐
 */
- (void) playMusic
{
    NSLog(@"播放音乐");
}
/**
 *搜索信息
 */
- (void) searchInfo
{
    NSLog(@"搜索信息");
}
/**
 *  发送邮件
 */
- (void) sendEmail
{
    NSLog(@"发送邮件！");
}
/**
 *  编辑Words
 */
- (void) editWords
{
    NSLog(@"编辑words");
}

@end


//习题7

//公交卡
@interface CZBusCard : NSObject
{
    float _money;
}

- (void) setMoney:(float) money;

- (float) money;

@end

@implementation CZBusCard


- (void) setMoney:(float) money
{
    _money = money;
}

- (float) money
{
    return _money;
}


@end

//充值系统
@interface CZRechargeSystem : NSObject

//投币
+ (NSString *) buyTicket:(int) money;
//充值公交卡
+ (void) putCard:(CZBusCard * ) card  andMoney:(int) money;

@end


@implementation CZRechargeSystem

//投币
+ (NSString *) buyTicket:(int) money
{
    return [NSString stringWithFormat:@"%d元的票",money];
}
//充值公交卡
+ (void) putCard:(CZBusCard * ) card  andMoney:(int) money
{
    if (money == 20 || money == 50 || money == 100) {
        float m = [card money] + money;
        [card setMoney:m];
    }else{
        NSLog(@"%d的金额不支持，请投入20、50、100元",money);
    }
}

@end


//习题8(需求不明)

//习题9

@interface CZATM : NSObject
{
    int _money;
}
//判断真假币
- (BOOL) isGenuine:(int) money;
//存钱
- (void) saveMoney:(int) money;
//取钱
- (void) takeMoney:(int) money;


@end


@implementation CZATM

//判断真假币
- (BOOL) isGenuine:(int) money;
{
    NSLog(@"扫描中...");
    if(money == 50 || money == 100)
    {
        NSLog(@"真币");
        return YES;
    }else{
        NSLog(@"假币");
        return false;
    }
}
//存钱
- (void) saveMoney:(int) money
{
    if ([self isGenuine:money]) {
        _money += money;
    }else{
        NSLog(@"你存入的是假币，被没收！");
    }
}
//取钱
- (void) takeMoney:(int) money
{
    if(_money > money)
    {
        _money -= money;
        NSLog(@"取款成功！");
    }else{
        NSLog(@"金额不足！");
    }
}

@end

//习题10

@interface CZFood : NSObject
{
    NSString *_name;//菜名
    float     _price;//价格
    NSString *_info;//描述
}

-(void) setName:(NSString *) name;

- (NSString *) name;

- (void) setPrice:(float) price;

- (float) price;

- (void) setInfo:(NSString *) info;

- (NSString *) info;

@end

@implementation CZFood


-(void) setName:(NSString *) name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}

- (void) setPrice:(float) price
{
    _price = price;
}

- (float) price
{
    return _price;
}

- (void) setInfo:(NSString *) info
{
    _info =  info;
}

- (NSString *) info
{
    return _info;
}

@end

//菜单
@interface  CZCarte : NSObject
{
    NSMutableArray * _foods;
}
/**添加菜*/
- (void) addFood:(CZFood *) food;
/**删除菜*/
- (void) removeFood:(CZFood *) food;

/**打印菜单*/
- (void) printCarte;

@end

@implementation CZCarte

/**添加菜*/
- (void) addFood:(CZFood *) food
{
    [_foods addObject:food];
}
/**删除菜*/
- (void) removeFood:(CZFood *) food
{
    [_foods removeObject:food];
}

/**打印菜单*/
- (void) printCarte
{
    for (CZFood *food in _foods) {
        NSLog(@"菜名：%@",[food name]);
        NSLog(@"价格：%f",[food  price]);
        NSLog(@"简介：%@",[food info]);
    }
}

@end

//习题11
@interface CZCoupon : NSObject
{
    NSString * _name;//名称
    int        _money;//优惠后金额
    NSString * _usableTime;//可用时间
    NSString * _info;//描述
}

- (void) setName:(NSString *) name;

- (NSString *) name;

- (void) setMoney:(int) money;

- (int) money;

- (void) setUsableTime:(NSString *) usableTime;

- (NSString *) usableTime;

- (void) setInfo:(NSString *) info;

- (NSString *) info;
//展示信息
- (void) show;

@end

@implementation CZCoupon


- (void) setName:(NSString *) name
{
    _name = name;
}

- (NSString *) name
{
    return _name;
}

- (void) setMoney:(int) money
{
    _money = money;
}

- (int) money
{
    return _money;
}

- (void) setUsableTime:(NSString *) usableTime
{
    _usableTime = usableTime;
}

- (NSString *) usableTime
{
    return _usableTime;
}

- (void) setInfo:(NSString *) info
{
    _info = info;
}

- (NSString *) info
{
    return _info;
}
//展示信息
- (void) show
{
    NSLog(@"%@",_name);
    NSLog(@"￥%d",_money);
    NSLog(@"本优惠券%@时使用",_usableTime);
    NSLog(@"%@",_info);
}

@end
//习题12 此题超纲
