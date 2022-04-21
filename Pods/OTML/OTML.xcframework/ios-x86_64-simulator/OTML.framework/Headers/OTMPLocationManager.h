//
//  OTMPLocationManager.h
//  OTMLFramework
//
//  Created by Valerio Ferrantelli on 10/12/14.
//  Copyright (c) 2014 Opentech ENG. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>
#import <OTMLCore/OTMLRestartAppAwareProtocol.h>

@protocol OTMPTrackLocationDelegate <NSObject>
-(void)trackLocationDidFailWithError:(NSError*)error;
-(void)trackLocationDidUpdateLocation:(CLLocation *)newLocation;
@end
@protocol OTMPAuthLocationDelegate <NSObject>
-(void)trackLocationPermissionDidDenied;
-(void)trackLocationPermissionDidGuaranted;
@end

@interface OTMPLocationManager : NSObject <CLLocationManagerDelegate, OTMLRestartAppAwareProtocol>

+(OTMPLocationManager*)getInstance;

@property (nonatomic, strong) NSObject<OTMPAuthLocationDelegate>* locationAuthDelegate;


#pragma mark location authorization status

-(BOOL)needAuthorization;
-(BOOL)isAuthorizationDenied:(BOOL)always;
-(BOOL)isAuthorizationGrantedForAlways;
-(BOOL)isAuthorizationGrantedForForeground;
-(BOOL)isLocationAvailable;
-(void)askLocationPermissions_iOS8:(BOOL)requestAlwaysAuthorization;

#pragma mark continuous location manger
-(void)startTrackLocation;
-(void)stopTrackLocation;

#pragma mark single location manger
-(void)getCurrentLocation;

//** nel caso di continuous accuracy più alta attiva hardware aggiuntivo, usare per power save**/
//** nel caso di single location determina quando chiamare il delegato (al raggiungimento di un accuracy) + accuracy più alta attiva hardware aggiuntivo, usare per power save**/
-(void)setAccuracy:(CLLocationAccuracy)accuracy;
-(void)addLocationDelegateObject:(NSObject<OTMPTrackLocationDelegate>*)aLocationDelegate;
-(void)removeLocationDelegateObject:(NSObject<OTMPTrackLocationDelegate>*)aLocationDelegate;
-(void)removeAllLocationDelegates;

@end

