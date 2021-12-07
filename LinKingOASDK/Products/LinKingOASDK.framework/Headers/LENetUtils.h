//
//  LENetUtils.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/10.
//  Copyright © 2020 "". All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LENetUtils : NSObject
+ (NSString *)randomString;
+ (NSString*)md5Str:(NSString *)str;
+ (NSString *)getSignData:(NSDictionary *)parameters;
+(NSString*)dictionaryToJson:(NSDictionary *)dic;
+ (NSString *)deviceInfo;
@end

NS_ASSUME_NONNULL_END
