//
//  LEAdConfInfo.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/17.
//  Copyright © 2020 "". All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEAdConfInfo : NSObject
+ (instancetype)shared;
/// 获取广告的配置信息，返回具体某一种类型的广告字典信息
- (NSDictionary *)getAdConfInfo:(NSString *)key;
// 获取广告加载比例
- (NSArray *)getAdConfInfos:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
