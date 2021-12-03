
#import "OAGameplaceholdbg.h"

NS_ASSUME_NONNULL_BEGIN

@interface OADesignSer : OAGameplaceholdbg
+ (void)pointEventName:(NSString *)eventName withTp:(NSString *_Nullable)tp withValues:(NSDictionary *_Nullable)values complete:(void(^_Nullable)(NSError *_Nullable error))complete;

+ (void)adPointEventName:(NSString * _Nullable)eventName withValues:(NSDictionary * _Nullable)values complete:(void(^_Nullable)(NSError * _Nullable error))complete;

+ (void)logReportServerWithEvent:(NSString *)event eventName:(NSString *)eventName infos:(NSDictionary *_Nullable)infos WithOtherLogInfo:(NSDictionary*_Nullable)logInfors complete:(void(^_Nullable)(NSError *_Nullable error))complete;

+ (NSMutableDictionary *)getReportLogInfo;
@end

NS_ASSUME_NONNULL_END
