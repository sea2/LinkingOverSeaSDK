//
//  LEPointApi.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/16.
//  Copyright © 2020 "". All rights reserved.
//

#import "LEBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LEPointApi : LEBaseApi
/// 打点事件接口
/// @param eventName <#eventName description#>
/// @param values <#values description#>
/// @param complete <#complete description#>
+ (void)pointEventName:(NSString *)eventName withTp:(NSString *_Nullable)tp withValues:(NSDictionary *_Nullable)values complete:(void(^_Nullable)(NSError *_Nullable error))complete;

/// 广告打点
/// @param eventName <#eventName description#>
/// @param values <#values description#>
/// @param complete <#complete description#>
+ (void)adPointEventName:(NSString * _Nullable)eventName withValues:(NSDictionary * _Nullable)values complete:(void(^_Nullable)(NSError * _Nullable error))complete;

/// 接口错误收集
/// @param event event description
/// @param eventName eventName description
/// @param infos infos description
/// @param complete complete description
+ (void)logReportServerWithEvent:(NSString *)event eventName:(NSString *)eventName infos:(NSDictionary *_Nullable)infos WithOtherLogInfo:(NSDictionary*_Nullable)logInfors complete:(void(^_Nullable)(NSError *_Nullable error))complete;

+ (NSMutableDictionary *)getReportLogInfo;
@end

NS_ASSUME_NONNULL_END
