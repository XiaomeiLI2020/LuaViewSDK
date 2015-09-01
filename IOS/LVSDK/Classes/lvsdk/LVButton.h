//
//  LVButton.h
//  lv5.1.4
//
//  Created by dongxicheng on 12/17/14.
//  Copyright (c) 2014 dongxicheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LVHeads.h"
#import "LView.h"


@interface LVButton : UIButton<LVProtocal>

@property(nonatomic,weak) LView* lv_lview;
@property(nonatomic,assign) LVUserDataView* lv_userData;

-(id) init:(lv_State*) l;

+(int) classDefine:(lv_State *)L ;

-(void) lvButtonCallBack;

@end