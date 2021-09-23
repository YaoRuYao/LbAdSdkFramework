//
//  NativeAD.h
//  LbAdDemo
//
//  Created by SX on 2021/9/17.
//

#import "BaseAD.h"
#import "NativeDelegate.h"
#import <UIKit/UIKit.h>
#import <AnyThinkNative/AnyThinkNative.h>

@interface NativeConfiguration : NSObject
@property(nonatomic) CGRect ADFrame;
@property(nonatomic) CGRect mediaViewFrame;
@property(nonatomic) BOOL sizeToFit;
@property CGFloat borderWidth;
@property(nonatomic, weak) UIViewController *rootViewController;
@end


@interface  NativeAD:BaseAD {
    UIView *_view;
    NativeConfiguration * _configuration;
}

- (instancetype) initWithPlacementID:(NSString *)id containerView:(UIView *)containerView configuration:(NativeConfiguration*)configuration delegate:(id<NativeDelegate>)delegate;

@end

