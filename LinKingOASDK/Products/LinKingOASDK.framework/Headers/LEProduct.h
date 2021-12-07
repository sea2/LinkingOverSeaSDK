//
//  LEProduct.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/10.
//  Copyright © 2020 "". All rights reserved.
//
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SKProduct;
@interface LEProduct : NSObject
- (instancetype)initWithArray:(SKProduct *)product;
/// 商品ID
@property (nonatomic,copy) NSString *productId;
/// 商品描述
@property (nonatomic,copy) NSString *desc;
/// 商品标题
@property (nonatomic,copy) NSString *localizedTitle;
/// 本地描述
@property (nonatomic,copy) NSString *localizedDescription;
/// 价格
@property (nonatomic,strong) NSDecimalNumber *price;
@end

NS_ASSUME_NONNULL_END
