//
//  AdSetQDDCustomRewardAdapterProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/17.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdSetQDDCustomAdapterProtocol.h"
#import "AdSetQDDCustomRewardEventProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDDCustomRewardAdapterProtocol <AdSetQDDCustomAdapterProtocol>

@required

/**
 *  加载广告
 *  详解：pid - 广告位 id
 */
- (void)loadAd:(NSString *)pid rewardEvent:(id<AdSetQDDCustomRewardEventProtocol>)event;
/**
  渲染广告
 */
- (void)renderAd;
/**
 *  显示广告
 *  详解：显示广告
 */
- (void)showAdFromVC:(UIViewController *)rootVC;
/**
 广告是否有效
 如果三方提供查询广告是否有效接口则用三方的，否则按照三方广告过期时长进行处理
 */
- (BOOL)isAdValid;

@end

NS_ASSUME_NONNULL_END
