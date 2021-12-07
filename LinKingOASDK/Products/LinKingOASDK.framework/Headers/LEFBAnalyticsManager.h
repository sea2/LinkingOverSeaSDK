//
//  LEFBAnalyticsManager.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/19.
//  Copyright © 2020 "". All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEFBAnalyticsManager : NSObject


+ (instancetype)shared;

/// 完成注册
/// @param registrationMethod registrationMethod description
- (void)logCompleteRegistrationEvent:(NSString *)registrationMethod;
/// 教程打点
/// @param contentId contentId description
/// @param success success description
- (void)logCompletedTutorialEvent:(NSString*)contentId success:(BOOL)success;

/// 等级打点
/// @param level level description
- (void)logAchievedLevelEvent:(NSString*)level;

/// 解锁
/// @param description description description
- (void)logUnlockedAchievementEvent:(NSString*)description;

/// 发起结账事件
/// @param contentId contentId description
/// @param contentType contentType description
/// @param numItems numItems description
/// @param paymentInfoAvailable paymentInfoAvailable description
/// @param currency currency description
/// @param totalPrice totalPrice description
- (void)logInitiatedCheckoutEvent:(NSString*)contentId contentType:(NSString*)contentType numItems:(int)numItems  paymentInfoAvailable:(BOOL)paymentInfoAvailable currency:(NSString*)currency valToSum:(double)totalPrice;

/// 购买事件
/// @param numItems numItems description
/// @param contentType contentType description
/// @param contentId contentId description
/// @param currency currency description
/// @param price price description
- (void)logPurchasedEvent:(int)numItems contentType:(NSString*)contentType contentId:(NSString*)contentId currency:(NSString*)currency valToSum:(double)price;



/// 自定义事件
/// @param eventName 事件名
/// @param params 参数
- (void)customeLogEventName:(NSString *)eventName withParameters:(NSDictionary *)params;
/// 自定义事件
/// @param eventName 事件名
- (void)customeLogEventName:(NSString *)eventName;
/// 自定义事件
/// @param eventName 事件名
/// @param valueToSum 求和
/// @param params 参数
- (void)customeLogEventName:(NSString *)eventName valueToSum:(double)valueToSum withParameters:(NSDictionary *)params;
@end

NS_ASSUME_NONNULL_END
