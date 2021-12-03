
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class LKProduct;
typedef enum {
    SIAPPurchSuccess = 0,       
    SIAPPurchFailed = 1,        
    SIAPPurchCancle = 2,        
    SIAPPurchVerFailed = 3,     
    SIAPPurchVerSuccess = 4,    
    SIAPPurchNotArrow = 5,      
    SIAPPurchNoGoods = 6,       
    SIAPPurchRestoredGoods = 7, 
    SIAPPurchServiceFail = 8, 
}SIAPPurchType;
@protocol LEApplePayDelegate <NSObject>
@optional


- (void)storePayCreateOrderId:(NSString * _Nullable)orderId withError:(NSError *_Nullable)error;

- (void)storePayFinishPay:(BOOL)isSuccess withError:(NSError *_Nullable)error;

- (void)storePayCancelPay;

@end
typedef void (^IAPCompletionHandle)(SIAPPurchType type,NSData * _Nullable  data);
@interface OABgKing : NSObject
@property (nonatomic, weak) id <LEApplePayDelegate> delegate;

+ (instancetype)shared;
- (void)requestProductDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products,NSArray * _Nullable invalidProducts))complete;
- (void)startPurchWithID:(NSString *)purchID parames:(NSDictionary *)parames completeHandle:(IAPCompletionHandle)handle;
- (void)querysubscribeProduct:(NSString *)productId Complete:(void(^)(NSError *error, NSDictionary*results))complete;
-(void)setup;
-(void)destroy;
-(BOOL)canMakePayments;
@end

NS_ASSUME_NONNULL_END
