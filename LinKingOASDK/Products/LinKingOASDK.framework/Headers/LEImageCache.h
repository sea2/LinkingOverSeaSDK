//
//  LEImageCache.h
//  LingKingSDK_Example
//
//  Created by leon on 2020/4/14.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEImageCache : NSObject
+ (LEImageCache *)sharedImageCache;

- (UIImage *)searchImageFromMemoryWithURLString:(NSString*)urlStr;

- (UIImage *)searceImageFromDiskWithURLStr:(NSString *)urlStr;

- (void)downloadImageWithURLStr:(NSString *)urlStr withComplitionBlock:(void (^) (UIImage*image))block;
@end

NS_ASSUME_NONNULL_END
