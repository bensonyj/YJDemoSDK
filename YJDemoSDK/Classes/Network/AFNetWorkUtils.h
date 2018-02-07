#import <Foundation/Foundation.h>
#import <ReactiveCocoa.h>
#import "NSErrorHelper.h"
#import "NetJson.h"
#import "Urls.h"

@class MBProgressHUD;

typedef NS_ENUM(NSInteger, NetType) {
    NONet,
    WiFiNet,
    OtherNet,
};

typedef void(^Success)(NSDictionary *dic);
typedef void(^Fail)(NSError *);

@interface AFNetWorkUtils : NSObject


@property (nonatomic, copy)Success success;
@property (nonatomic, copy)Fail fail;



@property(nonatomic, assign) NSInteger netType;

@property(nonatomic, strong) NSString *netTypeString;

- (instancetype)initWithSuccess:(Success)success fail:(Fail)fail;


+ (AFNetWorkUtils *)sharedAFNetWorkUtils;

- (void)addHTTPHeaderField:(NSString *)token;

- (void)removeHTTPHeaderField:(NSString *)key;

- (void)startMonitoring;

- (RACSignal *)startMonitoringNet;

+ (RACSignal *)racPOSTImageWithURL:(NSString *)url params:(NSDictionary *)params data:(NSData *)data name:(NSString *)name;

+ (RACSignal *)racPOSTWthURL:(NSString *)url params:(NSDictionary *)params;

+ (RACSignal *)racPOSTWithURL:(NSString *)url params:(NSDictionary *)params class:(Class)clazz;

+ (RACSignal *)racGETUNJSONWthURL:(NSString *)url params:(NSDictionary *)params;

+ (RACSignal *)racGETWthURL:(NSString *)url params:(NSDictionary *)params;

+ (RACSignal *)racGETWithURL:(NSString *)url params:(NSDictionary *)params class:(Class)clazz;

#pragma mark - 直接解析错误信息

+ (NSString *)errorMessage:(NSError *)error;



- (void)getDataFormServerWithAddress:(NSString *)address andParameters:(NSDictionary *)parameters success:(Success)success fail:(Fail)fail;
@end
