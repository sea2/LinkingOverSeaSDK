
#import "OALertPpController.h"

@class OATopWith;
NS_ASSUME_NONNULL_BEGIN

@interface OAIconRegisterController : OALertPpController
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^loginCompleteCallBack)(OATopWith *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
