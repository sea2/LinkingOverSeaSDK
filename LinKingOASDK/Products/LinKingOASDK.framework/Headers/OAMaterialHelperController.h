
#import "OALertPpController.h"
@class OATopWith;
NS_ASSUME_NONNULL_BEGIN

@interface OAMaterialHelperController : OALertPpController
@property (nonatomic,copy)void(^bindingCompleteCallBack)(OATopWith *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
