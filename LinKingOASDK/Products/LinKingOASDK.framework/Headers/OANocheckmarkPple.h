
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OANocheckmarkPple : NSObject
+ (NSString *)randomString;
+ (NSString*)md5Str:(NSString *)str;
+ (NSString *)getSignData:(NSDictionary *)parameters;
+(NSString*)dictionaryToJson:(NSDictionary *)dic;
+ (NSString *)deviceInfo;
@end

NS_ASSUME_NONNULL_END
