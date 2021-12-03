
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAWork : NSObject


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

- (void)registerIronSourceAd;


- (void)initializationIronSourceBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView frame:(CGRect)frame;
- (void)showIronSourceBanner;
- (void)removeBannerViewFromSuperView;


- (void)initializationIronSourceInterstitialAd:(UIViewController *)viewController;
- (void)showIronSourceInterstitialAd;


- (void)initializationIronSourceRewardVideoAd:(UIViewController *)viewController;
- (void)showIronSourceRewardVideoAd;

@end

NS_ASSUME_NONNULL_END
