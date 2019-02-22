//
//  TESTPayNotificationStateApiManager.h
//  PayNotificationSDK
//
//  Created by qiaoming on 2019/1/22.
//  Copyright © 2019年 qiaoming. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TESTPayNotificationModel.h"
#import <AFNetworking/AFNetworking.h>
#import "TESTPayNotificationHTTPResponse.h"

NS_ASSUME_NONNULL_BEGIN

//typedef void (^GMPayStateApiCompleteBlock) (GMNetHTTPResponse *response);
typedef void (^PayNotificationStateApiCompleteBlock) (TESTPayNotificationHTTPResponse *response);

@interface TESTPayNotificationStateApiManager : AFHTTPSessionManager
+ (TESTPayNotificationStateApiManager *)sharedManager;
//支付成功新增后台 通知接口
-(void)checkiOSIAPPayOrderWithPayNotificationModel:(TESTPayNotificationModel *)payNotificationModel  complete:(PayNotificationStateApiCompleteBlock)complete;
@end

NS_ASSUME_NONNULL_END
