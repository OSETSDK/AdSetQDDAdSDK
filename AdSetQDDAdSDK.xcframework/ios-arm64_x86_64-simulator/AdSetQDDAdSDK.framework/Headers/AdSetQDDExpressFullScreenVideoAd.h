//
//  AdSetQDDExpressFullScreenVideoAd.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/2/14.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import "AdSetQDDBaseAd.h"
#import "AdSetQDDExpressFullScreenVideoAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDDExpressFullScreenVideoAd : AdSetQDDBaseAd
/**
 指定基础回调接收对象
 传入时机：加载广告前传入
 */
@property(nonatomic,weak)id<AdSetQDDExpressFullScreenVideoAdDelegate>delegate;
/**
 指定扩展回调接收对象
 传入时机：加载广告前传入
 如不需要扩展回调相关功能，可不用指定
 */
@property(nonatomic,weak)id<AdSetQDDExpressFullScreenVideoAdExtensionFunctionDelegate> extDelegate;
/**
 本地是否有可用广告 YES代表本地有缓存成功且未过期的广告，NO代表不可用
 展示广告前请做广告的有效性检查，广告如失效请重新拉取，否则将无法展示广告
 */
@property(nonatomic,assign,readonly)BOOL isReady;
/**
 *  加载广告
 *  @param pid 广告位ID 【必传】
 *  @param adParams 广告参数 【必传】
 */
- (void)loadAdWithPid:(NSString *)pid adConfigParams:(AdSetQDDExpressFullScreenVideoAdConfigParams *)adParams;
/**
  渲染广告
 */
- (void)renderAd;
/**
 *  显示广告
 *  详解：显示广告 presentVC为指定弹出广告落地页的控制器
 *  调用前请检查本地是否有可用广告
 */
- (void)showAdFromRootViewController:(UIViewController *)presentVC;
/**
 广告价格  单位：分 [C2S下，返回渠道出价，非C2S下，返回平台填写的固价]
 注意：广告加载成功后获取
 */
- (NSInteger)ecpm;
@end

NS_ASSUME_NONNULL_END
