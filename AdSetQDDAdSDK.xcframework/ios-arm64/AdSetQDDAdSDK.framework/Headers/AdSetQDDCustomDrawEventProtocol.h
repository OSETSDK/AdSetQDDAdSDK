//
//  AdSetQDDCustomDrawEventProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/19.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//已废弃协议
@protocol AdSetQDDCustomDrawDeprecatedEventProtocol <NSObject>

@optional
/**
 *  draw广告曝光调用
 */
- (void)adsetqddCustomDrawAdVideoShowSuccess:(UIView *)adView AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomDrawAdVideoShowSuccess:extInfo:替代");
/**
 视频缓存成功调用
 */
- (void)adsetqddCustomDrawAdVideoCacheSuccess AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomDrawAdVideoCacheSuccess:extInfo:替代");
/**
 视频缓存失败调用
 */
- (void)adsetqddCustomDrawAdVideoCacheFailedError:(NSError *)error AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomDrawAdVideoCacheFailedError:extInfo:替代");
/**
 视频被点击调用
 */
- (void)adsetqddCustomDrawAdVideoDidClick:(UIView *)adView AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomDrawAdVideoDidClick:extInfo:替代");

@end

@protocol AdSetQDDCustomDrawEventProtocol <AdSetQDDCustomDrawDeprecatedEventProtocol>

@optional
/**
 * 广告开始加载素材
 */
- (void)adsetqddCustomDrawAdStartLoadSource:(UIView * _Nullable)adView;

@required
/**
 DrawAd广告物料加载成功调用
 */
- (void)adsetqddCustomDrawAdLoadSuccess;
/**
 DrawAd广告物料加载失败调用
 */
- (void)adsetqddCustomDrawAdLoadFailError:(NSError *)error;
/**
 视频缓存成功调用
 */
- (void)adsetqddCustomDrawAdVideoCacheSuccess:(NSDictionary *_Nullable)extInfo;
/**
 视频缓存失败调用
 */
- (void)adsetqddCustomDrawAdVideoCacheFailedError:(NSError *)error extInfo:(NSDictionary *_Nullable)extInfo;
/**
 视频展示成功调用
 @param adView 广告视图
 @param extInfo 媒体个性化参数
 */
- (void)adsetqddCustomDrawAdVideoShowSuccess:(UIView *)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 视频展示失败调用
 */
- (void)adsetqddCustomDrawAdVideoShowFailedError:(NSError *)error;
/**
 视频准备开始播放调用
 */
- (void)adsetqddCustomDrawAdVideoDidStartPlaying;
/**
 视频暂停播放调用
 */
- (void)adsetqddCustomDrawAdVideoDidPause;
/**
 视频重播调用
 */
- (void)adsetqddCustomDrawAdVideoDidReplay;
/**
 视频播放完成调用
 */
- (void)adsetqddCustomDrawAdVideoDidComplete;
/**
 视频播放失败调用
 */
- (void)adsetqddCustomDrawAdVideoPlayingFailedError:(NSError *)error;
/**
 视频被点击调用
 */
- (void)adsetqddCustomDrawAdVideoDidClick:(UIView *)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 视频被关闭调用
 */
- (void)adsetqddCustomDrawAdVideoDidClosed:(UIView *)adView;
/**
 广告落地页已经关闭调用
 */
- (void)adsetqddCustomDrawAdVideoDetailClosed;
@end

NS_ASSUME_NONNULL_END
