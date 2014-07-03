/******************************************
  * uWebKit 
  * (c) 2014 THUNDERBEAST GAMES, LLC
  * website: http://www.uwebkit.com email: sales@uwebkit.com
  * Usage of this source code requires a uWebKit Source License
  * Please see UWEBKIT_SOURCE_LICENSE.txt in the root folder 
  * for details
*******************************************/

#pragma once

#include <string>

class UWKConfig
{    
    static std::string webRenderProcessPath_;
    static std::string serverProcessPath_;
    static std::string webRenderProcessWorkingPath_;
    static std::string persistentDataPath_;
    static std::string dataPath_;
    static std::string temporaryCachePath_;
    static std::string graphicsDeviceVersion_;
    static bool imeEnabled_;

public:

    // TODO: proxy info

    static void GetJSON(std::string& json);
    static void GetBase64(std::string& base64);

    static void GetServerProcessPath(std::string& path);

    static void GetWebRenderProcessPath(std::string& path);
    static void GetWebRenderProcessWorkingPath(std::string& path);

    static void GetDataPath(std::string& path);
    static void GetPersistentDataPath(std::string& path);
    static void GetTemporaryCachePath(std::string& path);
    static void GetGraphicsDeviceVersion(std::string& deviceVersion);
    static bool GetIMEEnabled();

    static bool InitFromUnityJSON(std::string& json);
    static bool InitDevDefaults();

    static bool SetFromJSON(const std::string& json);
    static bool SetFromBase64(const std::string& base64);

    static void SetServerProcessPath(const std::string& path);
    static void SetWebRenderProcessPath(const std::string& path);
    static void SetWebRenderProcessWorkingPath(const std::string& path);
    static void SetDataPath(const std::string& path);
    static void SetPersistentDataPath(const std::string& path);
    static void SetTemporaryCachePath(const std::string& path);
    static void SetGraphicsDeviceVersion(const std::string& graphicsVersion);
    static void SetIMEEnabled(bool imeEnabled);

    static bool IsDirect3D9();
    static bool IsDirect3D11();
    static bool IsOpenGL();

    static bool IMEEnabled();

};
