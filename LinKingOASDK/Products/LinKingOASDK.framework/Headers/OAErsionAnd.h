
#import "OAGameplaceholdbg.h"

NS_ASSUME_NONNULL_BEGIN

@interface OAErsionAnd : OAGameplaceholdbg
+ (void)orderRecordQuery:(NSString *)fullDate month:(NSString *)month complete:(void(^_Nullable)(NSError *error,NSArray *records))complete;
+ (void)createOrderType:(NSString *)type withParameters:(NSDictionary *)parames complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)appleFinishOrderNum:(NSString *)orderNum receipt:(NSString *)receipt subscribe:(BOOL)subscribe complete:(void(^_Nullable)(NSError *error, NSDictionary*result))complete;
+ (void)fetchtAppleProductDatasComplete:(void(^_Nullable)(NSError *error, NSArray*results))complete;
+ (void)querySubscribeProduct:(NSString *)productId Complete:(void(^_Nullable)(NSError *error, NSDictionary*results))complete;
+ (void)appleFinishOrderNum:(NSString *)orderNum receipt:(NSString *)receipt transactionIdentifier:(NSString *)transactionIdentifier subscribe:(BOOL)subscribe complete:(void(^)(NSError *error, NSDictionary*result))complete;
@end

NS_ASSUME_NONNULL_END
