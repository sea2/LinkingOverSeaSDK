//
//  LESystem.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/10.
//  Copyright © 2020 "". All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LESystem : NSObject<NSSecureCoding>
@property (nonatomic,copy) NSString *appID;
@property (nonatomic,copy) NSString *secretkey;
// 登录方式 guest facebook google game
@property (nonatomic,copy) NSString *loginStyle;
// facebook token  google token
@property (nonatomic,copy) NSString *token;
@property (nonatomic,copy) NSString *gameId;
@property (nonatomic,copy) NSString *userToken;
// 设置矩阵语言版本
@property (nonatomic,copy) NSString *matrixLanguage;


+ (LESystem *)getSystem;
+ (void)setSystem:(LESystem *)system;
+ (void)clearSystemConf;
@end

NS_ASSUME_NONNULL_END
