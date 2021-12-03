
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OACacheScroll : NSObject

+ (instancetype)shared;

- (void)shareToFacebook:(UIViewController *)viewController omplete:(void(^)(NSDictionary <NSString *, id> * _Nullable results,BOOL isCancel,NSError  * _Nullable error))complete;

- (void)openAppStoreApplication;

- (void)jumpYouTuBe;

- (void)jumpDiscord;
- (void)showFacebookFansPage;


@end

NS_ASSUME_NONNULL_END
