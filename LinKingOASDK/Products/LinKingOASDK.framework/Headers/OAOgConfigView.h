
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, StayMode) {
 
    STAYMODE_LEFTANDRIGHT = 0,
    
    STAYMODE_LEFT = 1,

    STAYMODE_RIGHT = 2
};
NS_ASSUME_NONNULL_BEGIN

@interface OAOgConfigView : UIImageView
@property (nonatomic, assign) StayMode stayMode;


@property (nonatomic, assign) CGFloat stayEdgeDistance;


@property (nonatomic, assign) CGFloat stayAnimateTime;


- (void)setTapActionWithBlock:(void (^)(void))block;


- (void)setImageWithName:(NSString *)imageName;


- (void)moveTohalfInScreenWhenScrolling;

- (void)setCurrentAlpha:(CGFloat)stayAlpha;
@end

NS_ASSUME_NONNULL_END
