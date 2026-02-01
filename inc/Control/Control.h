#pragma once
#include<iostream>

template<class Device>
class RemoteControl
{
protected:
    Device& _device;

    RemoteControl() = delete;

    RemoteControl(const RemoteControl&) = delete;
    RemoteControl(RemoteControl&&) = delete;

    RemoteControl& operator=(const RemoteControl&) = delete;
    RemoteControl& operator=(RemoteControl&&) = delete;

public:
    RemoteControl(Device& device): _device(device) {}

    inline void togglePowerUp() { _device.isEnabled() ? _device.disable() : _device.enable(); }
};

template<class Device>
class BasicRemote: public RemoteControl<Device>
{
public:
    using RemoteControl<Device>::RemoteControl;

    inline void channelUp() { this->_device.setChannel(this->_device.getChannel() + 1); }
    inline void channelDown() { this->_device.setChannel(this->_device.getChannel() - 1); }

    inline void volumeUp() { this->_device.setVolume(this->_device.getVolume() + 1); }
    inline void volumeDown() { this->_device.setVolume(this->_device.getVolume() - 1); }
};

template<class Device>
class VoiceControl: public RemoteControl<Device>
{
public:
    using RemoteControl<Device>::RemoteControl;

    void executeCommand(const std::string&);
};

template<class Device>
void VoiceControl<Device>::executeCommand(const std::string& command)
{
    if (command == "less")
    {
        this->_device.setVolume(this->_device.getVolume() - 1);
    }
    else if (command == "more")
    {
        this->_device.setVolume(this->_device.getVolume() + 1);
    }
    else
    {
        std::cout << "Unknown command" << std::endl;
    }
}
