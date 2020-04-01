#pragma once

#include "pch.h"

#include "NativeModules.h"

namespace ReactNativeMaps
{
    REACT_MODULE(AirMapModule);
    struct AirMapModule
    {
        REACT_INIT(initialize);
        void initialize(IReactContext const& reactContext) noexcept
        {
            m_reactContext = reactContext;
        }

        REACT_CONSTANT(legalNotice);
        const std::wstring legalNotice = L"";

        REACT_METHOD(takeSnapshot);
        void takeSnapshot(int tag, JSValueObject options, ReactPromise<std::string> promise) noexcept
        {
            promise.Reject(L"Not implemented.");
        }

        REACT_METHOD(getCamera);
        void getCamera(int tag, ReactPromise<JSValueObject> promise) noexcept
        {
            promise.Reject(L"Not implemented.");
        }

        REACT_METHOD(pointForCoordinate);
        void pointForCoordinate(int tag, JSValueObject coordinate, ReactPromise<JSValueObject> promise) noexcept
        {
            promise.Reject(L"Not implemented.");
        }

        REACT_METHOD(coordinateForPoint);
        void coordinateForPoint(int tag, JSValueObject point, ReactPromise<JSValueObject> promise) noexcept
        {
            promise.Reject(L"Not implemented.");
        }

        REACT_METHOD(getMapBoundaries);
        void getMapBoundaries(int tag, ReactPromise<JSValueObject> promise) noexcept
        {
            promise.Reject(L"Not implemented.");
        }

    private:
        IReactContext m_reactContext{nullptr};
    };
}