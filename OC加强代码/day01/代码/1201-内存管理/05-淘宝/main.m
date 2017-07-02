//
//  main.m
//  05-淘宝
//
//  Created by Apple on 14/12/1.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CZSeller.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
      
        CZSeller *seller = [[CZSeller alloc] init];
        seller.name = @"小苹果";
        
        CZShop *shop = [[CZShop alloc] init];
        shop.name = @"苹果专卖";
//      这一行，建立seller与shop,这样seller 就拥有了一个shop
        seller.shop = shop;
        
        CZProduct *product = [[CZProduct alloc] init];
        
        shop.product = product;
        
        
        [seller release];
        [shop release];
        [product release];
    }
    return 0;
}
