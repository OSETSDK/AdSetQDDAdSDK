//
//  AdSetQDDCPBannerAdConfigModel.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2025/6/5.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kAdSetQDDCPBannerAdMediaDrawingKey;//请求展示类型
extern NSString *const kAdSetQDDCPBannerAdMediaVideoMutedKey;//设置视频静音开关
extern NSString *const kAdSetQDDCPBannerAdMediaShowCloseBtnKey;//是否展示关闭按钮
extern NSString *const kAdSetQDDCPBannerAdMediaIntervalKey;//banner刷新时长
extern NSString *const kAdSetQDDCPBannerAdMediaClkLimitKey;//广告交互类型
extern NSString *const kAdSetQDDCPBannerAdMediaExpireTimestampKey;//广告过期时长
extern NSString *const kAdSetQDDCPBannerAdMediaMediaExtConfigKey;//媒体个性化参数
extern NSString *const kAdSetQDDCPBannerAdMediaAdnNameKey;//广告源名称
extern NSString *const kAdSetQDDCPBannerAdMediaAutoRenderKey;//是否自动渲染
extern NSString *const kAdSetQDDCPBannerAdMediaADNAcceptIDKey;//当前广告源接受方ID

@interface AdSetQDDCPBannerAdConfigModel : NSObject
/**
 请求banner展示类型
 */
@property(nonatomic,assign,readonly)NSInteger requestAdType;
/**
 设置视频静音开关 默认静音
 */
@property(nonatomic,assign,readonly)BOOL videoMuted;
/**
 是否展示关闭按钮
 */
@property(nonatomic,assign,readonly)BOOL showCloseBtn;
/**
 banner刷新时长
 */
@property(nonatomic,assign,readonly)NSInteger interval;
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
