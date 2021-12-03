
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAAd : NSObject
- (instancetype)initWithDictionary:(NSDictionary *)product;
@property (nonatomic,copy) NSString *productId;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,strong) NSNumber *num;
@property (nonatomic, copy) NSString *goodsDescription;
@property (nonatomic,strong) NSNumber *amount;
@property (nonatomic, copy) NSString *priceLocale;
@end

NS_ASSUME_NONNULL_END
