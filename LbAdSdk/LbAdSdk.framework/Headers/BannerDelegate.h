//
//  BannerDelegate.h
//  LbAdDemo
//
//  Created by SX on 2021/9/18.
//



#import <AnyThinkBanner/AnyThinkBanner.h>

@protocol BannerDelegate<ATAdLoadingDelegate>
@optional
//广告自动刷新失败
-(void) bannerView:(UIView*)bannerView failedToAutoRefreshWithPlacementID:(NSString*)placementID error:(NSError*)error;
//广告展示成功
-(void) bannerView:(UIView*)bannerView didShowAdWithPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;
//广告点击
-(void) bannerView:(UIView*)bannerView didClickWithPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;
//广告关闭
-(void) bannerView:(UIView*)bannerView didCloseWithPlacementID:(NSString*)placementID extra:(NSDictionary *)extra DEPRECATED_ATTRIBUTE;
//广告自动刷新成功
-(void) bannerView:(UIView*)bannerView didAutoRefreshWithPlacement:(NSString*)placementID extra:(NSDictionary *)extra;
//广告中关闭按钮点击
-(void) bannerView:(UIView*)bannerView didTapCloseButtonWithPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
@end
