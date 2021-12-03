
#import <Foundation/Foundation.h>
@class OATopWith;
NS_ASSUME_NONNULL_BEGIN

@interface OALoginSer : NSObject
+ (instancetype)shared;
@property (nonatomic, strong)OATopWith * _Nullable user;
@end

NS_ASSUME_NONNULL_END
