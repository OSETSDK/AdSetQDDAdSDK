//
//  AdSetQDDNativeFeedAdConfigModel.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2025/6/10.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kAdSetQDDCPNativeFeedAdMediaDrawingKey;//请求开屏展示类型
extern NSString *const kAdSetQDDCPNativeFeedAdMediaRequestAdSizeKey;//请求信息流size
extern NSString *const kAdSetQDDCPNativeFeedAdMediaRequestAdCountKey;//请求信息流count
extern NSString *const kAdSetQDDCPNativeFeedAdMediaVideoMutedKey;//设置视频静音开关
extern NSString *const kAdSetQDDCPNativeFeedAdMediaVideoAutoPlayKey;//设置视频自动播放
extern NSString *const kAdSetQDDCPNativeFeedAdMediaClkLimitKey;//广告请求接口类型
extern NSString *const kAdSetQDDCPNativeFeedAdMediaExpireTimestampKey;//
extern NSString *const kAdSetQDDCPNativeFeedAdMediaMediaExtConfigKey;//媒体个性化参数
extern NSString *const kAdSetQDDCPNativeFeedAdMediaAdnNameKey;//广告源名称
extern NSString *const kAdSetQDDCPNativeFeedAdMediaAdnPidKey;//当前广告源广告位ID
extern NSString *const kAdSetQDDCPNativeFeedAdMediaMediationPidKey;//聚合广告位ID
extern NSString *const kAdSetQDDCPNativeFeedAdMediaADNAcceptIDKey;//当前广告源接受方ID
extern NSString *const kAdSetQDDCPNativeFeedAdMediaShowVideoDetailKey;//展示Video详情
extern NSString *const kAdSetQDDCPNativeFeedAdMediaShowLogoKey;//展示Video详情
extern NSString *const kAdSetQDDCPNativeFeedAdMediaRequestAdInterfaceKey;//广告请求接口类型
extern NSString *const kAdSetQDDCPNativeFeedAdMediaAutoRenderKey;//是否自动渲染

@interface AdSetQDDNativeFeedAdConfigModel : NSObject
/**
 请求信息流展示类型
 */
@property(nonatomic,assign,readonly)NSInteger requestAdType;
/**
 请求信息流size
 */
@property(nonatomic,assign,readonly)CGSize requestAdSize;
/**
 请求信息流count
 */
@property(nonatomic,assign,readonly)NSInteger requestAdCount;
/**
 设置视频静音开关 默认静音
 */
@property(nonatomic,assign,readonly)BOOL videoMuted;
/**
 设置视频自动播放
 */
@property(nonatomic,assign,readonly)BOOL videoAutoPlay;
/**
 广告交互类型
 */
@property(nonatomic,assign,readonly)NSInteger adInteractionType;
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
 当前广告源广告位ID，真正请求ADN接口广告时的广告位ID
 */
@property(nonatomic,copy,readonly,nullable)NSString *adnPid;
/**
 当前广告源接受方ID
 */
@property(nonatomic,copy,readonly,nullable)NSString *adnAcceptID;
/**
 聚合广告位ID，
 */
@property(nonatomic,copy,readonly,nullable)NSString *mediationPid;
/**
  展示Video详情
 */
@property(nonatomic,assign,readonly)BOOL isShowVideoDetail;
/**
  展示logo
 */
@property(nonatomic,assign,readonly)BOOL isShowLogo;
/**
 广告请求接口类型
 */
@property(nonatomic,assign,readonly)AdSetQDDAdType requestAdInterface;
/**
 * 是否自动渲染 默认YES （可选参数）
 */
@property(nonatomic,assign)BOOL isAutoRender;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
