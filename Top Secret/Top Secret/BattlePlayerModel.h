//
//  BattlePlayerModel.h
//  Top Secret
//
//  Created by Eric Welsh on 10/30/13.
//  Copyright (c) 2013 Bradley. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UserModel.h"

@interface BattlePlayerModel : NSObject
{
    UserModel* player;
    int percent;
    int action;
}
@end
