
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OANimatedIn : NSObject
@property(nonatomic, copy)void(^activatePointCallBack)(NSError * _Nullable error);

@property(nonatomic, copy)void(^standardPointCallBack)(NSError * _Nullable error);

@property(nonatomic, copy)void(^customePointCallBack)(NSError * _Nullable error);

+ (instancetype)shared;
- (void)activatePointWithComplete:(void(^_Nullable)(NSError * _Nullable error))complete;
- (void)standardPointEventName:(NSString * _Nullable)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)customePointEventName:(NSString *_Nullable)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullable error))complete;

- (void)adstandardPointEventName:(NSString *)eventName withParameters:(NSDictionary *)params complete:(void(^)(NSError *error))complete;


- (void)logEnterGameServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName enterGame:(BOOL)enterGame complete:(void(^_Nullable)(NSError * _Nullable error))complete;
- (void)logAchieveCompleteTutorialId:(NSString *)contentId eventServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;
- (void)logAchieveStageEvent:(int)stage serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;
- (void)logAchieveLevelEvent:(int)level serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;

- (void)logRoleCreate:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

- (void)logRoleLogin:(NSString *)serverId roleId:(NSString *)roleId;
@end

NS_ASSUME_NONNULL_END
