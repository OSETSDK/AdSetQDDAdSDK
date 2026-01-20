//
//  AdSetQDDCustomVideoEventProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/18.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//已废弃协议
@protocol AdSetQDDCustomVideoDeprecatedEventProtocol <NSObject>

@optional
/**
 *  贴片广告曝光调用
 */
- (void)adsetqddCustomVideoShow:(UIView *)videoAd AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomVideoShow:extInfo:替代");
/**
 *  视频广告点击调用
 */
- (void)adsetqddCustomVideoClick:(UIView *)videoAd AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomVideoClick:extInfo:替代");

@end

@protocol AdSetQDDCustomVideoEventProtocol <AdSetQDDCustomVideoDeprecatedEventProtocol>

@optional
/**
 * 广告开始加载素材
 */
- (void)adsetqddCustomVideoStartLoadSource:(UIView * _Nullable)videoAd;
/**
 * 广告素材加载成功调用
 */
- (void)adsetqddCustomVideoLoadSourceSuccess:(UIView * _Nullable)videoAd extInfo:(NSDictionary *_Nullable)extInfo;
/**
 * 广告素材加载失败调用
 */
- (void)adsetqddCustomVideoLoadSourceFailed:(UIView * _Nullable)videoAd error:(NSError *)error extInfo:(NSDictionary *_Nullable)extInfo;

@required
/**
 *  视频广告加载成功调用
 */
- (void)adsetqddCustomVideoLoad;
/**
 * 广告渲染成功回调
 */
- (void)adsetqddCustomVideoRenderSuccess:(UIView *)videoAd extInfo:(NSDictionary *_Nullable)info;
/**
 * 广告渲染失败回调
 */
- (void)adsetqddCustomVideoRenderFailed:(UIView *)videoAd extInfo:(NSDictionary *_Nullable)info error:(NSError *_Nullable)error;
/**
 *  视频广告成功展示调用
 *  @param videoAd 广告视图
 *  @param extInfo 媒体自定义参数
 */
- (void)adsetqddCustomVideoShow:(UIView *)videoAd extInfo:(NSDictionary *_Nullable)extInfo;
/**
    视频广告播放失败调用
 */
-(void)adsetqddCustomVideoPlayingError:(UIView *)videoAd error:(NSError *)error;
/**
 *  视频广告加载失败调用
 */
- (void)adsetqddCustomVideoError:(NSError *)error;
/**
 *  视频广告点击调用
 */
- (void)adsetqddCustomVideoClick:(UIView *)videoAd extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  视频广告点击关闭调用
 */
- (void)adsetqddCustomVideoClose:(UIView *)videoAd;
/**
 *  视频广告size更新调用
 */
- (void)adsetqddCustomVideoResize:(UIView *)videoAd adSize:(CGSize)adSize;
/**
 *  视频广告播放完成调用
 */
- (void)adsetqddCustomVideoCompletion:(UIView *)videoAd;

@end

NS_ASSUME_NONNULL_END
