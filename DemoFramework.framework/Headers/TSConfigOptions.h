//
//  TSConfigOptions.h
//  DemoFramework
//
//  Created by ryan on 2021/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/*
 Debug模式有两种选项:
 *   SensorsAnalyticsDebugOff - 关闭 DEBUG 模式
 *   SensorsAnalyticsDebugOnly - 打开 DEBUG
 */
typedef NS_ENUM(NSInteger, TSAnalyticsDebugMode) {
    TSAnalyticsDebugOff,
    TSAnalyticsDebugOnly,
};

@interface TSConfigOptions : NSObject

/**
 配置对象初始化方法，设置 app_key
 @param app_key 分配的app_key，必须
 @return 配置对象
 */
- (instancetype)initWithAppKey:(nonnull NSString *)app_key serverURL:(NSString *)serverURL launchOptions:(nullable NSDictionary *)launchOptions NS_DESIGNATED_INITIALIZER;

/// 上报的服务器地址
@property(atomic, copy) NSString *serverURL;

/// 设置的app_key
@property(atomic, copy) NSString *app_key;

/// App 启动的 launchOptions
@property(nonatomic, copy) NSDictionary *launchOptions;

/// 是否是每次启动都自动上报数据
@property (nonatomic) BOOL isFirstUpload;

/// 是否是调试模式
@property (nonatomic) TSAnalyticsDebugMode debugMode;

/// 同一个应用，有不同版本时，以该属性区分
@property (nonatomic, copy) NSString *ts_app;

/// 全局自定义扩展属性
@property (nonatomic, copy) NSString *ts_ext;

/// 客户端平台
@property (nonatomic, copy) NSString *platform;

/// 系统信息:操作系统 版本号
@property (nonatomic, copy) NSString *systemInfo;

/// 网络连接状态:2g/4g/wifi 小写字符
@property (nonatomic, copy) NSString *network_type;

/// 业务系统用户唯一标识，设置用户属性时获取， 如果没有，用设备ID当作guid
@property (nonatomic, copy) NSString *guid;

/** 设备ID，应用启动时生成“TS_”前缀+uuid字符 串，
    生成后缓存至本地，使用时取出。 如不清理缓存，将一直存在。
*/
@property (nonatomic, copy) NSString *device_id;

/// 设备操作系统及版本
@property (nonatomic, copy) NSString *device_system;

/// 设备品牌
@property (nonatomic, copy) NSString *device_brand;

/// 设备型号
@property (nonatomic, copy) NSString *device_model;

/// 设备屏幕宽度
@property (nonatomic, copy) NSString *device_screenWidth;

/// 设备屏幕高度
@property (nonatomic, copy) NSString *device_screenHeight;

/// sdk名称
@property (nonatomic, copy) NSString *sdk_name;

/// sdk类型
@property (nonatomic, copy) NSString *sdk_type;

/// sdk版本
@property (nonatomic, copy) NSString *sdk_version;

/// 来源渠道
@property (nonatomic, copy) NSString *business_channel;

/// 来源渠道
@property (nonatomic) NSInteger timestamp;

@property (nonatomic, assign) BOOL isShield;

/**
 * 这个方法返回 UUID
 */
+ (NSString *)getDeviceId;

/**
 * 这个方法返回 SessionID 其实就是UUID 只是不用带TS-前缀
 */
+ (NSString *)getSessionId;

/// 删除本地的UUID
+ (void)deleteDeviceId;

@end

NS_ASSUME_NONNULL_END
