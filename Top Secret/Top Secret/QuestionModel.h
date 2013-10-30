//
//  QuestionModel.h
//  Top Secret
//
//  Created by Eric Welsh on 10/30/13.
//  Copyright (c) 2013 Bradley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QuestionModel : NSObject
{
    NSString* question;
    int type;
    NSMutableArray* answers;
}
@end
