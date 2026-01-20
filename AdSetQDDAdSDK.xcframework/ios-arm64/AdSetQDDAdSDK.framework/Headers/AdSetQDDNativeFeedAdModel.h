//
//  AdSetQDDNativeFeedAdModel.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2021/8/2.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDDFeedAdMetaExtFunction <NSObject>

@optional

- (void)attachAd:(UIView *_Nonnull)container
     renderViews:(NSArray<UIView*>*_Nonnull)renderSubViews
       clickView:(NSArray<UIView*>*_Nonnull)clickViews
      slideViews:(NSArray<UIView*>*_Nullable)slideViews
       closeView:(UIView *_Nullable)closeView
       presentVc:(UIViewController*_Nonnull)presentVc;

@end

@protocol AdSetQDDFeedVideoExtFunction <NSObject>

@optional

-(void)registerDataObject:(id<AdSetQDDFeedAdMeta>)dataObject
               adContainer:(UIView *)adContainer
            clickableViews:(NSArray<UIView *>*)clickableViews
             slidableViews:(NSArray<UIView *>*_Nullable)slidableViews;

@end

@interface AdSetQDDCustomVideoPlayerReporter : NSObject
-(void)reportVideoStart;//视频开始
-(void)reportVideoOneQuarter;//播放1/4
-(void)reportVideoOneHalf;//播放1/2
-(void)reportVideoThreeQuarter;//播放3/4
-(void)reportVideoComplete;//播放完毕
-(void)reportVideoResume;//继续播放
-(void)reportVideoPause;//暂停播放
-(void)reportVideoClose;//视频关闭
-(void)reportVideoMute;//视频静音
-(void)reportVideoUnmute;//解除静音
-(void)reportVideoSkip;//视频跳过
@end

@interface AdSetQDDNativeFeedAdModel : NSObject
/**
 详解：
 isNativeExpress为Yes时代表模版广告，请读取feedView进行广告填充
 isNativeExpress为No时代表自渲染广告，请读取adMaterialMeta进行广告填充
 feedView与adMaterialMeta目前只存在其中一个，不会同时存在
 */
@property(nonatomic,assign)BOOL isNativeExpress;//是否是模版
/**
 当前广告物料归属平台
 */
@property(nonatomic,assign)AdSetQDDPlatform adPlatform;
/**
 模版广告
 */
@property(nonatomic,strong,nullable)UIView *feedView;
/**
 获取【模版广告】是否是视频
 注意：
 1、仅AdSetQDD、快手、百度（智能优选、新优选需4.87版本才能获取）、广点通支持获取，其他平台不支持获取默认NO
 2、获取时机：adsetqddNativeFeedAdMaterialMetaReadySuccess后获取
 */
@property(nonatomic,assign)BOOL isVideo;
/**
 自渲染广告物料
 */
@property(nonatomic,strong,nullable)id<AdSetQDDFeedAdMeta> adMaterialMeta;
/**
 指定广告presentVC 默认当前展示的vc
 提示：仅支持设置模版广告，自渲染广告通过adMaterialMeta设置
 注意：如果使用的是自定义平台接入，请自行设置自定义平台模版广告的presentVC
 示例：feedView为自定义平台模版广告时 将其转化为真实类型后调用该模版设置vc的接口
 */
@property(nonatomic,weak)UIViewController *presentVC;
/**
 媒体自定义播放器reporter
 未使用自定义播放器不需要使用该接口
 */
@property(nonatomic,strong,readonly,nullable)AdSetQDDCustomVideoPlayerReporter *videoPlayerReporter;
/**
 广告是否有效
 */
- (BOOL)isAdValid;
/**
 广告价格  单位：分 [C2S下，返回渠道出价，非C2S下，返回平台填写的固价]
 注意：广告加载成功后获取
 */
- (NSInteger)ecpm;
@end

NS_ASSUME_NONNULL_END
