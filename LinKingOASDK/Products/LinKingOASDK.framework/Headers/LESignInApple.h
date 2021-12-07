//
//  LESignInApple.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/15.
//  Copyright © 2020 "". All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LESignInApple : NSObject
+ (instancetype)shared;
- (void)loginAppleWithComplete:(void(^)(BOOL success))complete;
// 1:appleID 2.password 3. 验证失败
@property (nonatomic, copy) void (^didCompleteWithAuthorization)(NSInteger type,NSString * _Nullable user,NSString * _Nullable token,NSString * _Nullable code,NSString * _Nullable password);
@property (nonatomic, copy) void (^didCompleteWithError)(NSError *error);
@end

NS_ASSUME_NONNULL_END
