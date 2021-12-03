#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class SKProduct;
@interface OAIgnManager : NSObject
- (instancetype)initWithArray:(SKProduct *)product;
@property (nonatomic,copy) NSString *productId;
@property (nonatomic,copy) NSString *desc;
@property (nonatomic,copy) NSString *localizedTitle;
@property (nonatomic,copy) NSString *localizedDescription;
@property (nonatomic,strong) NSDecimalNumber *price;
@end

NS_ASSUME_NONNULL_END
