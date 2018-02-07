//
//  NetJson.m
//  VoiceMountainShop
//
//  Created by yingjian on 16/7/11.
//  Copyright © 2016年 yingjian. All rights reserved.
//

#import "NetJson.h"

@implementation NetJson

- (instancetype)initWithDict:(NSDictionary *)dict
{

    if (self = [super init]) {
        if ([dict isKindOfClass:[NSDictionary class]]) {
            self.code = dict[@"code"];
            self.msg = dict[@"msg"];
            if ([dict[@"msg"] length] == 0) {
                self.msg = @"服务器出错，程序员小哥哥正在解决...";
            }
            self.data = dict[@"data"];
        }else{
            self.code = @"999999";
            self.msg = @"";
            self.data = nil;
        }
    }
    
    return self;
}

@end
