//
//  LEAppleProduct.h
//  LinKingArSDK
//
//  Created by leon on 2021/2/22.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@class LEGoods;
NS_ASSUME_NONNULL_BEGIN
@interface LEAppleProduct : NSObject
+ (instancetype)shared;
/// 拉取所有商品信息
- (void)requestProductDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products))complete;
/// 拉取苹果所有商品信息
- (void)requestProductFromeAppleDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray<LEGoods *>*_Nullable products))complete;
/// 从游戏返回商品集合
- (void)requestProductFromeGameDatas:(NSArray *_Nonnull)productIds complete:(void(^_Nullable)(NSError * _Nullable error, NSArray<LEGoods *>*_Nullable products))complete;
@end
NS_ASSUME_NONNULL_END
