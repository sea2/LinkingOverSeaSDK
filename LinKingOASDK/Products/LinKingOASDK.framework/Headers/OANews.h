
#import "OAGameplaceholdbg.h"
@class OATopWith;

NS_ASSUME_NONNULL_BEGIN

@interface OANews : OAGameplaceholdbg

+ (void)appleBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,OATopWith *user))complete;
+ (void)googleBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,OATopWith *user))complete;
+ (void)facebookBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,OATopWith *user))complete;
+ (void)emailBindingAccountWithEmail:(NSString *)email code:(NSString *)code password:(NSString *)password  complete:(void(^)(NSError *error,OATopWith *user))complete;

@end

NS_ASSUME_NONNULL_END
