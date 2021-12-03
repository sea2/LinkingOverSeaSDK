
#import "OALertPpController.h"
@class OATopWith;
NS_ASSUME_NONNULL_BEGIN

@interface OAAlterBindView : OALertPpController
@property (nonatomic, copy) void(^closeViewController)(void);
@property (nonatomic, copy) void(^gotoBackViewController)(void);
@property (nonatomic, copy) void(^registerCompleteCallBack)(OATopWith * _Nonnull user, NSError * _Nonnull error);
@property (nonatomic, copy) void(^gotoLoginEmailViewController)(void);
@end

NS_ASSUME_NONNULL_END
