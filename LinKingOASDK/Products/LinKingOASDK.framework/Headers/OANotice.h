
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol LEAFManagerDelegate <NSObject>
- (void)onConversionDataFail:(nonnull NSError *)error;
- (void)onConversionDataSuccess:(nonnull NSDictionary *)conversionInfo;
@optional
- (void)onAppOpenAttribution:(NSDictionary*) attributionData;
- (void)onAppOpenAttributionFailure:(NSError *)error;
@end
@interface OANotice : NSObject
@property (nonatomic, weak) id<LEAFManagerDelegate>delegate;
+ (instancetype)shared;
- (void)registAppsFlyer;
- (void)loadData;

- (void)registAppsFlyerDevKey:(NSString * _Nonnull)devKey appleAppID:(NSString * _Nonnull)appleAppID isDebug:(BOOL)isDebug;

- (void)afLogLevel:(NSInteger)level score:(CGFloat)score;
- (void)afLogAddPaymentInfoSuccess:(BOOL)success;
- (void)afLogAddGoodsCartWithPrice:(NSNumber *)price goodsType:(NSString *)type currency:(NSString *)currency goodsId:(NSString *)goodsId content:(NSString *)content quantity:(int)quantity;

- (void)afLogCompletedPurchase:(NSNumber *)price orderId:(NSString *)orderId receiptId:(NSString *)receiptId;

- (void)afLogAddWishlistWithPrice:(NSNumber *)price goodsType:(NSString *)type goodsId:(NSString *)goodsId content:(NSString *)content currency:(NSString *)currency quantity:(int)quantity;

- (void)afLogCompleteRegistrationStyle:(NSString *)style;

- (void)afLogTutorialCompletionWithSuccess:(BOOL)success userId:(NSString *)userId desc:(NSString *)desc;

- (void)afLogInitiatedCheckoutWithPrice:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content  quantity:(int)quantity payment:(NSString *)payment currency:(NSString *)currency;

- (void)afLogPurchaseWithPrice:(NSNumber *)price type:(NSString *)type currency:(NSString *)currency orderId:(NSString *)orderId desc:(NSString *)desc quantity:(int)quantity;

- (void)afLogSubscribeWithPrice:(NSNumber *)price;

- (void)afLogStartTrialWithPrice:(NSNumber *)price currency:(NSString *)currency;

- (void)afLogWithRating:(CGFloat)rating contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content maxRating:(CGFloat)maxRating;

- (void)afLogSearchWithContentType:(NSString *)contentType searchWords:(NSString *)searchWords success:(BOOL)success;

- (void)afLogSpentCreditsWithPrice:(NSNumber *)price ContentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content;

- (void)afLogAchievementUnlockedWithDesc:(NSString *)desc;

- (void)afLogContentViewWithPrice:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content currency:(NSString *)currency;

- (void)afLogListViewWithContentType:(NSString *)contentType contentList:(NSArray *)contentList;

- (void)afLogAdclickWithAdStyle:(NSString *)style;

- (void)afLogAdView:(NSString *)style;

- (void)afLogShareDesc:(NSString*)desc;

- (void)afLogInvite;

- (void)afLogActive;

- (void)afLogLoginStyle:(NSString *)style;

- (void)afLogOpenedFromPushNotification;

- (void)afLogWithContentId:(NSString *)contentId;


- (void)afLogTrackEvent:(NSString *)eventName withValues:(NSDictionary *)values;


- (void)afLogTrackSetCustomerUserID:(NSString *)userId;

- (NSString *)afLogTrackAppsFlyerUID;
@end

NS_ASSUME_NONNULL_END
