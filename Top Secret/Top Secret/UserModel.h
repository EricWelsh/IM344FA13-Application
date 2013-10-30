//
//  UserModel.h
//  Top Secret
//
//  Created by Eric Welsh on 10/30/13.
//  Copyright (c) 2013 Bradley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserModel : NSObject
{
    NSString* userName;
    NSString* userEmail;
    NSMutableArray* currentClasses;
    NSMutableArray* previousClasses;
    int level;
    NSMutableArray* badges;
    int experienceTotal;
    NSString* bio;
    int status;
}
@end
