//
//  GDTSDKDefines.h
//  GDTMobApp
//
//  Created by AdSetQDD on 2017/11/6.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define AdSetQDDAdDEPRECATED_MSG(insteadString) DEPRECATED_MSG_ATTRIBUTE(insteadString)

typedef NS_ENUM(NSInteger,AdSetQDDLogLevel) {
    AdSetQDDLogNone  = 0,  //不打印Log
    AdSetQDDLogError = 1, //只打印Error
    AdSetQDDLogAll   = 2//全部打印
};
/**
 广告平台
 */
typedef NS_ENUM(NSInteger, AdSetQDDPlatform) {
    AdSetQDDPlatformAdSetQDD      = 0, // AdSetQDD
    AdSetQDDPlatformGDT     = 1, // 广点通
    AdSetQDDPlatformBU      = 2, // 穿山甲
    AdSetQDDPlatformBD      = 3, // 百度
    AdSetQDDPlatformKS      = 6, // 快手
    AdSetQDDPlatformJD      = 7, // 京东
    AdSetQDDPlatformCP      = 8, // 自定义平台
    AdSetQDDPlatformSigMob  = 9  // sigMob
};
/**
 请求广告参数secure值
 */
typedef NS_ENUM(NSInteger, AdSetQDDSecure) {
    AdSetQDDSecureHttp  = 0,  // 仅支持http
    AdSetQDDSecureHttps = 1,  // 仅支持https
    AdSetQDDSecureAll   = 2,  // 支持http 和 https
};
/**
 信息流布局类型
 */
typedef NS_ENUM(NSInteger, AdSetQDDNativeAdType) {
    AdSetQDDNativeAdLeftImage         = 0,   // 展示左图右文+下载按钮
    AdSetQDDNativeAdLeftImageNoButton = 1,   // 展示左图右文
    AdSetQDDNativeAdBottomImage       = 2,   // 展示上文下大图
    AdSetQDDNativeAdThreeImage        = 3,   // 三图
    AdSetQDDNativeAdVideo             = 4,   // 视频
};
/**
 性别
 */
 typedef NS_ENUM(NSInteger, AdSetQDDGender) {
     AdSetQDDGenderUnknown = -1,   // 未知
     AdSetQDDGenderMale = 1,       // 男性
     AdSetQDDGenderFemale = 10,    // 女性
 };
/**
 * 广告类型
 */
 typedef NS_ENUM(NSInteger, AdSetQDDAdType) {
     AdSetQDDAdTypeFeed            = 1,  // 自渲染信息流
     AdSetQDDAdTypeFeedPreRender   = 2,  // 模板渲染信息流
     AdSetQDDAdTypeBanner          = 3,  // 横幅 banner
     AdSetQDDAdTypeSplash          = 4,  // 开屏
     AdSetQDDAdTypeInterstitial    = 5,  // 插屏
     AdSetQDDAdTypePaster          = 6,  // 贴片
     AdSetQDDAdTypeReward          = 7,  // 激励视频
     AdSetQDDAdTypeDraw            = 8,  // 信息流视频
     AdSetQDDAdTypeFullScreenVideo = 9,  // 全屏视频
     AdSetQDDAdTypeNativeExpressAd = 10  // 新版信息流（自渲染and模版）
 };
/**
 * 错误码
 */
typedef NS_ENUM(NSInteger,AdSetQDDErrorCode) {
    AdSetQDDErrorCodeADLoadImageError         = -1,  //加载图片失败
    AdSetQDDErrorCodeADLoadStyleError         = 3,   //广告加载方式异常
    AdSetQDDErrorCodeNoADError                = 204, //无广告
    AdSetQDDErrorCodeADCancleError            = 700, //广告被取消加载
    AdSetQDDErrorCodeADMaterialError          = 1001,//素材URL不合法
    AdSetQDDErrorCodeADNetWorkError           = 3001,//网络错误
    AdSetQDDErrorCodeADTypeError              = 4003,//广告类型错误
    AdSetQDDErrorCodeADLoadVideoError         = 6020,//视频加载失败或者视频广告资源地址不存在
    AdSetQDDErrorCodeADPidError               = 6021,//广告位id异常
    AdSetQDDErrorCodeADNotValidError          = 6022,//广告无效
    AdSetQDDErrorCodeUndefinedError           = 6666,//未知错误
    AdSetQDDErrorCodeADLoadFailError          = 800001, //资源加载失败
    AdSetQDDErrorCodeADNotSupportSDKError     = 800002, //未聚合该sdk或sdk版本过低
    AdSetQDDErrorCodeADNotValidParamError     = 800003, //设置的广告参数异常
    AdSetQDDErrorCodeADNotValidClassNameError = 800004, //设置的广告类名参数异常
    AdSetQDDErrorCodeADContentParseError      = 800005, //广告解析异常
    AdSetQDDErrorCodeADShowError              = 800006, //广告展示异常
    AdSetQDDErrorCodeADSDKInitError           = 800007,//初始化SDK异常
    AdSetQDDErrorCodeADSourceBiddingFailError = 800008,//广告源竞价失败
    AdSetQDDErrorCodeADRenderError            = 800009,//广告渲染失败
};
/**
 广告点击类型
 */
typedef NS_ENUM(NSInteger, AdSetQDDTargetType) {
    AdSetQDDTargetTypeDetail = 0,     // 详情页
    AdSetQDDTargetTypeDownload = 1,   // 下载
};
/**
 视频播放状态
 */
typedef NS_ENUM(NSInteger, AdSetQDDPlayerPlayState) {
    AdSetQDDPlayerStateStarted   = 0,
    AdSetQDDPlayerStateFailed    = 1,
    AdSetQDDPlayerStatePlaying   = 2,
    AdSetQDDPlayerStateStopped   = 3,
    AdSetQDDPlayerStatePause     = 4
};
typedef NS_ENUM(NSInteger,AdSetQDDAdBiddingErrorType) {
    AdSetQDDAdBiddingTimeoutErrorType = 0,//超时
    AdSetQDDAdBiddingLossErrorType    = 1,//竞价失败
    AdSetQDDAdBiddingLoadErrorType    = 2 //加载失败
};
typedef NS_ENUM(NSInteger,AdSetQDDAdOpenDPType) {
    AdSetQDDAdStartOpenDP   = 0,//开始唤起
    AdSetQDDAdOpenDPSuccess = 1,//唤起成功
    AdSetQDDAdOpenDPFail    = 2 //唤起失败
};
