//
//  BaseDelegate.h
//  LbAdDemo
//
//  Created by SX on 2021/9/17.
//

#import <AnyThinkSDK/AnyThinkSDK.h>
@protocol BaseDelegate <ATAdLoadingDelegate>

@required
-(BOOL) isReady;
-(void) show;

@optional
-(void) clear;
-(void) reload;
-(NSArray<NSDictionary *> *) getValidAds;

@end
