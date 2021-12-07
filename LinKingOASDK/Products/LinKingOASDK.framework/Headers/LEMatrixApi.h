//
//  LEMatrixApi.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/18.
//  Copyright © 2020 "". All rights reserved.
//

#import "LEBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LEMatrixApi : LEBaseApi
+ (void)fetchMatrixConfigComplete:(void(^_Nullable)(NSError *_Nullable error,id _Nullable responseObject))complete;
@end

NS_ASSUME_NONNULL_END
