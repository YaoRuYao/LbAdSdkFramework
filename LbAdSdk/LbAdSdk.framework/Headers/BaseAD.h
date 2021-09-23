//
//  BaseAD.h
//  LbAdDemo
//
//  Created by SX on 2021/9/16.
//

#import <UIKit/UIKit.h>
#import <AnyThinkSDK/AnyThinkSDK.h>

@interface BaseAD<__covariant T> :NSObject{
    NSString *_placementID;
    T _delegate;
}
- (void)didFailToLoadADWithPlacementID:(NSString *)placementID error:(NSError *)error;

- (void)didFinishLoadingADWithPlacementID:(NSString *)placementID;

- (UIViewController *)getCurrentVC;

-(BOOL) isReady;

-(void) show;

-(void) clear;

-(void) reload;

-(NSArray<NSDictionary *> *) getValidAds;
@end
