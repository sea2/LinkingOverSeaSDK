
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAKeychain : NSObject
+ (OAKeychain *)sharedImageCache;

- (UIImage *)searchImageFromMemoryWithURLString:(NSString*)urlStr;

- (UIImage *)searceImageFromDiskWithURLStr:(NSString *)urlStr;

- (void)downloadImageWithURLStr:(NSString *)urlStr withComplitionBlock:(void (^) (UIImage*image))block;
@end

NS_ASSUME_NONNULL_END
