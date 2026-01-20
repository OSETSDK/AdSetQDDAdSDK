//
//  AdSetQDDDrawAdDelegate.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/2/17.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#ifndef AdSetQDDDrawAdDelegate_h
#define AdSetQDDDrawAdDelegate_h

@class AdSetQDDDrawAd;

@protocol AdSetQDDDrawAdDelegate <NSObject>

@optional
/**
 DrawAd广告物料加载成功
 */
- (void)adsetqddDrawAdLoadSuccess:(AdSetQDDDrawAd *)drawAd;
/**
 DrawAd广告物料加载失败，即最终加载失败
 */
- (void)adsetqddDrawAdLoadFail:(AdSetQDDDrawAd *)drawAd withError:(NSError *)error;
/**
 视频缓存成功
 */
- (void)adsetqddDrawAdVideoCacheSuccess:(AdSetQDDDrawAd *)drawAd;
/**
 视频缓存失败
 */
- (void)adsetqddDrawAdVideoCacheFailed:(AdSetQDDDrawAd *)drawAd withError:(NSError *)error;
/**
 视频展示成功
 */
- (void)adsetqddDrawAdVideoExposure:(AdSetQDDDrawAd *)drawAd;
/**
 视频失败
 */
- (void)adsetqddDrawAdVideoFail:(AdSetQDDDrawAd *)drawAd extInfo:(NSDictionary *)info withError:(NSError *)error;
/**
 视频准备开始播放
 */
- (void)adsetqddDrawAdVideoDidStartPlaying:(AdSetQDDDrawAd *)drawAd;
/**
 视频暂停播放
 */
- (void)adsetqddDrawAdVideoDidPause:(AdSetQDDDrawAd *)drawAd;
/**
 视频重播
 */
- (void)adsetqddDrawAdVideoDidReplay:(AdSetQDDDrawAd *)drawAd;
/**
 视频播放完成
 */
- (void)adsetqddDrawAdVideoDidComplete:(AdSetQDDDrawAd *)drawAd;
/**
 视频播放失败
 */
- (void)adsetqddDrawAdVideoDidFailed:(AdSetQDDDrawAd *)drawAd withError:(NSError *)error;
/**
 视频被点击
 */
- (void)adsetqddDrawAdVideoDidClick:(AdSetQDDDrawAd *)drawAd;
/**
 视频被关闭
 注意：三方广告内部已添加关闭按钮才会触发该回调
 */
- (void)adsetqddDrawAdVideoDidClosed:(AdSetQDDDrawAd *)drawAd;
/**
 *  广告落地页已经关闭
 */
- (void)adsetqddDrawAdVideoDetailClosed:(AdSetQDDDrawAd *)drawAd;

@end
#pragma mark DrawAd扩展功能回调（包含统计、获取个性化参数等回调）

@protocol AdSetQDDDrawAdExtensionFunctionDelegate <NSObject>

@optional
/**
   渠道加载失败回调
 * 回调说明：当前广告平台请求失败后调用，为保证填充，该广告位可能配置多家渠道，当前渠道请求失败后触发该回调，注意此回调并不代表本次请求动作已经结束且可能存在多次回调的情况
 * 使用场景：媒体如需要统计渠道加载失败数可通过实现该回调来统计数据
 */
- (void)adsetqddDrawAdPlatformError:(AdSetQDDPlatform)platform
                      videoAd:(AdSetQDDDrawAd *)drawAd
                        error:(NSError *)error;
@end

#endif /* AdSetQDDDrawAdDelegate_h */
