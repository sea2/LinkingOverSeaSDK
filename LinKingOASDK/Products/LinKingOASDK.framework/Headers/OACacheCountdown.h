#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LEOauthManagerDelegate <NSObject>

@required
- (void)logoutSDKCallBack;
- (void)changeAccountCallBack;
@end

@class OATopWith;
@interface OACacheCountdown : NSObject
+ (instancetype)shared;
@property (nonatomic, assign) id<LEOauthManagerDelegate>delegate;
@property (nonatomic, strong) UIViewController *viewController;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^bindingAccountCompleteCallBack)(OATopWith *user,NSError *error);

- (void)login:(UIViewController*)rootViewController onFinished:(void(^)(OATopWith *user,NSError *error))complete;
- (void)logout;
- (void)loginApiWithRootViewController:(UIViewController *_Nullable)viewController complete:(void(^)(OATopWith *user,NSError *error))complete;
- (void)showFloatViewDashboard:(UIViewController *)viewController;
- (void)hiddenFloatViewDashboard;
-(void)showMatrixVieWithFrame:(CGRect)frame;
- (void)hiddenMatrixView;

@end

NS_ASSUME_NONNULL_END
