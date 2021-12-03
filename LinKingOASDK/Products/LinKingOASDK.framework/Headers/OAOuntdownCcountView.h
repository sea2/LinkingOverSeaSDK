
#import "OALertPpController.h"
@class OATopWith;
NS_ASSUME_NONNULL_BEGIN

@interface OAOuntdownCcountView : OALertPpController
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^loginCompleteCallBack)(OATopWith *_Nullable user,NSError * _Nullable error);
@property (nonatomic, copy) void(^gotoRegisterEmailViewController)(void);
@property (nonatomic, copy) void(^gotoLoginEmailViewController)(void);
@end

NS_ASSUME_NONNULL_END
