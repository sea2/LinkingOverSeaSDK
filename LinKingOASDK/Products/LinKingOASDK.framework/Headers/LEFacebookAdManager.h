//
//  LEFacebookAdManager.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/17.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEFacebookAdManager : NSObject


@property (nonatomic, copy) void(^bannerAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidLoadFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^bannerAdViewWillLogImpressionCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidClickCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidFinishHandlingClickCallBack)(void);

@property (nonatomic, copy) void(^interstitialAdDidLoadCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdWillLogImpressionCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidClickCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdWillCloseCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidCloseCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidFailCallBack)(NSError *error);


@property (nonatomic, copy) void(^rewardAdDidLoadCallBack)(void);
@property (nonatomic, copy) void(^rewardAdDidFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^rewardAdDidClickCallBack)(void);
@property (nonatomic, copy) void(^rewardAdVideoCompleteCallBack)(void);
@property (nonatomic, copy) void(^rewardAdDidCloseCallBack)(void);
@property (nonatomic, copy) void(^rewardAdWillCloseCallBack)(void);
@property (nonatomic, copy) void(^rewardAdWillLogImpressionCallBack)(void);



+ (instancetype)shared;

/// 初始化广告
- (void)registerFacebookAd;

/// 初始化Banner广告
- (void)initializationFacebookBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView frame:(CGRect)frame;
/// 展示Banner广告
- (void)showFacebookBanner;
/// 移除Banner
- (void)removeBannerViewFromSuperView;


/// 初始化插屏广告
- (void)initializationFacebookInterstitialAd:(UIViewController *)viewController;
/// 展现插屏
- (void)showFacebookInterstitialAd;


/// 初始化激励视频广告
- (void)initializationFacebookRewardVideoAd:(UIViewController *)viewController;
/// 展示激励视频广告
- (void)showFacebookRewardVideoAd;



@end

NS_ASSUME_NONNULL_END
