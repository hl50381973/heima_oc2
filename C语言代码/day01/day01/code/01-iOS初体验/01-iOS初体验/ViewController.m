//
//  ViewController.m
//  01-iOS初体验
//
//  Created by Apple on 14/10/29.
//  Copyright (c) 2014年 Apple. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end

@implementation ViewController


- (IBAction)konckOut {
    
    NSMutableArray *arrayM = [NSMutableArray array];
    
    for (int i = 0 ; i < 81; i++) {
        NSString *imageName = [NSString stringWithFormat:@"knockout_%02d.jpg",i];
        UIImage *image = [UIImage imageNamed:imageName];
        
        [arrayM addObject:image];
    }
    
    self.imageView.animationImages = arrayM;
    
    self.imageView.animationDuration = 0.05 * 81;
    
    self.imageView.animationRepeatCount = 1;
    
    
    [self.imageView startAnimating];
}

- (IBAction)click:(id)sender {
    
//    [UIApplication sharedApplication].applicationIconBadgeNumber = 10;
    
    CATransition *animation = [CATransition animation];
    
    animation.type = @"cube";
    
    animation.duration = 1;
    
    animation.repeatCount = 1;
    
    [self.view.layer addAnimation:animation forKey:nil];
    
    
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
