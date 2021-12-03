

#import "OAGameplaceholdbg.h"
NS_ASSUME_NONNULL_BEGIN

@class OATopWith;
@interface OASource : OAGameplaceholdbg
+ (void)quickLoginComplete:(void(^)(NSError *error,OATopWith *user))complete;
+ (void)appleLoginWithToken:(NSString *)token complete:(void(^)(NSError * _Nullable error,OATopWith *_Nullable user))complete;
+ (void)facebookLoginWithToken:(NSString *)token complete:(void(^)(NSError * _Nullable error,OATopWith *_Nullable user))complete;
+ (void)googleLoginWithToken:(NSString *)token complete:(void(^)(NSError *_Nullable error,OATopWith *_Nullable user))complete;
+ (void)autoLoginComplete:(void(^)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
