//
//  AdSetQDDCustomFullScreenVideoEventProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/19.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//已废弃协议
@protocol AdSetQDDCustomFullScreenVideoDeprecatedEventProtocol <NSObject>

@optional
/**
 *  全屏视频广告曝光调用
 */
- (void)adsetqddCustomFullScreenVideoAdShowSuccess:(UIView *_Nullable)adView AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomFullScreenVideoAdShowSuccess:extInfo:替代");
/**
 全屏视频缓存成功调用
 */
- (void)adsetqddCustomFullScreenVideoAdCacheSuccess AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomFullScreenVideoAdCacheSuccess:extInfo:替代");
/**
 全屏视频缓存失败调用
 */
- (void)adsetqddCustomFullScreenVideoAdCacheFailed:(NSError *)error AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomFullScreenVideoAdCacheFailed:extInfo:替代");
/**
 全屏视频被点击调用
 */
- (void)adsetqddCustomFullScreenVideoAdDidClick:(UIView *_Nullable)adView withPlayingProgress:(CGFloat)progress AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomFullScreenVideoAdDidClick:withPlayingProgress:extInfo:替代");
@end

@protocol AdSetQDDCustomFullScreenVideoEventProtocol <AdSetQDDCustomFullScreenVideoDeprecatedEventProtocol>

@optional
/**
 * 广告开始加载素材
 */
- (void)adsetqddCustomFullScreenStartLoadSource:(UIView * _Nullable)adView;

@required
/**
 全屏视频广告物料加载成功调用
 */
- (void)adsetqddCustomFullScreenVideoAdLoadSuccess;
/**
 全屏视频广告物料加载失败调用
 */
- (void)adsetqddCustomFullScreenVideoAdLoadFail:(NSError *)error;
/**
 全屏视频缓存成功调用
 */
- (void)adsetqddCustomFullScreenVideoAdCacheSuccess:(NSDictionary *_Nullable)extInfo;
/**
 全屏视频缓存失败调用
 */
- (void)adsetqddCustomFullScreenVideoAdCacheFailed:(NSError *)error extInfo:(NSDictionary *_Nullable)extInfo;
/**
 全屏视频开始播放调用
 */
- (void)adsetqddCustomFullScreenVideoAdDidStarted;
/**
 全屏视频展示成功调用
 @param adView 广告视图
 @param extInfo 媒体个性化参数
 */
- (void)adsetqddCustomFullScreenVideoAdShowSuccess:(UIView *_Nullable)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 全屏视频展示失败调用
 */
- (void)adsetqddCustomFullScreenVideoAdShowFailed:(NSError *)error;
/**
 全屏视频播放完成或视频播放途中发生异常错误调用
 */
- (void)adsetqddCustomFullScreenVideoAdDidPlayFinish:(NSError *)error;
/**
 全屏视频已被关闭调用
 */
- (void)adsetqddCustomFullScreenVideoAdDidCloseWithPlayingProgress:(CGFloat)progress;
/**
 全屏视频跳过按钮被点击调用
 */
- (void)adsetqddCustomFullScreenVideoAdDidSkipWithPlayingProgress:(CGFloat)progress;
/**
 全屏视频被点击调用
 */
- (void)adsetqddCustomFullScreenVideoAdDidClick:(UIView *_Nullable)adView withPlayingProgress:(CGFloat)progress extInfo:(NSDictionary *_Nullable)extInfo;
@end

NS_ASSUME_NONNULL_END
