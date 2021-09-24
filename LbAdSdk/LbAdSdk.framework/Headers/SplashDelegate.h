//
//  SplashDelegate.h
//  LbAdDemo
//
//  Created by SX on 2021/9/16.
//
#import <AnyThinkSDK/AnyThinkSDK.h>

@protocol SplashDelegate <ATAdLoadingDelegate>

@optional
//广告展示成功
-(void)splashDidShowForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
//广告点击
-(void)splashDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
//广告关闭
-(void)splashDidCloseForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
//广告小窗口关闭
-(void)splashZoomOutViewDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
//广告小窗口关闭
-(void)splashZoomOutViewDidCloseForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
//广告关闭详情页回调
- (void)splashDetailDidClosedForPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
//广告展示失败
- (void)splashDidShowFailedForPlacementID:(NSString*)placementID error:(NSError *)error extra:(NSDictionary *)extra;
//广告倒计时回调
- (void)splashCountdownTime:(NSInteger)countdown forPlacementID:(NSString*)placementID extra:(NSDictionary *) extra;
@end
