//
//  AdSetQDDCPSplashAdConfigModel.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2025/5/23.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaWindowKey;//广告window
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaAdSizeKey;//广告size
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaAdnNameKey;//广告源名称
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaDrawingKey;//请求开屏展示类型
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaShowTimeKey;//开屏展示时长
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaSkipViewKey;//自定义跳过按钮
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaClkLimitKey;//广告交互类型
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaPresentVcKey;//广告展示的控制器
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaVideoMutedKey;//设置视频静音开关
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaFetchDelayKey;//广告加载超时时长
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaBottomSizeKey;//底部logo size
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaBottomViewKey;//开屏广告底部视图
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaAutoRenderKey;//是否自动渲染
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaClickTextKey;//开屏点击文案
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaNeedZoomViewKey;//是否展示点睛
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaMediaExtConfigKey;//媒体个性化参数
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaHideSkipButtonKey;//隐藏跳过按钮
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaShowAfterLoadKey;//加载成功后是否立即展示
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaExpireTimestampKey;//广告过期时长
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaRequestAdInterfaceKey;//广告请求接口类型
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaHideSplashStatusBarKey;//隐藏状态栏
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaADNAcceptIDKey;//当前广告源接受方ID
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaSplashBGImageKey;//当前开屏广告背景占位图
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaSplashBGModeKey;//当前开屏广告背景占位图的填充模式
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaSplashBGColorKey;//当前开屏广告背景颜色
extern NSString *const kAdSetQDDAdSetQDDCPSplashAdMediaSplashStarLoadInterTime;//当前开屏广告开始调用Load接口

@interface AdSetQDDCPSplashAdConfigModel : NSObject
/**
 广告size
 */
@property(nonatomic,assign,readonly)CGSize adSize;
/**
 是否展示点睛
 */
@property(nonatomic,assign,readonly)BOOL isNeedZoomView;
/**
 开屏展示时长 单位s
 */
@property(nonatomic,assign,readonly)NSInteger splashShowTime;
/**
 请求开屏展示类型
 */
@property(nonatomic,assign,readonly)NSInteger requestAdType;
/**
 开屏广告底部视图
 */
@property(nonatomic,weak,readonly,nullable)UIView *bottomView;
/**
 窗口
 */
@property(nonatomic,weak,readonly)UIWindow *window;
/**
 底部logo size
 即@property(nonatomic,weak)UIView *bottomView; 的size
 */
@property(nonatomic,assign,readonly)CGSize splashBottomSize;
/**
 广告交互类型
 */
@property(nonatomic,assign,readonly)NSInteger adInteractionType;
/**
 广告加载超时时长 单位s
 */
@property(nonatomic,assign,readonly)NSInteger splashLoadFetchDelay;
/**
 自定义跳过按钮
 */
@property(nonatomic,weak,readonly,nullable)UIView *skipView;
/**
 背景占位图
 */
@property(nonatomic,weak,readonly,nullable)UIImage *splashBgImage;
/**
 背景占位图填充模式
 */
@property(nonatomic,assign,readonly)UIViewContentMode splashBgMode;
/**
 开屏背景颜色
 */
@property(nonatomic,weak,readonly,nullable)UIColor * splashBgColor;
/**
 开屏开始调用load接口时间
 */
@property(nonatomic,assign,readonly)NSInteger splashStarLoadInterTime;
/**
 广告展示的控制器
 */
@property(nonatomic,weak,readonly)UIViewController *presentVc;
/**
 加载成功后是否立即展示
 */
@property(nonatomic,assign,readonly)BOOL isShowAfterLoad;
/**
 开屏点击文案
 */
@property(nonatomic,copy,readonly)NSString *splashClickText;
/**
 隐藏跳过按钮 默认不隐藏
 */
@property(nonatomic,assign,readonly)BOOL hideSkipButton;
/**
 隐藏状态栏
 */
@property(nonatomic,assign,readonly)BOOL hideSplashStatusBar;
/**
 设置视频静音开关 默认静音
 */
@property(nonatomic,assign,readonly)BOOL videoMuted;
/**
 广告过期时长 单位s
 */
@property(nonatomic,assign)NSInteger expire_timestamp;
/**
 媒体其他个性化参数
 */
@property(nonatomic,strong,readonly,nullable)NSDictionary *mediaExtConfig;
/**
 当前广告源名称
 */
@property(nonatomic,copy,readonly,nullable)NSString *adnName;
/**
 广告请求接口类型
 */
@property(nonatomic,assign,readonly)AdSetQDDAdType requestAdInterface;
/**
 * 是否自动渲染 默认YES （可选参数）
 */
@property(nonatomic,assign)BOOL isAutoRender;
/**
 当前广告源接受方ID
 */
@property(nonatomic,copy,readonly,nullable)NSString *adnAcceptID;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
