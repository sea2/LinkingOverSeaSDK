//
//  LEBindingApi.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/16.
//  Copyright © 2020 "". All rights reserved.
//

#import "LEBaseApi.h"
@class LEUser;

NS_ASSUME_NONNULL_BEGIN

@interface LEBindingApi : LEBaseApi

+ (void)appleBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,LEUser *user))complete;
+ (void)googleBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,LEUser *user))complete;
+ (void)facebookBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,LEUser *user))complete;
+ (void)emailBindingAccountWithEmail:(NSString *)email code:(NSString *)code password:(NSString *)password  complete:(void(^)(NSError *error,LEUser *user))complete;

@end

NS_ASSUME_NONNULL_END
