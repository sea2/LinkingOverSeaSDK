
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAOkBind : NSObject
+ (NSString *)homePath;             

+ (NSString *)appPath;              

+ (NSString *)docPath;              

+ (NSString *)libPrefPath;          

+ (NSString *)libCachePath;         

+ (NSString *)tmpPath;              

+ (NSString *)iapReceiptPath;       
@end

NS_ASSUME_NONNULL_END
