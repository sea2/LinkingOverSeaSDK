
#import "OALertPpController.h"
@class OATopWith;
NS_ASSUME_NONNULL_BEGIN

@interface OAAseIndingView : OALertPpController
@property (nonatomic,copy)void(^bindingCompleteCallBack)(OATopWith *_Nullable user,NSError * _Nullable error);
@property (nonatomic, copy) void(^gotoBindingEmailViewController)(void);
@end

NS_ASSUME_NONNULL_END
