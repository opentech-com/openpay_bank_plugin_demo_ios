//
//  OTHTTPMultipartBuilder.h
//  OTMLCore
//
//  Created by Valerio Ferrantelli on 09/05/2019.
//

#import <Foundation/Foundation.h>

@interface MultiPartFormDataObject : NSObject

@property (nonatomic, retain) NSString * key;
@property (nonatomic, retain) NSString * value;
@property (nonatomic, retain) NSData * object;
@property (nonatomic, retain) NSString * contentType;


@end

@interface OTHTTPMultipartBuilder : NSObject

- (NSData *)multipartDataWithParameters:(NSArray<MultiPartFormDataObject*> *)parameters boundary:(NSString **)boundary;

@end

