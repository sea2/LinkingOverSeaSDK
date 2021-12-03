
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OACache : NSObject


+ (instancetype)shared;

- (void)logCompleteRegistrationEvent:(NSString *)registrationMethod;
- (void)logCompletedTutorialEvent:(NSString*)contentId success:(BOOL)success;

- (void)logAchievedLevelEvent:(NSString*)level;

- (void)logUnlockedAchievementEvent:(NSString*)description;

- (void)logInitiatedCheckoutEvent:(NSString*)contentId contentType:(NSString*)contentType numItems:(int)numItems  paymentInfoAvailable:(BOOL)paymentInfoAvailable currency:(NSString*)currency valToSum:(double)totalPrice;

- (void)logPurchasedEvent:(int)numItems contentType:(NSString*)contentType contentId:(NSString*)contentId currency:(NSString*)currency valToSum:(double)price;



- (void)customeLogEventName:(NSString *)eventName withParameters:(NSDictionary *)params;
- (void)customeLogEventName:(NSString *)eventName;
- (void)customeLogEventName:(NSString *)eventName valueToSum:(double)valueToSum withParameters:(NSDictionary *)params;
@end

NS_ASSUME_NONNULL_END
