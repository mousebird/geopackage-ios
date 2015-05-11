//
//  GPKGBaseDao.h
//  geopackage-ios
//
//  Created by Brian Osborn on 5/8/15.
//  Copyright (c) 2015 NGA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GPKGConnection.h"

@interface GPKGBaseDao : NSObject

@property (nonatomic) GPKGConnection *database;

-(instancetype) initWithDatabase: (GPKGConnection *) database;

-(NSArray *) query: (NSString *) query;

-(NSArray *) singleColumnResults: (NSArray *) results;

-(NSString *) tableName;

-(NSObject *) create: (NSArray *) values;

-(BOOL) isTableExists;

-(NSArray *) queryForAll;

@end