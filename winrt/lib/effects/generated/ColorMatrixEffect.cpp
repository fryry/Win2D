// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may
// not use these files except in compliance with the License. You may obtain
// a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations
// under the License.

// This file was automatically generated. Please do not edit it manually.

#include "pch.h"
#include "ColorMatrixEffect.h"

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Effects
{
    ColorMatrixEffect::ColorMatrixEffect()
        : CanvasEffect(CLSID_D2D1ColorMatrix, 3, 1, true)
    {
        // Set default values
        SetBoxedProperty<float[20]>(D2D1_COLORMATRIX_PROP_COLOR_MATRIX, Matrix5x4{ 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0 });
        SetBoxedProperty<uint32_t>(D2D1_COLORMATRIX_PROP_ALPHA_MODE, D2D1_COLORMATRIX_ALPHA_MODE_PREMULTIPLIED);
        SetBoxedProperty<boolean>(D2D1_COLORMATRIX_PROP_CLAMP_OUTPUT, static_cast<boolean>(false));
    }

    IMPLEMENT_EFFECT_PROPERTY(ColorMatrixEffect,
        ColorMatrix,
        float[20],
        Matrix5x4,
        D2D1_COLORMATRIX_PROP_COLOR_MATRIX)

    IMPLEMENT_EFFECT_PROPERTY(ColorMatrixEffect,
        ClampOutput,
        boolean,
        boolean,
        D2D1_COLORMATRIX_PROP_CLAMP_OUTPUT)

    IMPLEMENT_EFFECT_SOURCE_PROPERTY(ColorMatrixEffect,
        Source,
        0)

    IMPLEMENT_EFFECT_PROPERTY_MAPPING(ColorMatrixEffect,
        { L"ColorMatrix", D2D1_COLORMATRIX_PROP_COLOR_MATRIX, GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT },
        { L"ClampOutput", D2D1_COLORMATRIX_PROP_CLAMP_OUTPUT, GRAPHICS_EFFECT_PROPERTY_MAPPING_DIRECT })

    ActivatableClass(ColorMatrixEffect);
}}}}}
