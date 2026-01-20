//
//  AdSetQDDInterstitialDelegate.h
//  AdSetQDDAdSDKDev
//
//  Created by AdSetQDD on 2020/7/23.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#ifndef AdSetQDDInterstitialDelegate_h
#define AdSetQDDInterstitialDelegate_h


@class AdSetQDDInterstitialAd;

@protocol AdSetQDDInterstitialDelegate <NSObject>

@optional
/**
 * 加载成功回调
 * 回调说明：广告加载成功时触发
 * 使用场景：媒体如需要统计广告加载成功数可通过实现该回调来统计数据
 */
- (void)adsetqddInterstitialLoadedSuccess:(AdSetQDDInterstitialAd *)adsetqddInterstitialAd;
/**
 *  广告预加载失败回调
 *  详解:当接收服务器返回的广告数据失败后调用该函数
 */
- (void)adsetqddInterstitialLoadedFail:(AdSetQDDInterstitialAd *)adsetqddInterstitialAd error:(NSError *)error;
/**
 * 插屏广告渲染成功回调 可以进行展示 在此回调中调用show接口展示广告
 */
- (void)adsetqddInterstitialAdRenderSuccess:(AdSetQDDInterstitialAd *)adsetqddInterstitialAd extInfo:(NSDictionary *)info;
/**
 *  插屏广告视图展示成功回调
 *  详解: 插屏广告展示成功回调该函数
 */
- (void)adsetqddInterstitialExposure:(AdSetQDDInterstitialAd *)adsetqddInterstitialAd;
/**
 * 插屏广告未达到曝光要求
 * 可能情况：渲染失败、展示时产生的异常
 * 开发者收到此回调后不再进行展示广告相关逻辑
 * @param info 媒体可通过【error_type 】key获取具体错误类型 value是字符串int值（AdSetQDDErrorCodeADRenderError为渲染失败，AdSetQDDErrorCodeADShowError为展示时错误）
 */
- (void)adsetqddInterstitialAdFail:(AdSetQDDInterstitialAd *)adsetqddInterstitialAd extInfo:(NSDictionary *)info error:(NSError *)error;
/**
 *  插屏广告展示结束回调
 *  详解: 插屏广告展示结束回调该函数
 */
- (void)adsetqddInterstitialClosed:(AdSetQDDInterstitialAd *)adsetqddInterstitialAd;
/**
 *  插屏广告点击回调
 */
- (void)adsetqddInterstitialClicked:(AdSetQDDInterstitialAd *)adsetqddInterstitialAd;
/**
 *  全屏广告页被关闭
 */
- (void)adsetqddInterstitialDetailClosed:(AdSetQDDInterstitialAd *)adsetqddInterstitialAd;

@end

#pragma mark 插屏扩展功能回调（包含统计、获取个性化参数等回调）

@protocol AdSetQDDInterstitialExtensionFunctionDelegate <NSObject>

@optional
/**
   渠道加载失败回调
 * 回调说明：当前广告平台请求失败后调用，为保证填充，该广告位可能配置多家渠道，当前渠道请求失败后触发该回调，注意此回调并不代表本次请求动作已经结束且可能存在多次回调的情况
 * 使用场景：媒体如需要统计渠道加载失败数可通过实现该回调来统计数据
 */
- (void)adsetqddInterstitialPlatformError:(AdSetQDDPlatform)platform ad: (AdSetQDDInterstitialAd *)adsetqddInterstitialAd error:(NSError *)error;
@end
#endif /* AdSetQDDInterstitialDelegate_h */
