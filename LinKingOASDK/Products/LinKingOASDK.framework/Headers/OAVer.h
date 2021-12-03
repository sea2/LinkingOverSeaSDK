
#import <UIKit/UIKit.h>
@class LEFacebookHelper;
@class FBSDKLoginManagerLoginResult;
NS_ASSUME_NONNULL_BEGIN

@interface OAVer : NSObject
+ (instancetype)shared;

- (void)loginRootViewController:(UIViewController * _Nonnull)viewController complete:(void(^_Nullable)(FBSDKLoginManagerLoginResult* _Nullable result, NSError * _Nonnull error))complete;

-(void)logOut;


@end

NS_ASSUME_NONNULL_END
