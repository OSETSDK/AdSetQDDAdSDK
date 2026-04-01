//
//  AdSetQDDCPSDKConfigModel.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2025/5/23.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigShakableSwitchKey;//广告交互（摇一摇/扭一扭）开关
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigSensorSwitchKey;//传感器开关
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaPidKey;//广告源广告位id
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaAppKey;//广告源appkey
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaExtKey;//媒体自定义参数
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaAppidKey;//广告源appid
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaReqUUIDKey;//本次请求ID
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCustomAdIdKey;//自定义idfa
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCustomIDFAKey;//自定义idfa
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCanUseIDFAKey;//是否可以获取IDFA
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaOpenDebugLogKey;//log日志开关
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCustomLatitudeKey;//媒体自定义纬度
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCustomLongitudeKey;//媒体自定义经度
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCanUseLocationKey;//是否可以使用定位功能
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCustomUserAgentKey;//媒体自定义UA
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCanUseIPAddressKey;//是否可以使用IP
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCanUsePersonalRecommendKey;//是否开启个性化推荐
extern NSString *const kAdSetQDDAdSetQDDCPSDKConfigMediaCanUseSdkPermissionEnableKey;//是否开启设备新标志能力

@interface AdSetQDDCPSDKConfigModel : NSObject
//初始化SDK appid
@property(nonatomic,copy,readonly)NSString *appid;
//广告位id
@property(nonatomic,copy,readonly)NSString *pid;
//初始化SDK appkey
@property(nonatomic,copy,readonly,nullable)NSString *app_key;
//本次请求ID
@property(nonatomic,copy,readonly)NSString *req_uuid;
//自定义idfa
@property(nonatomic,copy,readonly,nullable)NSString *mediaCustomIDFA;
//自定义ad_id
@property(nonatomic,copy,readonly,nullable)NSString *mediaCustomAdId;
//是否可以使用定位功能 默认YES
@property(nonatomic,assign,readonly)BOOL canUseLocation;
//媒体自定义纬度
@property(nonatomic,copy,readonly,nullable)NSString *mediaCustomLatitude;
//媒体自定义经度
@property(nonatomic,copy,readonly,nullable)NSString *mediaCustomLongitude;
//是否可以使用IP 默认YES
@property(nonatomic,assign,readonly)BOOL canUseIPAddress;
//是否可以获取IDFA 默认YES
@property(nonatomic,assign,readonly)BOOL canUseIDFA;
//是否开启设备新标志能力（默认开启 Yes：开启   NO：不开启）
@property(nonatomic,assign,readonly)BOOL canUseSdkPermissionEnable;
//是否开启个性化推荐（默认开启推荐 Yes：推荐 NO：不推荐）
@property(nonatomic,assign,readonly)BOOL canUsePersonalRecommend;
//媒体自定义UA
@property(nonatomic,copy,readonly,nullable)NSString *mediaCustomUserAgent;
//媒体自定义参数
@property(nonatomic,copy,readonly,nullable)NSString *mediaExt;
//log日志开关
@property(nonatomic,assign,readonly)BOOL openDebugLog;
//广告交互（摇一摇/扭一扭）开关 默认开启
@property(nonatomic,assign,readonly)BOOL shakableSwitch;
//传感器开关 全局生效 默认开启
@property(nonatomic,assign,readonly)BOOL sensorSwitch;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
