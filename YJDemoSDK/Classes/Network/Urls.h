//
//  Urls.h
//  FootballLotteryMaster
//
//  Created by yj on 16/2/22.
//  Copyright © 2016年 yingjian. All rights reserved.
//

#ifndef Urls_h
#define Urls_h


#pragma mark - 用户相关

// 登录
static NSString * const loginUrl = @"/enterprise/login.action";

// 登出
static NSString * const logoutUrl = @"/enterprise/logout.action";

// 注册(获取验证码)
static NSString * const registerCodeUrl = @"/enterprise/registerCode.action";

// 注册账号
static NSString * const registerUrl = @"/enterprise/register.action";

// 密码找回(获取验证码)
static NSString * const findPasswordCodeUrl = @"/enterprise/findPasswordCode.action";

// 密码找回
static NSString * const findPasswordUrl = @"/enterprise/findPassword.action";

// 修改密码(获取验证码)
static NSString * const changePasswordCodeUrl = @"/enterprise/changePasswordCode.action";

// 修改密码
static NSString * const changePasswordUrl = @"/enterprise/changePassword.action";

// 用户删除企业信息(解除绑定)
static NSString * const deleteCompanyUrl = @"/enterprise/deleteCompany.action";

// 完善用户资料
static NSString * const perfectInfoUrl = @"/enterprise/perfectInfo.action";

// 查询企业用户信息
static NSString * const findUserInfoUrl = @"/enterprise/findUserInfo.action";

#pragma mark - 企业信息

// 查询企业信息
static NSString * const queryCompanyUrl = @"/company/queryCompanyOne.action";

// 企业基本信息--增加、修改
static NSString * const setCompanyBasicUrl = @"/company/setBasic.action";

// 企业实名认证
static NSString * const authenticationCompanyUrl = @"/company/authenticationCompany.action";

// 架构--新增
static NSString * const addOrganizationUrl = @"/role/addOrganization.action";

// 架构--查询
static NSString * const queryOrganizationUrl = @"/role/queryOrganization.action";

// 架构--修改
static NSString * const updateOrganizationUrl = @"/role/updateOrganization.action";

// 架构--删除
static NSString * const deleteOrganizationUrl = @"/role/deleteOrganization.action";

// 架构--查询全部
static NSString * const queryOrganizationAllVUEInit = @"/role/queryOrganizationAllVUEInit.action";

// 角色--新增
static NSString * const addRoleUrl = @"/role/addRole.action";

// 角色--查询
static NSString * const queryRoleUrl = @"/role/queryRole.action";

// 角色--修改
static NSString * const updateRoleUrl = @"/role/updateRole.action";

// 角色--新增时查询菜单
static NSString * const queryRoleDetailsInitUrl = @"/role/queryRoleDetailsInit.action";

// 角色--修改查询详情
static NSString * const queryRoleDetailsUrl = @"/role/queryRoleDetails.action";

// 角色--删除
static NSString * const deleteRoleUrl = @"/role/deleteRole.action";

// 管理员新增
static NSString * const roleChangeEmployee = @"/role/changeEmployee.action";

//管理员修改
static NSString * const roleUpdateUser = @"/role/updateUser.action";

// 管理员列表查询
static NSString * const roleQueryUserUrl = @"/role/queryUser.action";

// 删除当前管理员
static NSString * const enterpriseDeleteUserCompanyUrl = @"/enterprise/deleteUserCompany.action";

// 设为主账号--禅让管理者
static NSString * const enterpriseAbdicateUrl = @"/enterprise/abdicate.action";

#pragma mark - 任务

// 搜索项目
static NSString * const searchProjectUrl = @"/task/searchProject.action";

// 搜索批次
static NSString * const searchBatchUrl = @"/task/searchBatch.action";

// 根据批次查询任务详情
static NSString * const queryTaskInfoByBatchUrl = @"/task/queryTaskInfoByBatch.action";

// 根据批次查询完成的job任务
static NSString * const queryCompleteJobByBatchUrl = @"/task/queryCompleteJobByBatch.action";

#pragma mark - 广告轮播

// 获取轮播信息
static NSString * const listBannerUrl = @"/banner/listBanner.action";

#pragma mark - 反馈

// 反馈意见
static NSString * const feedbackUrl = @"/task/feedback.action";

#pragma mark - 文件上传

// 文件上传,只返回文件url
static NSString * const fileUploadUrl = @"/fileUpload.action";

// 文件上传返回详细信息接口
static NSString * const uploadUrl = @"/upload.action";

#pragma mark - 余额

// 查询某用户可用余额
static NSString * const queryAssetsUrl = @"/company/queryAssetsRMB.action";

// 查询收入消费记录
static NSString * const queryBlanceRecordUrl = @"/company/queryBlanceRecord.action";

#pragma mark - 其他

#endif /* Urls_h */
