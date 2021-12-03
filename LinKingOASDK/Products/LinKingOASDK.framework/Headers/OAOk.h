
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN



typedef NS_ENUM(NSInteger,LEPLATFORM) {
    LEPLATFORM_NONE,
    LEPLATFORM_Facebook,
    LEPLATFORM_IronSource
};

typedef NS_ENUM(NSInteger, LEADTYPE) {
    ADTYPE_REWARDVIDEO = 0,
    ADTYPE_INTERSTITAL = 1,
    ADTYPE_BANNER = 2,
};
typedef NS_ENUM(NSInteger,LEPAYUSERTYPE) {
    LE_UNDEFINED = 0,  
    LE_PAY = 1,        
    LE_NOPAY = 2       
};


@protocol LEAdManagerDelegate <NSObject>

@optional

- (void)bannerAdDidLoadFail:(NSError * _Nullable)error;
- (void)bannerAdDidClose;
- (void)bannerAdDidClick;
- (void)bannerAdDidVisible;


- (void)rewardAdDidLoadFail:(NSError * _Nullable)error;
- (void)rewardAdDidClose;
- (void)rewardAdDidClick;
- (void)rewardAdDidVisible;
- (void)rewardAdWinReward;



- (void)interstitialAdDidLoadFail:(NSError * _Nullable)error;
- (void)interstitialAdDidClose;
- (void)interstitialAdDidClick;
- (void)interstitialAdDidVisible;

- (void)adDidFinishLoading:(LEADTYPE)type;


@end

@interface OAOk : NSObject

@property (nonatomic, assign,readonly) LEPLATFORM platform;
@property (nonatomic, weak) id <LEAdManagerDelegate>delegate;
+ (instancetype)shared;

- (void)registerAd;

- (void)initAd:(LEADTYPE)type rootViewController:(UIViewController * _Nonnull)viewController superView:(UIView * _Nullable)superView;

- (void)showBanner;
- (void)showInterstitialAd;
- (void)showRewardVideoAd;

- (void)showBannerPayuser:(LEPAYUSERTYPE)type;
- (void)showInterstitialAdPayuser:(LEPAYUSERTYPE)type;
- (void)showRewardVideoAdPayuser:(LEPAYUSERTYPE)type;

@end

NS_ASSUME_NONNULL_END
