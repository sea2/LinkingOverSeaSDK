
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAAgreementRoduct : NSObject<NSSecureCoding,NSCoding>
@property (nonatomic, copy) NSString *ready_type;
@property (nonatomic, copy) NSString *pay_type;
@property (nonatomic, strong) NSNumber *mode_debug;
@property (nonatomic, strong) NSNumber *wsy;
@property (nonatomic, strong) NSDictionary *sdk_config;
@property (nonatomic, strong) NSDictionary *wx_config;
@property (nonatomic, strong) NSDictionary *auth_config;
@property (nonatomic, strong) NSDictionary *point_config;
@property (nonatomic, strong) NSDictionary *ad_config_ios;
@property (nonatomic, strong) NSDictionary *share_info;
@property (nonatomic, strong) NSDictionary *updateGame;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
+ (OAAgreementRoduct *)getSDKConfig;
+ (void)setSDKConfig:(OAAgreementRoduct *)config;
+ (void)removeSDKConfig;
@end

NS_ASSUME_NONNULL_END
