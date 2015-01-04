/*
    Copyright (C) 2014-2015 Alexandr Akulich <akulichalexander@gmail.com>

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

*/

#include "CAppInformation.hpp"

CAppInformation::CAppInformation() :
    m_appId(0),
    m_appHash(QLatin1String("00000000000000000000000000000000")),
    m_langCode(QLatin1String("en"))
{

}

CAppInformation::CAppInformation(const CAppInformation *anotherInfo) :
    m_appId(anotherInfo->m_appId),
    m_appHash(anotherInfo->m_appHash),
    m_appVersion(anotherInfo->m_appVersion),
    m_deviceInfo(anotherInfo->m_deviceInfo),
    m_osInfo(anotherInfo->m_osInfo),
    m_langCode(anotherInfo->m_langCode)
{

}

bool CAppInformation::setAppId(quint32 newId)
{
    if (!newId) {
        return false;
    }

    m_appId = newId;

    return true;
}

bool CAppInformation::setAppHash(const QString &newHash)
{
    if (newHash.length() != 32) {
        return false;
    }

    m_appHash = newHash;

    return true;
}

bool CAppInformation::setAppVersion(const QString &newVersion)
{
    if (newVersion.isEmpty()) {
        return false;
    }

    m_appVersion = newVersion;

    return true;
}

bool CAppInformation::setDeviceInfo(const QString &newDeviceInfo)
{
    if (newDeviceInfo.isEmpty()) {
        return false;
    }

    m_deviceInfo = newDeviceInfo;

    return true;
}

bool CAppInformation::setOsInfo(const QString &newOsInfo)
{
    if (newOsInfo.isEmpty()) {
        return false;
    }

    m_osInfo = newOsInfo;

    return true;
}

bool CAppInformation::setLanguageCode(const QString &newLanguageCode)
{
    if (newLanguageCode.isEmpty()) {
        return false;
    }

    m_langCode = newLanguageCode;

    return true;
}
