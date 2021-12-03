
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface OAFloatOods : NSObject
+ (instancetype)shared;


- (void)logEnterGame:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName enterGame:(BOOL)enterGame;

- (void)logTutorial:(NSString *)contentId content:(NSString *)content EventServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

- (void)logStage:(int)stage serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

- (void)logLevel:(int )level serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;


- (void)logRoleCreate:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

- (void)logRoleLogin:(NSString *)serverId roleId:(NSString *)roleId;


- (void)logEvent:(NSString *)event;

- (void)logEvent:(NSString *)event withValues:(NSDictionary * _Nullable)values;


- (void)adLogEventName:(NSString *)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullableerror))complete;



@end

NS_ASSUME_NONNULL_END
