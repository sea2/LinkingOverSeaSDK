//
//  LEFBShareManager.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/19.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEFBShareManager : NSObject

+ (instancetype)shared;

/// 分享
/// @param viewController viewController description
- (void)shareToFacebook:(UIViewController *)viewController omplete:(void(^)(NSDictionary <NSString *, id> * _Nullable results,BOOL isCancel,NSError  * _Nullable error))complete;

/// 打开商店中的应用
- (void)openAppStoreApplication;

/// 打开YouTuBr
- (void)jumpYouTuBe;

/// 打开Discord
- (void)jumpDiscord;
// 展示粉丝页
- (void)showFacebookFansPage;


@end

NS_ASSUME_NONNULL_END
