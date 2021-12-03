
#import "OAGameplaceholdbg.h"

NS_ASSUME_NONNULL_BEGIN

@interface OADesign : OAGameplaceholdbg
+ (void)fetchCheckCodeRegisterEmailCode:(NSString *)email complete:(void(^)(NSError * __nullable error))complete;
+ (void)registerAndLoginWithEmail:(NSString *)email checkCode:(NSString * __nullable)code password:(NSString *)password complete:(void(^)(NSError * __nullable error))complete;
+ (void)fetchCheckCodeForgetPasswordEmailCode:(NSString *)email complete:(void(^)(NSError * __nullable error))complete;
+ (void)reserPaswwordEmail:(NSString *)email checkCode:(NSString *)code password:(NSString *)password complete:(void(^)(NSError * __nullable error))complete;

+ (void)fetchBindingEmailCode:(NSString *)email complete:(void(^)(NSError * __nullable error))complete;
@end

NS_ASSUME_NONNULL_END
