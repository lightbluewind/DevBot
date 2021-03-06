//
//  GOXcodeBuildOperation.h
//  DevBot
//
//  Created by Samuel Goodwin on 1/10/13.
//

#import <Foundation/Foundation.h>

@interface DVBXcodeBuildOperation : NSOperation
@property (assign, getter=isExecuting) BOOL executing;
@property (assign, getter=isFinished) BOOL finished;

@property (nonatomic, copy) NSString *folderPath;
@property (nonatomic, copy) NSString *title;

@property (nonatomic, copy) NSString *appFilePath;
@property (nonatomic, copy) NSString *dSYMFilePath;
@property (nonatomic, copy) NSString *rawText;
@property (nonatomic, strong) NSError *error;

- (id)initWithPath:(NSString *)path projectTitle:(NSString *)title;

@end
