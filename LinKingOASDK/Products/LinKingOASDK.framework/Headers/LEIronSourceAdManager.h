//
//  LEIronSourceAdManager.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/17.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEIronSourceAdManager : NSObject


@property (nonatomic, copy) void(^bannerAdDidLoadCallBack)(void);
@property (nonatomic, copy) void(^bannerAdDidLoadFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^bannerAdDidClickCallBack)(void);
@property (nonatomic, copy) void(^bannerAdWillPresentCallBack)(void);
@property (nonatomic, copy) void(^bannerAdDidDismissCallBack)(void);
@property (nonatomic, copy) void(^bannerAdWillLeaveCallBack)(void);

 
@property (nonatomic, copy) void(^interstitialAdDidLoadCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidShowCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidShowFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^interstitialAdDidClickCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidCloseCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidOpenCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidLoadFailCallBack)(NSError *error);


@property (nonatomic, copy) void(^rewardAdHasChangedCallBack)(void);
@property (nonatomic, copy) void(^rewardADidReceiveCallBack)(void);
@property (nonatomic, copy) void(^rewardADidShowFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^rewardADidOpenCallBack)(void);
@property (nonatomic, copy) void(^rewardADidCloseCallBack)(void);
@property (nonatomic, copy) void(^rewardADidClickCallBack)(void);
@property (nonatomic, copy) void(^rewardADidStartCallBack)(void);
@property (nonatomic, copy) void(^rewardADidEndCallBack)(void);

+ (instancetype)shared;

/// 初始化广告
- (void)registerIronSourceAd;


/// 初始化Banner广告
- (void)initializationIronSourceBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView frame:(CGRect)frame;
/// 展示Banner广告
- (void)showIronSourceBanner;
/// 移除Banner
- (void)removeBannerViewFromSuperView;


/// 初始化插屏广告
- (void)initializationIronSourceInterstitialAd:(UIViewController *)viewController;
/// 展现插屏
- (void)showIronSourceInterstitialAd;


/// 初始化激励视频广告
- (void)initializationIronSourceRewardVideoAd:(UIViewController *)viewController;
/// 展示激励视频广告
- (void)showIronSourceRewardVideoAd;

@end

NS_ASSUME_NONNULL_END
