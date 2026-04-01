//
//  AdSetQDDBaseLoader.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2020/7/14.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AdSetQDDSDKDefines.h"

NS_ASSUME_NONNULL_BEGIN
/**
 广告请求成功后，通过-(NSDictionary *)mediaExt;获取竞胜广告的具体信息
 以下为具体信息对应的key
 */
//渠道appid
extern NSString *const kAdSetQDDAdMediaAdnAppidKey;
//渠道pid
extern NSString *const kAdSetQDDAdMediaAdnPidKey;
//渠道名称
extern NSString *const kAdSetQDDAdMediaAdnNameKey;
/**
 渠道名称int值 映射关系参考
 AdSetQDDPlatform枚举
 */
extern NSString *const kAdSetQDDAdMediaAdnPlatformKey;
//渠道出价 单位：分 [该渠道为客户端bidding模式下，返回渠道出价，非客户端bidding模式下，返回神蓍平台设置的出价]
extern NSString *const kAdSetQDDAdMediaAdnEcpmKey;
//神蓍平台价格 单位：分 [获取该渠道在神蓍平台设置的出价]
extern NSString *const kAdSetQDDAdMediaAdnPlatformPriceKey;
//神蓍平台 fromid [仅支持神蓍平台]
extern NSString *const kAdSetQDDAdMediaAdnFromIdKey;
//场景code
extern NSString *const kAdSetQDDAdMediaAdnScodeKey;
//场景扩展字段
extern NSString *const kAdSetQDDAdMediaAdnSextKey;
//神蓍平台 adCats 为投放行业ID [仅支持神蓍平台]
extern NSString *const kAdSetQDDAdMediaAdCatsKey;
//神蓍平台 adCids 为创意ID [仅支持神蓍平台]
extern NSString *const kAdSetQDDAdMediaAdCidsKey;
//神蓍平台 aderIds为 广告主ID [仅支持神蓍平台]
extern NSString *const kAdSetQDDAdMediaAderIdsKey;
//请求id
extern NSString *const kAdSetQDDAdMediaAdnAdRequestIdentifierKey;
/**C2S bidding上报参数
 注意：上报接口传入的字典中value值类型为字符串！！！
 如何使用：
 1、神蓍竞价成功上报
 NSDictionary *adInfo = @{kAdSetQDDAdMediaWinPrice:@"竞胜方价格",kAdSetQDDAdMediaLossPrice:@"最大竞败方出价"}
 [AdSetQDDBaseAd sendWinNotificationWithInfo:adInfo];
 2、神蓍竞价失败上报
 NSDictionary *adInfo = @{kAdSetQDDAdMediaWinPrice:@"竞胜方价格",kAdSetQDDAdMediaLossReason:@"神蓍竞败原因",kAdSetQDDAdMediaWinADN:@"竞胜方渠道ID"}
 kAdSetQDDAdMediaLossReason失败原因从(1：竞争力不足 101：未参与竞价 10001：其他)中按照实际情况填写
 kAdSetQDDAdMediaWinADN渠道ID(1：神蓍其他非bidding广告位 2：第三方ADN 3：自售广告主 4：神蓍其他bidding广告位)中按照实际情况填写
 [AdSetQDDBaseAd sendLossNotificationWithInfo:adInfo];
*/
/**以下为C2S bidding上报参数key**/
//竞胜方价格 单位：分 (kAdSetQDDAdMediaWinPrice value值务必转为NSString类型)
#define kAdSetQDDAdMediaWinPrice   @"_WIN_PRICE_"
//最大竞败方出价 单位：分 (kAdSetQDDAdMediaLossPrice value值务必转为NSString类型)
#define kAdSetQDDAdMediaLossPrice  @"_LOSS_PRICE_"
//神蓍竞败原因(AdSetQDDMediaLossReason中取值，注意该值务必转为NSString类型)
#define kAdSetQDDAdMediaLossReason @"_LOSS_REASON_"
//神蓍竞胜方渠道ID(AdSetQDDMediaWinADN中取值，注意该值务必转为NSString类型)
#define kAdSetQDDAdMediaWinADN     @"_ADN_ID_"

//失败原因枚举（即kAdSetQDDAdMediaLossReason值，注意kAdSetQDDAdMediaLossReason值务必转为NSString类型）
typedef NS_ENUM(NSInteger,AdSetQDDMediaLossReason) {
    AdSetQDDMediaLossReasonLowPrice    = 1,//竞争力不足
    AdSetQDDMediaLossReasonNoBidding   = 101,//未参与竞价
    AdSetQDDMediaLossReasonOther       = 10001 //其他
};
//神蓍竞胜方渠道ID枚举（即kAdSetQDDAdMediaWinADN值，注意kAdSetQDDAdMediaWinADN值务必转为NSString类型）
typedef NS_ENUM(NSInteger,AdSetQDDMediaWinADN) {
    AdSetQDDMediaWinADN_AdSetQDDNoBidding    = 1,//神蓍其他非bidding广告位
    AdSetQDDMediaWinADN_ThirdADN       = 2,//第三方ADN
    AdSetQDDMediaWinADN_Advertisers    = 3, //自售广告主
    AdSetQDDMediaWinADN_AdSetQDDBidding      = 4 //神蓍其他bidding广告位
};

@interface AdSetQDDBaseAd : NSObject
//当前广告位id
@property(nonatomic,copy)NSString *pid;
/**
 广告加载成功后获取媒体配置信息
 */
-(NSDictionary *)mediaExt;
/**广告类型 */
-(AdSetQDDAdType)adType;
/**
 *  竞价成功上报
 *  竞胜之后调用, 需要在调用广告show接口前调用
 *
 *  @param adInfo 竞胜信息，字典类型，必填，支持的key（key是个宏
 *  AdSetQDDBaseAd.h中有定义）为以下内容。
 *  kAdSetQDDAdMediaWinPrice：竞胜价格 (单位: 分)。值类型为NSString
 *  kAdSetQDDAdMediaLossPrice：最高失败出价 (单位: 分)。值类型为NSString
 *
 */
-(void)sendWinNotificationWithInfo:(NSDictionary *)adInfo;
/**
 *  竞败之后调用
 *
 *  @param adInfo 竞败信息，字典类型，必填，支持的key（key是个宏
 *  AdSetQDDBaseAd.h中有定义）为以下内容
 *  kAdSetQDDAdMediaWinPrice ：竞胜价格 (单位: 分)。值类型为NSString
 *  kAdSetQDDAdMediaLossReason ：广告竞败原因。竞败原因参考枚举
 *  AdSetQDDMediaLossReason中的定义，值类型为NSString
 *
 *  kAdSetQDDAdMediaWinADN ：竞胜方渠道ID。渠道ID参考枚举
 *  AdSetQDDMediaWinADN中的定义，值类型为NSString
 *  
 *  对于【AdSetQDDMediaWinADN】字段回传支持4个枚举值，分别代表：
 *  1 - 输给神蓍其他非bidding广告位
 *  2 - 输给第三方ADN
 *  3 - 输给自售广告主
 *  4 - 输给神蓍其他bidding广告位
 */
-(void)sendLossNotificationWithInfo:(NSDictionary *)adInfo;
@end

NS_ASSUME_NONNULL_END
