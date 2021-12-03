
#import "OALertPpController.h"
@class OATopWith;
NS_ASSUME_NONNULL_BEGIN

@interface OAEyLockView : OALertPpController
@property (nonatomic, copy) void(^closeViewController)(void);
@property (nonatomic, copy) void(^gotoBackViewController)(void);
@property (nonatomic, copy) void(^loginEmailCompleteCallBack)(OATopWith * _Nullable user, NSError * _Nullable error);
@property (nonatomic, copy) void(^gotoRegisterViewController)(void);
@property (nonatomic, copy) void(^gotoForgetPasswordViewController)(void);
@end

NS_ASSUME_NONNULL_END
