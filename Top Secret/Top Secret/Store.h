//
//  Store.h
//  Top Secret
//
//  Created by Eric Welsh on 10/30/13.
//  Copyright (c) 2013 Bradley. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Store : NSObject
{
    NSMutableArray* currentBattles;
    NSMutableArray* players;
    NSMutableArray* announcements;
    NSMutableArray* questions;
}
/******************************************************/
/*                                                    */
/*  Initializes an instance of a shared store to      */
/*  contain user data for the life of the             */
/*  application.                                      */
/*                                                    */
/******************************************************/
+(Store*)sharedStore;
/******************************************************/
/*                                                    */
/*  Returns an NSArray containing the objectId and    */
/*  userName of all currently registered players in   */
/*  the application.                                  */
/*                                                    */
/******************************************************/
-(NSArray*)getAllPlayers;

@end
