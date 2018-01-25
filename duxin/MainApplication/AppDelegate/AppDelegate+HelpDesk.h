//
//  AppDelegate+EaseMob.h
//  EasMobSample
//
//  Created by dujiepeng on 12/5/14.
//  Copyright (c) 2014 dujiepeng. All rights reserved.
//

#import "AppDelegate.h"
#import "Header.h"

@interface AppDelegate (HelpDesk)<UIAlertViewDelegate,HChatClientDelegate>
- (void)easemobApplication:(UIApplication *)application
didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
-(void)resetCustomerServiceSDK;
-(void)userAccountDidRemoveFromServer ;
-(void)userAccountDidLoginFromOtherDevice;

@end
