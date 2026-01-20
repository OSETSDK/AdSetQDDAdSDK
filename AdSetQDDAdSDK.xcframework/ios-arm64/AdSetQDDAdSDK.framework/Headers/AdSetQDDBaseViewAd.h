//
//  AdSetQDDBaseViewAd.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2023/2/7.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDDBaseViewAd : UIView
//当前广告位id
@property(nonatomic,copy)NSString *pid;
/**
 获取媒体配置信息
 */
-(NSDictionary *)mediaExt;
/**广告类型 */
-(AdSetQDDAdType)adType;
/**
 调用说明 请查看
 AdSetQDDBaseAd.h声明文件
 竞价成功上报
 */
-(void)sendWinNotificationWithInfo:(NSDictionary *)adInfo;
/**
 调用说明 请查看
 AdSetQDDBaseAd.h声明文件
 竞价失败上报
 */
-(void)sendLossNotificationWithInfo:(NSDictionary *)adInfo;
@end

NS_ASSUME_NONNULL_END
