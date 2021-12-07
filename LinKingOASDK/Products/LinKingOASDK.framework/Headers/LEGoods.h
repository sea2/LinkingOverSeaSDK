//
//  LEGoods.h
//  LinKingEnSDK
//
//  Created by leon on 2020/9/8.
//  Copyright © 2020 "". All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEGoods : NSObject
- (instancetype)initWithDictionary:(NSDictionary *)product;
/// 商品ID
@property (nonatomic,copy) NSString *productId;
/// 商品名
@property (nonatomic,copy) NSString *name;
/// 商品数量
@property (nonatomic,strong) NSNumber *num;
//  商品描述（Apple）
@property (nonatomic, copy) NSString *goodsDescription;
/// 商品价格
@property (nonatomic,strong) NSNumber *amount;
/// 本地获取字符串显示 eg:￥30 （Apple）
@property (nonatomic, copy) NSString *priceLocale;
@end

NS_ASSUME_NONNULL_END
