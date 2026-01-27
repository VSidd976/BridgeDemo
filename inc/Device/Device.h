#pragma once

class IDevice
{
public:
    virtual ~IDevice() = default;

    virtual bool isEnabled() = 0;
    virtual void enable() = 0;
    virtual void disable() = 0;
};

class SmartLight: public IDevice
{
private:
    bool _isEnabled = false;
    int _brightness = 0;

public:
    SmartLight() = default;

    inline bool isEnabled() override { return _isEnabled; }
    inline void enable() override { _isEnabled = true; }
    inline void disable() override { _isEnabled = false; }

    inline int getBrightness() { return _brightness; }
    inline void setBrightness(int value) { _brightness = value; }
};

class SmartTV: public IDevice
{
private:
    bool _isEnabled = false;
    int _channel = 0;
    int _volume = 0;

public:
    SmartTV() = default;

    inline bool isEnabled() override { return _isEnabled; }
    inline void enable() override { _isEnabled = true; }
    inline void disable() override { _isEnabled = false; }

    inline int getChannel() { return _channel; }
    inline int getVolume() {return _volume; }

    inline void setChannel(int channel) { _channel = channel; }
    inline void setVolume(int volume) { _volume = volume; }
};
