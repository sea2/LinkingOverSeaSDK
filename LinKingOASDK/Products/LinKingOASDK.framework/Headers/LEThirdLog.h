//
//  LEThirdLog.h
//  LinKingEnSDK
//
//  Created by leon on 2021/6/3.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef NS_ENUM(NSUInteger,LEThirdLogLevel) {
    /* 关闭日志 */
    LEThirdLogLevelOff = 0,
    /* 开启日志 */
    LEThirdLogLevelOn = 1
};
NS_ASSUME_NONNULL_BEGIN

@interface LEThirdLog : NSObject
+ (void)setThirdLog:(LEThirdLogLevel)level;
+ (void)setAppsFlyerisDebug:(BOOL)isDebug;
@end

NS_ASSUME_NONNULL_END
