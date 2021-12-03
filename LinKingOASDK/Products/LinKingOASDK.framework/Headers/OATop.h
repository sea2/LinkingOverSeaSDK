
#import <Foundation/Foundation.h>
@class OAAd;
NS_ASSUME_NONNULL_BEGIN
@interface OATop : NSObject
+ (instancetype)shared;
- (void)requestProductDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products))complete;
- (void)requestProductFromeAppleDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray<OAAd *>*_Nullable products))complete;
- (void)requestProductFromeGameDatas:(NSArray *_Nonnull)productIds complete:(void(^_Nullable)(NSError * _Nullable error, NSArray<OAAd *>*_Nullable products))complete;
@end
NS_ASSUME_NONNULL_END
