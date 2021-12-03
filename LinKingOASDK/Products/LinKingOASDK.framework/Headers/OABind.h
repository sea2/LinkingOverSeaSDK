
#import <UIKit/UIKit.h>

@class GIDGoogleUser;
NS_ASSUME_NONNULL_BEGIN

@interface OABind : NSObject
+ (instancetype)shared;
- (void)initializationFireBaseSDK;
- (void)loginGoogleRootViewController:(UIViewController *)rootViewController complete:(void(^)(GIDGoogleUser * _Nullable user,NSError *_Nullable error))complete;
- (void)logoutGoogle;
- (BOOL)handleURL:(NSURL *)url;
@end

NS_ASSUME_NONNULL_END
