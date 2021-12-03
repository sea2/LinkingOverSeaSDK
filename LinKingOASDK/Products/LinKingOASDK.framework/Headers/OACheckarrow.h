
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OACheckarrow : NSObject
+ (instancetype)shared;
@property (copy, nonatomic) NSString * _Nullable preferredLanguage;
@property (strong, nonatomic) NSBundle * _Nullable languageBundle;
@end

NS_ASSUME_NONNULL_END
