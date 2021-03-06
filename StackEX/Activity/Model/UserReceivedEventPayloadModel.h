//
//  UserReceivedEventPayloadModel.h
//  Monkey
//
//  Created by coderyi on 15/7/22.
//  Copyright (c) 2015年 www.coderyi.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HDZRepositories.h"
@interface UserReceivedEventPayloadModel : NSObject
//started
@property(nonatomic,copy) NSString *action;

//CreateEvent
@property(nonatomic,copy) NSString *ref;
@property(nonatomic,copy) NSString *ref_type;
@property(nonatomic,copy) NSString *master_branch;
@property(nonatomic,copy) NSString *payloadDescription;
@property(nonatomic,copy) NSString *pusher_type;

//fork
@property(nonatomic,strong)HDZRepositories *forkee;
@end
