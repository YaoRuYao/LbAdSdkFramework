//
//  InterstitialAD.h
//  LbAdDemo
//
//  Created by SX on 2021/9/22.
//

#import <UIKit/UIKit.h>
#import "BaseAD.h"
#import "InterstitialDelegate.h"

@interface InterstitialAD:BaseAD {
    UIViewController * _controller;
}

- (instancetype) initWithPlacementID:(NSString *)id viewController:(UIViewController *)viewController  delegate:(id<InterstitialDelegate>)delegate;

@end
