//
//  OTMPCameraManager.h
//  OTMLFramework
//
//  Created by Alessandro Ruggeri on 12/02/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

#import <OTMLCore/OTMLCore-umbrella.h>
#import <OTMLModels/OTMLBarCodeType.h>
#import <OTMLModels/OTMLBarCodeFormat.h>
#import <OTMLModels/OTMLCameraCaptureOutputMode.h>


@interface OTMLCameraManager : NSObject

@property (nonatomic, assign) BOOL useFrontCamera;
@property (nonatomic, assign) BOOL useFlashLight;
@property (nonatomic, assign, readonly) BOOL isCapturing;

-(CGSize)getVideoSessionResolution;
-(void) readaptToNewViewDimensions;

-(void)mountPreviewInView:(UIView*)aView;
-(void)startCapture;
-(void)stopCapture;



//generic
@end


@interface OTMLCameraManager_PhotoImpl : OTMLCameraManager

@property (nonatomic, assign) OTMLCameraCaptureOutputMode outputMode;

//photo
-(void)takePhoto:(OTMLSimpleCallback)completationBlock;

@end



@interface OTMLBarcodeValueModel : NSObject
@property (nonatomic, strong) NSString * barcodeValue;
@property (nonatomic, assign) OTMLBarCodeFormat barcodeFormat;
+(OTMLBarCodeFormat)otmlFormatWithiOSFormat:(NSString*)aNativeFormat;
@end


@interface OTMLCameraManager_BarcodeReaderImpl : OTMLCameraManager <AVCaptureMetadataOutputObjectsDelegate>
@property (nonatomic, assign) OTMLBarCodeType barcodeReaderTypes;
-(void)startBarcodeReader:(OTMLSimpleCallback)completationBlock;
@end


@interface OTMLCameraManager_VideoImpl : OTMLCameraManager <AVCaptureVideoDataOutputSampleBufferDelegate>

@property (nonatomic, readonly, strong) UIImage * lastFrame;
@property (nonatomic, assign) CGFloat fps;
@property (nonatomic, copy) OTMLSimpleCallback frameAvailableCallback;
@property (nonatomic, assign) AVCaptureSessionPreset sessionPreset;

@end
