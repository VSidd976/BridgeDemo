#include "Control.h"
#include "Device.h"
using namespace std;

int main()
{
    cout << boolalpha;
    cout << "Bridge Demo" << endl;
    cout << "\n==========================================================\n" << endl;

    SmartTV tv;
    SmartLight light;

    cout << "tv.isEnabled(): " << tv.isEnabled() << endl;
    cout << "light.isEnabled(): " << light.isEnabled() << endl;

    cout << "\ntv.getChannel(): " << tv.getChannel() << endl;
    cout << "tv.getVolume(): " << tv.getVolume() << endl;
    cout << "light.getVolume(): " << light.getVolume() << endl;

    BasicRemote<SmartTV> basicRemote(tv);
    VoiceControl<SmartLight> voiceControl(light);

    basicRemote.togglePowerUp();
    voiceControl.togglePowerUp();

    cout << "\ntv.isEnabled(): " << tv.isEnabled() << endl;
    cout << "light.isEnabled(): " << light.isEnabled() << endl;

    basicRemote.volumeUp();
    basicRemote.volumeUp();

    basicRemote.channelUp();
    basicRemote.channelUp();

    cout << "\ntv.getVolume(): " << tv.getVolume() << endl;
    cout << "tv.getChannel(): " << tv.getChannel() << endl;

    voiceControl.executeCommand("more");
    voiceControl.executeCommand("more");

    cout << "\nlight.getVolume(): " << light.getVolume() << endl;

    basicRemote.togglePowerUp();
    voiceControl.togglePowerUp();

    cout << "\ntv.isEnabled(): " << tv.isEnabled() << endl;
    cout << "light.isEnabled(): " << light.isEnabled() << endl;

    return 0;
}
