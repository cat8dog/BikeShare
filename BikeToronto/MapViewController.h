#import <UIKit/UIKit.h>
#import <Mapkit/Mapkit.h>
#import <Corelocation/Corelocation.h>
#define IS_OS_8_OR_LATER ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

@interface MapViewController : UITabBarController <MKMapViewDelegate,CLLocationManagerDelegate>

@property (strong, nonatomic) MKMapView *mapView;
@property (strong, nonatomic) CLLocationManager *locationManager;
@end
