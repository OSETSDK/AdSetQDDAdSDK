//
//  AdSetQDDCustomRewardEventProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/17.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//已废弃协议
@protocol AdSetQDDCustomRewardDeprecatedEventProtocol <NSObject>

@optional
/**
 视频广告曝光调用
 */
- (void)adsetqddCustomRewardVideoShow AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomRewardVideoShow:extInfo:替代");
/**
 视频广告信息点击调用
 */
- (void)adsetqddCustomRewardVideoClicked AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomRewardVideoClicked:extInfo:替代");
/**
 视频数据下载成功调用
 */
- (void)adsetqddCustomRewardVideoCached AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomRewardVideoCached:extInfo:替代");
/**
 视频广告播放达到激励条件调用
 @param rewardNum  奖励数量 不传默认按后端返回结果为准
 @param rewardName 奖励名称 不传默认按后端返回结果为准
 @param verify 是否验证成功 0:验证失败 1：验证成功 必传
 */
- (void)adsetqddCustomRewardVideoReward:(NSString * _Nullable)rewardNum
                       rewardName:(NSString * _Nullable)rewardName
                           verify:(NSString * _Nonnull)verify AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomRewardVideoReward:rewardName:verify:extInfo:替代");
@end

@protocol AdSetQDDCustomRewardEventProtocol <AdSetQDDCustomRewardDeprecatedEventProtocol>

@optional
/**
 * 广告开始加载素材
 */
- (void)adsetqddCustomRewardVideoStartLoadSource:(UIView * _Nullable)adView;
/**
 打开dp，结果
 */
- (void)adsetqddCustomRewardVideoOpenDpOrUlk:(NSDictionary *_Nullable)extInfo;

@required
/**
 广告数据加载成功调用
 */
- (void)adsetqddCustomRewardVideoLoaded;
/**
 视频数据下载成功调用
 */
- (void)adsetqddCustomRewardVideoCached:(UIView * _Nullable)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 * 广告素材加载失败调用
 */
- (void)adsetqddCustomRewardVideoCachedFailed:(UIView * _Nullable)adView error:(NSError *_Nullable)err extInfo:(NSDictionary *_Nullable)extInfo;
/**
 激励视频渲染成功调用
 */
- (void)adsetqddCustomRewardVideoRenderSuccess;
/**
 激励视频渲染失败调用
 */
- (void)adsetqddCustomRewardVideoRenderFail:(NSError *)error;
/**
 视频播放页即将展示调用
 */
- (void)adsetqddCustomRewardVideoWillShow;
/**
 视频广告曝光调用
 @param adView 广告视图
 @param extInfo 广告个性化参数
 */
- (void)adsetqddCustomRewardVideoShow:(UIView *_Nullable)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 视频播放页关闭调用
 */
- (void)adsetqddCustomRewardVideoClosed;
/**
 视频广告信息点击调用
 @param adView 广告视图
 @param extInfo 广告个性化参数
 */
- (void)adsetqddCustomRewardVideoClicked:(UIView *_Nullable)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 视频广告开始播放调用
 */
- (void)adsetqddCustomRewardVideoStartPlaying;
/**
 视频广告暂停播放调用
 */
- (void)adsetqddCustomRewardVideoStopPlaying;
/**
 视频广告恢复播放调用
 */
- (void)adsetqddCustomRewardVideoResumePlaying;
/**
 视频广告播放异常调用
 */
- (void)adsetqddCustomRewardVideoPlayingError:(NSError *)error;
/**
 视频广告点击跳过调用
 */
- (void)adsetqddCustomRewardVideoClickSkipAndCurrentTime:(NSTimeInterval)currentTime;
/**
 视频广告错误调用
 */
- (void)adsetqddCustomRewardVideoError:(NSError *)error;
/**
 视频广告播放达到激励条件调用
 @param rewardNum  奖励数量 不传默认按后端返回结果为准
 @param rewardName 奖励名称 不传默认按后端返回结果为准
 @param verify 是否验证成功 0:验证失败 1：验证成功 必传
 @param extInfo 额外参数
 */
- (void)adsetqddCustomRewardVideoReward:(NSString * _Nullable)rewardNum
                       rewardName:(NSString * _Nullable)rewardName
                           verify:(NSString * _Nonnull)verify
                          extInfo:(NSDictionary * _Nullable)extInfo;
/**
 视频广告视频播放完成调用
 */
- (void)adsetqddCustomRewardVideoFinish;
@end

NS_ASSUME_NONNULL_END
