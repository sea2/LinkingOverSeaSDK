//
//  LEUserEntity.h
//  LinKingEnSDK
//
//  Created by leon on 2021/6/4.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>
@class LEUser;
NS_ASSUME_NONNULL_BEGIN

@interface LEUserEntity : NSObject
+ (instancetype)shared;
@property (nonatomic, strong)LEUser * _Nullable user;
@end

NS_ASSUME_NONNULL_END
