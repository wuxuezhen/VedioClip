//
//  AppDelegate.h
//  视频剪切
//
//  Created by 吴振振 on 2018/3/22.
//  Copyright © 2018年 吴振振. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

