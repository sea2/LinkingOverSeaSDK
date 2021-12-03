
#import "OALertPpController.h"

NS_ASSUME_NONNULL_BEGIN

@interface OABaseView : OALertPpController
@property (nonatomic, copy) void(^closeViewController)(void);
@property (nonatomic, copy) void(^gotoBackViewController)(void);
@property (nonatomic, copy) void(^gotoLoginEmailViewController)(void);
@end

NS_ASSUME_NONNULL_END
