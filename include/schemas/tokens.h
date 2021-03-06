//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#ifndef USDARNOLD_TOKENS_H
#define USDARNOLD_TOKENS_H

/// \file usdArnold/tokens.h

// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
// 
// This is an automatically generated file (by usdGenSchema.py).
// Do not hand-edit!
// 
// XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

#include "pxr/pxr.h"
#include ".//api.h"
#include "pxr/base/tf/staticData.h"
#include "pxr/base/tf/token.h"
#include <vector>

PXR_NAMESPACE_OPEN_SCOPE


/// \class UsdArnoldTokensType
///
/// \link UsdArnoldTokens \endlink provides static, efficient
/// \link TfToken TfTokens\endlink for use in all public USD API.
///
/// These tokens are auto-generated from the module's schema, representing
/// property names, for when you need to fetch an attribute or relationship
/// directly by name, e.g. UsdPrim::GetAttribute(), in the most efficient
/// manner, and allow the compiler to verify that you spelled the name
/// correctly.
///
/// UsdArnoldTokens also contains all of the \em allowedTokens values
/// declared for schema builtin attributes of 'token' scene description type.
/// Use UsdArnoldTokens like so:
///
/// \code
///     gprim.GetMyTokenValuedAttr().Set(UsdArnoldTokens->aA_adaptive_threshold);
/// \endcode
struct UsdArnoldTokensType {
    USDARNOLD_API UsdArnoldTokensType();
    /// \brief "AA_adaptive_threshold"
    /// 
    /// UsdArnoldOptions
    const TfToken aA_adaptive_threshold;
    /// \brief "AA_sample_clamp"
    /// 
    /// UsdArnoldOptions
    const TfToken aA_sample_clamp;
    /// \brief "AA_sample_clamp_affects_aovs"
    /// 
    /// UsdArnoldOptions
    const TfToken aA_sample_clamp_affects_aovs;
    /// \brief "AA_samples"
    /// 
    /// UsdArnoldOptions
    const TfToken aA_samples;
    /// \brief "AA_samples_max"
    /// 
    /// UsdArnoldOptions
    const TfToken aA_samples_max;
    /// \brief "AA_seed"
    /// 
    /// UsdArnoldOptions
    const TfToken aA_seed;
    /// \brief "abort_on_error"
    /// 
    /// UsdArnoldOptions
    const TfToken abort_on_error;
    /// \brief "abort_on_license_fail"
    /// 
    /// UsdArnoldOptions
    const TfToken abort_on_license_fail;
    /// \brief "all_hits"
    /// 
    /// Possible value for UsdArnoldFarthestFilter::GetDomainAttr()
    const TfToken all_hits;
    /// \brief "alpha_half_precision"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken alpha_half_precision;
    /// \brief "alpha_tolerance"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken alpha_tolerance;
    /// \brief "angle"
    /// 
    /// UsdArnoldDistantLight
    const TfToken angle;
    /// \brief "angular"
    /// 
    /// Possible value for UsdArnoldSkydomeLight::GetFormatAttr(), Default value for UsdArnoldSkydomeLight::GetFormatAttr()
    const TfToken angular;
    /// \brief "any"
    /// 
    /// Possible value for UsdArnoldStringReplace::GetOsAttr(), Default value for UsdArnoldStringReplace::GetOsAttr()
    const TfToken any;
    /// \brief "aov"
    /// 
    /// UsdArnoldLight
    const TfToken aov;
    /// \brief "aov_indirect"
    /// 
    /// UsdArnoldSkydomeLight
    const TfToken aov_indirect;
    /// \brief "aov_shaders"
    /// 
    /// UsdArnoldOptions
    const TfToken aov_shaders;
    /// \brief "aperture_aspect_ratio"
    /// 
    /// UsdArnoldFisheyeCamera, UsdArnoldPerspCamera
    const TfToken aperture_aspect_ratio;
    /// \brief "aperture_blade_curvature"
    /// 
    /// UsdArnoldFisheyeCamera, UsdArnoldPerspCamera
    const TfToken aperture_blade_curvature;
    /// \brief "aperture_blades"
    /// 
    /// UsdArnoldFisheyeCamera, UsdArnoldPerspCamera
    const TfToken aperture_blades;
    /// \brief "aperture_rotation"
    /// 
    /// UsdArnoldFisheyeCamera, UsdArnoldPerspCamera
    const TfToken aperture_rotation;
    /// \brief "aperture_size"
    /// 
    /// UsdArnoldFisheyeCamera, UsdArnoldPerspCamera
    const TfToken aperture_size;
    /// \brief "append"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetModeAttr(), Default value for UsdArnoldSetTransform::GetModeAttr(), UsdArnoldDriverExr, UsdArnoldDriverDeepexr, UsdArnoldDriverTiff
    const TfToken append;
    /// \brief "arnold:namespace"
    /// 
    /// UsdArnoldProceduralCustom, UsdArnoldUsd, UsdArnoldAlembic, UsdArnoldInstancer, UsdArnoldProcedural
    const TfToken arnoldNamespace;
    /// \brief "arnold:operator"
    /// 
    /// UsdArnoldProceduralCustom, UsdArnoldUsd, UsdArnoldAlembic, UsdArnoldInstancer, UsdArnoldProcedural, UsdArnoldOptions
    const TfToken arnoldOperator;
    /// \brief "aspect"
    /// 
    /// UsdArnoldPoints
    const TfToken aspect;
    /// \brief "aspect_ratio"
    /// 
    /// UsdArnoldSpotLight
    const TfToken aspect_ratio;
    /// \brief "assign_materials"
    /// 
    /// UsdArnoldMaterialx
    const TfToken assign_materials;
    /// \brief "assign_properties"
    /// 
    /// UsdArnoldMaterialx
    const TfToken assign_properties;
    /// \brief "assign_type"
    /// 
    /// UsdArnoldMaterialx
    const TfToken assign_type;
    /// \brief "assign_visibilities"
    /// 
    /// UsdArnoldMaterialx
    const TfToken assign_visibilities;
    /// \brief "assignment"
    /// 
    /// UsdArnoldSetParameter
    const TfToken assignment;
    /// \brief "atmosphere"
    /// 
    /// UsdArnoldOptions
    const TfToken atmosphere;
    /// \brief "auto_instancing"
    /// 
    /// UsdArnoldProcedural
    const TfToken auto_instancing;
    /// \brief "auto_transparency_depth"
    /// 
    /// UsdArnoldOptions
    const TfToken auto_transparency_depth;
    /// \brief "autobump_visibility"
    /// 
    /// UsdArnoldNurbs, UsdArnoldPolymesh
    const TfToken autobump_visibility;
    /// \brief "autocrop"
    /// 
    /// UsdArnoldDriverExr, UsdArnoldFisheyeCamera
    const TfToken autocrop;
    /// \brief "b44"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr()
    const TfToken b44;
    /// \brief "b44a"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr()
    const TfToken b44a;
    /// \brief "background"
    /// 
    /// UsdArnoldOptions
    const TfToken background;
    /// \brief "background_visibility"
    /// 
    /// UsdArnoldOptions
    const TfToken background_visibility;
    /// \brief "basis"
    /// 
    /// UsdArnoldCurves
    const TfToken basis;
    /// \brief "bevel_angle"
    /// 
    /// UsdArnoldDisk, UsdArnoldCylinder
    const TfToken bevel_angle;
    /// \brief "bevel_width"
    /// 
    /// UsdArnoldDisk, UsdArnoldCylinder
    const TfToken bevel_width;
    /// \brief "bezier"
    /// 
    /// Possible value for UsdArnoldCurvesAPI::GetPrimvarsArnoldBasisAttr(), Default value for UsdArnoldCurvesAPI::GetPrimvarsArnoldBasisAttr(), Possible value for UsdArnoldCurves::GetBasisAttr(), Default value for UsdArnoldCurves::GetBasisAttr()
    const TfToken bezier;
    /// \brief "blackman_harris"
    /// 
    /// Possible value for UsdArnoldCryptomatteFilter::GetFilterAttr(), Possible value for UsdArnoldDiffFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldVarianceFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldOptions::GetFis_filterAttr()
    const TfToken blackman_harris;
    /// \brief "blend"
    /// 
    /// UsdArnoldDenoiseOptixFilter
    const TfToken blend;
    /// \brief "bottom"
    /// 
    /// UsdArnoldCone, UsdArnoldCylinder, UsdArnoldCylinderLight, Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldRolling_shutterAttr(), Possible value for UsdArnoldCamera::GetRolling_shutterAttr()
    const TfToken bottom;
    /// \brief "bottom_merge_angle"
    /// 
    /// UsdArnoldVrCamera
    const TfToken bottom_merge_angle;
    /// \brief "bottom_merge_mode"
    /// 
    /// UsdArnoldVrCamera
    const TfToken bottom_merge_mode;
    /// \brief "bottom_radius"
    /// 
    /// UsdArnoldCone
    const TfToken bottom_radius;
    /// \brief "box"
    /// 
    /// Possible value for UsdArnoldCryptomatteFilter::GetFilterAttr(), Possible value for UsdArnoldDiffFilter::GetFilter_weightsAttr(), Default value for UsdArnoldDiffFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldVarianceFilter::GetFilter_weightsAttr(), Default value for UsdArnoldVarianceFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldShutter_typeAttr(), Default value for UsdArnoldCameraAPI::GetPrimvarsArnoldShutter_typeAttr(), Possible value for UsdArnoldCamera::GetShutter_typeAttr(), Default value for UsdArnoldCamera::GetShutter_typeAttr()
    const TfToken box;
    /// \brief "b-spline"
    /// 
    /// Possible value for UsdArnoldCurvesAPI::GetPrimvarsArnoldBasisAttr(), Possible value for UsdArnoldCurves::GetBasisAttr()
    const TfToken bSpline;
    /// \brief "bucket_scanning"
    /// 
    /// UsdArnoldOptions
    const TfToken bucket_scanning;
    /// \brief "bucket_size"
    /// 
    /// UsdArnoldOptions
    const TfToken bucket_size;
    /// \brief "buckets"
    /// 
    /// UsdArnoldOptions
    const TfToken buckets;
    /// \brief "camera"
    /// 
    /// UsdArnoldDiskLight, UsdArnoldCylinderLight, UsdArnoldSkydomeLight, UsdArnoldQuadLight, UsdArnoldPointLight, UsdArnoldOptions
    const TfToken camera;
    /// \brief "cast_shadows"
    /// 
    /// UsdArnoldLight
    const TfToken cast_shadows;
    /// \brief "cast_volumetric_shadows"
    /// 
    /// UsdArnoldLight
    const TfToken cast_volumetric_shadows;
    /// \brief "catclark"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_typeAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_typeAttr()
    const TfToken catclark;
    /// \brief "catmull-rom"
    /// 
    /// Possible value for UsdArnoldCurvesAPI::GetPrimvarsArnoldBasisAttr(), Possible value for UsdArnoldCurves::GetBasisAttr()
    const TfToken catmullRom;
    /// \brief "catrom"
    /// 
    /// Possible value for UsdArnoldDiffFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldVarianceFilter::GetFilter_weightsAttr()
    const TfToken catrom;
    /// \brief "ccittrle"
    /// 
    /// Possible value for UsdArnoldDriverTiff::GetCompressionAttr()
    const TfToken ccittrle;
    /// \brief "center"
    /// 
    /// UsdArnoldDisk, UsdArnoldSphere
    const TfToken center;
    /// \brief "collection"
    /// 
    /// UsdArnoldCollection
    const TfToken collection;
    /// \brief "color"
    /// 
    /// UsdArnoldLight
    const TfToken color;
    /// \brief "color_manager"
    /// 
    /// UsdArnoldOptions
    const TfToken color_manager;
    /// \brief "color_space"
    /// 
    /// UsdArnoldDriverExr, UsdArnoldDriverTiff, UsdArnoldDriverPng, UsdArnoldDriverJpeg
    const TfToken color_space;
    /// \brief "color_space_linear"
    /// 
    /// UsdArnoldColorManager
    const TfToken color_space_linear;
    /// \brief "color_space_narrow"
    /// 
    /// UsdArnoldColorManager
    const TfToken color_space_narrow;
    /// \brief "compress"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldVolume
    const TfToken compress;
    /// \brief "compression"
    /// 
    /// UsdArnoldDriverExr, UsdArnoldDriverTiff
    const TfToken compression;
    /// \brief "cone"
    /// 
    /// Possible value for UsdArnoldCryptomatteFilter::GetFilterAttr()
    const TfToken cone;
    /// \brief "cone_angle"
    /// 
    /// UsdArnoldSpotLight
    const TfToken cone_angle;
    /// \brief "config"
    /// 
    /// UsdArnoldColorManager
    const TfToken config;
    /// \brief "cosine"
    /// 
    /// Possible value for UsdArnoldVrCamera::GetBottom_merge_modeAttr(), Default value for UsdArnoldVrCamera::GetBottom_merge_modeAttr(), Possible value for UsdArnoldVrCamera::GetTop_merge_modeAttr(), Default value for UsdArnoldVrCamera::GetTop_merge_modeAttr()
    const TfToken cosine;
    /// \brief "cosine_power"
    /// 
    /// UsdArnoldSpotLight
    const TfToken cosine_power;
    /// \brief "CPU"
    /// 
    /// Possible value for UsdArnoldOptions::GetRender_deviceAttr(), Default value for UsdArnoldOptions::GetRender_deviceAttr(), Possible value for UsdArnoldOptions::GetRender_device_fallbackAttr()
    const TfToken cPU;
    /// \brief "crease_idxs"
    /// 
    /// UsdArnoldPolymesh
    const TfToken crease_idxs;
    /// \brief "crease_sharpness"
    /// 
    /// UsdArnoldPolymesh
    const TfToken crease_sharpness;
    /// \brief "cubemap_3x2"
    /// 
    /// Possible value for UsdArnoldVrCamera::GetProjectionAttr()
    const TfToken cubemap_3x2;
    /// \brief "cubemap_6x1"
    /// 
    /// Possible value for UsdArnoldVrCamera::GetProjectionAttr()
    const TfToken cubemap_6x1;
    /// \brief "cubic"
    /// 
    /// Possible value for UsdArnoldPerspCameraAPI::GetPrimvarsArnoldRadial_distortion_typeAttr(), Default value for UsdArnoldPerspCameraAPI::GetPrimvarsArnoldRadial_distortion_typeAttr(), Possible value for UsdArnoldPerspCamera::GetRadial_distortion_typeAttr(), Default value for UsdArnoldPerspCamera::GetRadial_distortion_typeAttr()
    const TfToken cubic;
    /// \brief "cubic_inverse"
    /// 
    /// Possible value for UsdArnoldPerspCameraAPI::GetPrimvarsArnoldRadial_distortion_typeAttr(), Possible value for UsdArnoldPerspCamera::GetRadial_distortion_typeAttr()
    const TfToken cubic_inverse;
    /// \brief "curve"
    /// 
    /// Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldShutter_typeAttr(), Possible value for UsdArnoldCamera::GetShutter_typeAttr()
    const TfToken curve;
    /// \brief "curves_rr_aggressive"
    /// 
    /// UsdArnoldOptions
    const TfToken curves_rr_aggressive;
    /// \brief "curves_rr_start_depth"
    /// 
    /// UsdArnoldOptions
    const TfToken curves_rr_start_depth;
    /// \brief "custom_attributes"
    /// 
    /// UsdArnoldDriverExr, UsdArnoldDriverDeepexr
    const TfToken custom_attributes;
    /// \brief "cvs"
    /// 
    /// UsdArnoldNurbs
    const TfToken cvs;
    /// \brief "data"
    /// 
    /// UsdArnoldProcedural
    const TfToken data;
    /// \brief "debug"
    /// 
    /// UsdArnoldUsd
    const TfToken debug;
    /// \brief "degree_u"
    /// 
    /// UsdArnoldNurbs
    const TfToken degree_u;
    /// \brief "degree_v"
    /// 
    /// UsdArnoldNurbs
    const TfToken degree_v;
    /// \brief "depth_half_precision"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken depth_half_precision;
    /// \brief "depth_tolerance"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken depth_tolerance;
    /// \brief "diffuse"
    /// 
    /// UsdArnoldLight
    const TfToken diffuse;
    /// \brief "direction"
    /// 
    /// UsdArnoldDiskLight, UsdArnoldDistantLight
    const TfToken direction;
    /// \brief "disable"
    /// 
    /// Possible value for UsdArnoldDisable::GetModeAttr(), Default value for UsdArnoldDisable::GetModeAttr()
    const TfToken disable;
    /// \brief "disabled"
    /// 
    /// Possible value for UsdArnoldOptions::GetGpu_sparse_texturesAttr(), Default value for UsdArnoldOptions::GetGpu_sparse_texturesAttr()
    const TfToken disabled;
    /// \brief "disk"
    /// 
    /// Possible value for UsdArnoldCryptomatteFilter::GetFilterAttr(), Possible value for UsdArnoldPointsAPI::GetPrimvarsArnoldModeAttr(), Default value for UsdArnoldPointsAPI::GetPrimvarsArnoldModeAttr(), Possible value for UsdArnoldPoints::GetModeAttr(), Default value for UsdArnoldPoints::GetModeAttr()
    const TfToken disk;
    /// \brief "disp_autobump"
    /// 
    /// UsdArnoldNurbs, UsdArnoldPolymesh
    const TfToken disp_autobump;
    /// \brief "disp_height"
    /// 
    /// UsdArnoldNurbs, UsdArnoldPolymesh
    const TfToken disp_height;
    /// \brief "disp_map"
    /// 
    /// UsdArnoldNurbs, UsdArnoldPolymesh
    const TfToken disp_map;
    /// \brief "disp_padding"
    /// 
    /// UsdArnoldNurbs, UsdArnoldPolymesh
    const TfToken disp_padding;
    /// \brief "disp_zero_value"
    /// 
    /// UsdArnoldNurbs, UsdArnoldPolymesh
    const TfToken disp_zero_value;
    /// \brief "dither"
    /// 
    /// UsdArnoldDriverTiff, UsdArnoldDriverPng, UsdArnoldDriverJpeg
    const TfToken dither;
    /// \brief "domain"
    /// 
    /// UsdArnoldFarthestFilter
    const TfToken domain;
    /// \brief "dwaa"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr()
    const TfToken dwaa;
    /// \brief "dwab"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr()
    const TfToken dwab;
    /// \brief "edge_length"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_adaptive_metricAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_adaptive_metricAttr()
    const TfToken edge_length;
    /// \brief "enable"
    /// 
    /// Possible value for UsdArnoldDisable::GetModeAttr(), UsdArnoldOperator
    const TfToken enable;
    /// \brief "enable_adaptive_sampling"
    /// 
    /// UsdArnoldOptions
    const TfToken enable_adaptive_sampling;
    /// \brief "enable_assignment"
    /// 
    /// UsdArnoldSetParameter
    const TfToken enable_assignment;
    /// \brief "enable_dependency_graph"
    /// 
    /// UsdArnoldOptions
    const TfToken enable_dependency_graph;
    /// \brief "enable_microfacet_multiscatter"
    /// 
    /// UsdArnoldOptions
    const TfToken enable_microfacet_multiscatter;
    /// \brief "enable_new_point_light_sampler"
    /// 
    /// UsdArnoldOptions
    const TfToken enable_new_point_light_sampler;
    /// \brief "enable_new_quad_light_sampler"
    /// 
    /// UsdArnoldOptions
    const TfToken enable_new_quad_light_sampler;
    /// \brief "enable_procedural_cache"
    /// 
    /// UsdArnoldOptions
    const TfToken enable_procedural_cache;
    /// \brief "enable_progressive_render"
    /// 
    /// UsdArnoldOptions
    const TfToken enable_progressive_render;
    /// \brief "error"
    /// 
    /// Possible value for UsdArnoldOptions::GetRender_device_fallbackAttr(), Default value for UsdArnoldOptions::GetRender_device_fallbackAttr()
    const TfToken error;
    /// \brief "error_color_bad_pixel"
    /// 
    /// UsdArnoldOptions
    const TfToken error_color_bad_pixel;
    /// \brief "error_color_bad_shader"
    /// 
    /// UsdArnoldOptions
    const TfToken error_color_bad_shader;
    /// \brief "error_color_bad_texture"
    /// 
    /// UsdArnoldOptions
    const TfToken error_color_bad_texture;
    /// \brief "exclude_xform"
    /// 
    /// UsdArnoldAlembic
    const TfToken exclude_xform;
    /// \brief "expand_hidden"
    /// 
    /// UsdArnoldAlembic
    const TfToken expand_hidden;
    /// \brief "exposure"
    /// 
    /// UsdArnoldCamera, UsdArnoldLight
    const TfToken exposure;
    /// \brief "extend_edges"
    /// 
    /// UsdArnoldUvCamera
    const TfToken extend_edges;
    /// \brief "eye_separation"
    /// 
    /// UsdArnoldVrCamera
    const TfToken eye_separation;
    /// \brief "eye_to_neck"
    /// 
    /// UsdArnoldVrCamera
    const TfToken eye_to_neck;
    /// \brief "far_clip"
    /// 
    /// UsdArnoldCamera
    const TfToken far_clip;
    /// \brief "field"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldImplicit
    const TfToken field;
    /// \brief "field_channel"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldImplicit
    const TfToken field_channel;
    /// \brief "filedata"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldVolume
    const TfToken filedata;
    /// \brief "filename"
    /// 
    /// UsdArnoldUsd, UsdArnoldCryptomatteManifestDriver, UsdArnoldAlembic, UsdArnoldIncludeGraph, UsdArnoldMaterialx, UsdArnoldVolumeImplicit, UsdArnoldVolume, UsdArnoldProcedural, UsdArnoldDriverExr, UsdArnoldDriverDeepexr, UsdArnoldDriverTiff, UsdArnoldDriverPng, UsdArnoldDriverJpeg, UsdArnoldPhotometricLight
    const TfToken filename;
    /// \brief "filter"
    /// 
    /// UsdArnoldCryptomatteFilter
    const TfToken filter;
    /// \brief "filter_weights"
    /// 
    /// UsdArnoldDiffFilter, UsdArnoldVarianceFilter
    const TfToken filter_weights;
    /// \brief "filtermap"
    /// 
    /// UsdArnoldCamera
    const TfToken filtermap;
    /// \brief "filters"
    /// 
    /// UsdArnoldLight
    const TfToken filters;
    /// \brief "first_hit"
    /// 
    /// Possible value for UsdArnoldFarthestFilter::GetDomainAttr(), Default value for UsdArnoldFarthestFilter::GetDomainAttr()
    const TfToken first_hit;
    /// \brief "fis_filter"
    /// 
    /// UsdArnoldOptions
    const TfToken fis_filter;
    /// \brief "fis_filter_width"
    /// 
    /// UsdArnoldOptions
    const TfToken fis_filter_width;
    /// \brief "flat_field_focus"
    /// 
    /// UsdArnoldPerspCamera
    const TfToken flat_field_focus;
    /// \brief "flatness"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_adaptive_metricAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_adaptive_metricAttr()
    const TfToken flatness;
    /// \brief "flip_v"
    /// 
    /// UsdArnoldAlembic
    const TfToken flip_v;
    /// \brief "float32"
    /// 
    /// Possible value for UsdArnoldDriverTiff::GetFormatAttr()
    const TfToken float32;
    /// \brief "focus_distance"
    /// 
    /// UsdArnoldFisheyeCamera, UsdArnoldPerspCamera
    const TfToken focus_distance;
    /// \brief "format"
    /// 
    /// UsdArnoldDriverTiff, UsdArnoldDriverPng, UsdArnoldSkydomeLight
    const TfToken format;
    /// \brief "fov"
    /// 
    /// UsdArnoldFisheyeCamera, UsdArnoldPerspCamera
    const TfToken fov;
    /// \brief "fps"
    /// 
    /// UsdArnoldAlembic, UsdArnoldOptions
    const TfToken fps;
    /// \brief "frame"
    /// 
    /// UsdArnoldUsd, UsdArnoldAlembic, UsdArnoldOptions
    const TfToken frame;
    /// \brief "gaussian"
    /// 
    /// Possible value for UsdArnoldCryptomatteFilter::GetFilterAttr(), Default value for UsdArnoldCryptomatteFilter::GetFilterAttr(), Possible value for UsdArnoldDiffFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldVarianceFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldOptions::GetFis_filterAttr()
    const TfToken gaussian;
    /// \brief "GI_diffuse_depth"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_diffuse_depth;
    /// \brief "GI_diffuse_samples"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_diffuse_samples;
    /// \brief "GI_specular_depth"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_specular_depth;
    /// \brief "GI_specular_samples"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_specular_samples;
    /// \brief "GI_sss_samples"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_sss_samples;
    /// \brief "GI_total_depth"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_total_depth;
    /// \brief "GI_transmission_depth"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_transmission_depth;
    /// \brief "GI_transmission_samples"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_transmission_samples;
    /// \brief "GI_volume_depth"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_volume_depth;
    /// \brief "GI_volume_samples"
    /// 
    /// UsdArnoldOptions
    const TfToken gI_volume_samples;
    /// \brief "GPU"
    /// 
    /// Possible value for UsdArnoldOptions::GetRender_deviceAttr()
    const TfToken gPU;
    /// \brief "gpu_default_min_memory_MB"
    /// 
    /// UsdArnoldOptions
    const TfToken gpu_default_min_memory_MB;
    /// \brief "gpu_default_names"
    /// 
    /// UsdArnoldOptions
    const TfToken gpu_default_names;
    /// \brief "gpu_max_texture_resolution"
    /// 
    /// UsdArnoldOptions
    const TfToken gpu_max_texture_resolution;
    /// \brief "gpu_sparse_textures"
    /// 
    /// UsdArnoldOptions
    const TfToken gpu_sparse_textures;
    /// \brief "grid_size"
    /// 
    /// UsdArnoldUvCamera
    const TfToken grid_size;
    /// \brief "grids"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldVolume
    const TfToken grids;
    /// \brief "half_precision"
    /// 
    /// UsdArnoldDriverExr
    const TfToken half_precision;
    /// \brief "handedness"
    /// 
    /// UsdArnoldCamera
    const TfToken handedness;
    /// \brief "high"
    /// 
    /// Possible value for UsdArnoldOptions::GetThread_priorityAttr()
    const TfToken high;
    /// \brief "hilbert"
    /// 
    /// Possible value for UsdArnoldOptions::GetBucket_scanningAttr()
    const TfToken hilbert;
    /// \brief "hole"
    /// 
    /// UsdArnoldDisk
    const TfToken hole;
    /// \brief "horizontal_fov"
    /// 
    /// UsdArnoldCylCamera
    const TfToken horizontal_fov;
    /// \brief "id"
    /// 
    /// UsdArnoldShape
    const TfToken id;
    /// \brief "ignore_atmosphere"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_atmosphere;
    /// \brief "ignore_bump"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_bump;
    /// \brief "ignore_displacement"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_displacement;
    /// \brief "ignore_dof"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_dof;
    /// \brief "ignore_lights"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_lights;
    /// \brief "ignore_list"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_list;
    /// \brief "ignore_motion"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_motion;
    /// \brief "ignore_motion_blur"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_motion_blur;
    /// \brief "ignore_operators"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_operators;
    /// \brief "ignore_shaders"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_shaders;
    /// \brief "ignore_shadows"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_shadows;
    /// \brief "ignore_smoothing"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_smoothing;
    /// \brief "ignore_sss"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_sss;
    /// \brief "ignore_subdivision"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_subdivision;
    /// \brief "ignore_textures"
    /// 
    /// UsdArnoldOptions
    const TfToken ignore_textures;
    /// \brief "index"
    /// 
    /// UsdArnoldSwitchOperator
    const TfToken index;
    /// \brief "indirect"
    /// 
    /// UsdArnoldLight
    const TfToken indirect;
    /// \brief "indirect_sample_clamp"
    /// 
    /// UsdArnoldOptions
    const TfToken indirect_sample_clamp;
    /// \brief "indirect_specular_blur"
    /// 
    /// UsdArnoldOptions
    const TfToken indirect_specular_blur;
    /// \brief "inherit_xform"
    /// 
    /// UsdArnoldGinstance
    const TfToken inherit_xform;
    /// \brief "inputs"
    /// 
    /// UsdArnoldOperator
    const TfToken inputs;
    /// \brief "instance_matrix"
    /// 
    /// UsdArnoldInstancer
    const TfToken instance_matrix;
    /// \brief "instance_shader"
    /// 
    /// UsdArnoldInstancer
    const TfToken instance_shader;
    /// \brief "instance_visibility"
    /// 
    /// UsdArnoldInstancer
    const TfToken instance_visibility;
    /// \brief "int16"
    /// 
    /// Possible value for UsdArnoldDriverTiff::GetFormatAttr(), Possible value for UsdArnoldDriverPng::GetFormatAttr()
    const TfToken int16;
    /// \brief "int8"
    /// 
    /// Possible value for UsdArnoldDriverTiff::GetFormatAttr(), Default value for UsdArnoldDriverTiff::GetFormatAttr(), Possible value for UsdArnoldDriverPng::GetFormatAttr(), Default value for UsdArnoldDriverPng::GetFormatAttr()
    const TfToken int8;
    /// \brief "intensity"
    /// 
    /// UsdArnoldLight
    const TfToken intensity;
    /// \brief "interior_exterior"
    /// 
    /// Possible value for UsdArnoldSkydomeLightAPI::GetPrimvarsArnoldPortal_modeAttr(), Possible value for UsdArnoldSkydomeLight::GetPortal_modeAttr()
    const TfToken interior_exterior;
    /// \brief "interior_only"
    /// 
    /// Possible value for UsdArnoldSkydomeLightAPI::GetPrimvarsArnoldPortal_modeAttr(), Default value for UsdArnoldSkydomeLightAPI::GetPrimvarsArnoldPortal_modeAttr(), Possible value for UsdArnoldSkydomeLight::GetPortal_modeAttr(), Default value for UsdArnoldSkydomeLight::GetPortal_modeAttr()
    const TfToken interior_only;
    /// \brief "invert_normals"
    /// 
    /// UsdArnoldShape
    const TfToken invert_normals;
    /// \brief "knots_u"
    /// 
    /// UsdArnoldNurbs
    const TfToken knots_u;
    /// \brief "knots_v"
    /// 
    /// UsdArnoldNurbs
    const TfToken knots_v;
    /// \brief "latlong"
    /// 
    /// Possible value for UsdArnoldSkydomeLight::GetFormatAttr(), Possible value for UsdArnoldVrCamera::GetProjectionAttr(), Default value for UsdArnoldVrCamera::GetProjectionAttr()
    const TfToken latlong;
    /// \brief "layer_enable_filtering"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken layer_enable_filtering;
    /// \brief "layer_half_precision"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken layer_half_precision;
    /// \brief "layer_tolerance"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken layer_tolerance;
    /// \brief "layers"
    /// 
    /// UsdArnoldAlembic
    const TfToken layers;
    /// \brief "left"
    /// 
    /// Possible value for UsdArnoldOptions::GetBucket_scanningAttr(), Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldHandednessAttr(), Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldRolling_shutterAttr(), Possible value for UsdArnoldCamera::GetHandednessAttr(), Possible value for UsdArnoldCamera::GetRolling_shutterAttr()
    const TfToken left;
    /// \brief "left_eye"
    /// 
    /// Possible value for UsdArnoldVrCamera::GetModeAttr()
    const TfToken left_eye;
    /// \brief "lens_radius"
    /// 
    /// UsdArnoldSpotLight
    const TfToken lens_radius;
    /// \brief "lens_shift"
    /// 
    /// UsdArnoldPerspCamera
    const TfToken lens_shift;
    /// \brief "lens_tilt_angle"
    /// 
    /// UsdArnoldPerspCamera
    const TfToken lens_tilt_angle;
    /// \brief "levelset"
    /// 
    /// Possible value for UsdArnoldVolumeImplicit::GetSolverAttr(), Possible value for UsdArnoldImplicit::GetSolverAttr()
    const TfToken levelset;
    /// \brief "light_group"
    /// 
    /// UsdArnoldShape
    const TfToken light_group;
    /// \brief "light_path_expressions"
    /// 
    /// UsdArnoldOptions
    const TfToken light_path_expressions;
    /// \brief "lights"
    /// 
    /// UsdArnoldDisable
    const TfToken lights;
    /// \brief "linear"
    /// 
    /// Possible value for UsdArnoldCurvesAPI::GetPrimvarsArnoldBasisAttr(), Possible value for UsdArnoldCurves::GetBasisAttr(), Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_typeAttr(), Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_uv_smoothingAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_typeAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_uv_smoothingAttr(), Possible value for UsdArnoldShapeAPI::GetPrimvarsArnoldTransform_typeAttr(), Possible value for UsdArnoldShape::GetTransform_typeAttr()
    const TfToken linear;
    /// \brief "linear_chromaticities"
    /// 
    /// UsdArnoldColorManager
    const TfToken linear_chromaticities;
    /// \brief "list"
    /// 
    /// Possible value for UsdArnoldOptions::GetBucket_scanningAttr()
    const TfToken list;
    /// \brief "look"
    /// 
    /// Possible value for UsdArnoldMaterialx::GetAssign_typeAttr(), Default value for UsdArnoldMaterialx::GetAssign_typeAttr(), UsdArnoldMaterialx
    const TfToken look;
    /// \brief "look_at"
    /// 
    /// UsdArnoldSpotLight, UsdArnoldCamera
    const TfToken look_at;
    /// \brief "low"
    /// 
    /// Possible value for UsdArnoldOptions::GetThread_priorityAttr()
    const TfToken low;
    /// \brief "low_light_threshold"
    /// 
    /// UsdArnoldOptions
    const TfToken low_light_threshold;
    /// \brief "lowest"
    /// 
    /// Possible value for UsdArnoldOptions::GetThread_priorityAttr()
    const TfToken lowest;
    /// \brief "luminaire_bias"
    /// 
    /// UsdArnoldOptions
    const TfToken luminaire_bias;
    /// \brief "lzw"
    /// 
    /// Possible value for UsdArnoldDriverTiff::GetCompressionAttr(), Default value for UsdArnoldDriverTiff::GetCompressionAttr()
    const TfToken lzw;
    /// \brief "mac"
    /// 
    /// Possible value for UsdArnoldStringReplace::GetOsAttr()
    const TfToken mac;
    /// \brief "make_instance"
    /// 
    /// UsdArnoldAlembic
    const TfToken make_instance;
    /// \brief "match"
    /// 
    /// UsdArnoldStringReplace
    const TfToken match;
    /// \brief "material"
    /// 
    /// Possible value for UsdArnoldMaterialx::GetAssign_typeAttr()
    const TfToken material;
    /// \brief "material_attribute"
    /// 
    /// UsdArnoldAlembic
    const TfToken material_attribute;
    /// \brief "matrix"
    /// 
    /// UsdArnoldCamera, UsdArnoldShape, UsdArnoldLight
    const TfToken matrix;
    /// \brief "matte"
    /// 
    /// UsdArnoldShape
    const TfToken matte;
    /// \brief "max"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldImplicit, UsdArnoldBox
    const TfToken max;
    /// \brief "max_bounces"
    /// 
    /// UsdArnoldLight
    const TfToken max_bounces;
    /// \brief "max_subdivisions"
    /// 
    /// UsdArnoldOptions
    const TfToken max_subdivisions;
    /// \brief "maximum"
    /// 
    /// UsdArnoldHeatmapFilter
    const TfToken maximum;
    /// \brief "merge_shader"
    /// 
    /// UsdArnoldVrCamera
    const TfToken merge_shader;
    /// \brief "mesh"
    /// 
    /// UsdArnoldMeshLight, UsdArnoldUvCamera
    const TfToken mesh;
    /// \brief "metric_auto"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_adaptive_metricAttr(), Default value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_adaptive_metricAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_adaptive_metricAttr(), Default value for UsdArnoldPolymesh::GetSubdiv_adaptive_metricAttr(), Possible value for UsdArnoldOptions::GetPin_threadsAttr(), Default value for UsdArnoldOptions::GetPin_threadsAttr()
    const TfToken metric_auto;
    /// \brief "min"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldImplicit, UsdArnoldBox
    const TfToken min;
    /// \brief "min_optix_denoiser_sample"
    /// 
    /// UsdArnoldOptions
    const TfToken min_optix_denoiser_sample;
    /// \brief "min_pixel_width"
    /// 
    /// UsdArnoldPoints, UsdArnoldCurves
    const TfToken min_pixel_width;
    /// \brief "minimum"
    /// 
    /// UsdArnoldHeatmapFilter
    const TfToken minimum;
    /// \brief "mirrored_ball"
    /// 
    /// Possible value for UsdArnoldSkydomeLight::GetFormatAttr()
    const TfToken mirrored_ball;
    /// \brief "mitnet"
    /// 
    /// Possible value for UsdArnoldDiffFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldVarianceFilter::GetFilter_weightsAttr()
    const TfToken mitnet;
    /// \brief "mode"
    /// 
    /// UsdArnoldSetTransform, UsdArnoldDisable, UsdArnoldPoints, UsdArnoldCurves, UsdArnoldVrCamera
    const TfToken mode;
    /// \brief "motion_end"
    /// 
    /// UsdArnoldCamera, UsdArnoldShape, UsdArnoldLight
    const TfToken motion_end;
    /// \brief "motion_start"
    /// 
    /// UsdArnoldCamera, UsdArnoldShape, UsdArnoldLight
    const TfToken motion_start;
    /// \brief "nameprefix"
    /// 
    /// UsdArnoldAlembic
    const TfToken nameprefix;
    /// \brief "native"
    /// 
    /// Possible value for UsdArnoldOptions::GetGpu_sparse_texturesAttr()
    const TfToken native;
    /// \brief "near_clip"
    /// 
    /// UsdArnoldCamera
    const TfToken near_clip;
    /// \brief "nidxs"
    /// 
    /// UsdArnoldPolymesh
    const TfToken nidxs;
    /// \brief "nlist"
    /// 
    /// UsdArnoldPolymesh
    const TfToken nlist;
    /// \brief "node"
    /// 
    /// UsdArnoldGinstance
    const TfToken node;
    /// \brief "node_idxs"
    /// 
    /// UsdArnoldInstancer
    const TfToken node_idxs;
    /// \brief "nodes"
    /// 
    /// UsdArnoldInstancer
    const TfToken nodes;
    /// \brief "none"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_typeAttr(), Default value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_typeAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_typeAttr(), Default value for UsdArnoldPolymesh::GetSubdiv_typeAttr(), Possible value for UsdArnoldDriverExr::GetCompressionAttr(), Possible value for UsdArnoldDriverTiff::GetCompressionAttr(), Possible value for UsdArnoldVrCamera::GetBottom_merge_modeAttr(), Possible value for UsdArnoldVrCamera::GetTop_merge_modeAttr(), Possible value for UsdArnoldOptions::GetFis_filterAttr(), Default value for UsdArnoldOptions::GetFis_filterAttr()
    const TfToken none;
    /// \brief "noop"
    /// 
    /// UsdArnoldCryptomatteFilter
    const TfToken noop;
    /// \brief "normal"
    /// 
    /// UsdArnoldPlane, UsdArnoldDisk, Possible value for UsdArnoldOptions::GetThread_priorityAttr(), Default value for UsdArnoldOptions::GetThread_priorityAttr()
    const TfToken normal;
    /// \brief "normalize"
    /// 
    /// UsdArnoldLight
    const TfToken normalize;
    /// \brief "nsides"
    /// 
    /// UsdArnoldPolymesh
    const TfToken nsides;
    /// \brief "num_points"
    /// 
    /// UsdArnoldCurves
    const TfToken num_points;
    /// \brief "object"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_adaptive_spaceAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_adaptive_spaceAttr()
    const TfToken object;
    /// \brief "object_path"
    /// 
    /// UsdArnoldUsd
    const TfToken object_path;
    /// \brief "objectpath"
    /// 
    /// UsdArnoldAlembic
    const TfToken objectpath;
    /// \brief "off"
    /// 
    /// Possible value for UsdArnoldSkydomeLightAPI::GetPrimvarsArnoldPortal_modeAttr(), Possible value for UsdArnoldSkydomeLight::GetPortal_modeAttr(), Possible value for UsdArnoldOptions::GetPin_threadsAttr(), Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldRolling_shutterAttr(), Default value for UsdArnoldCameraAPI::GetPrimvarsArnoldRolling_shutterAttr(), Possible value for UsdArnoldCamera::GetRolling_shutterAttr(), Default value for UsdArnoldCamera::GetRolling_shutterAttr()
    const TfToken off;
    /// \brief "offset"
    /// 
    /// UsdArnoldUvCamera
    const TfToken offset;
    /// \brief "on"
    /// 
    /// Possible value for UsdArnoldOptions::GetPin_threadsAttr()
    const TfToken on;
    /// \brief "opaque"
    /// 
    /// UsdArnoldShape
    const TfToken opaque;
    /// \brief "operators"
    /// 
    /// UsdArnoldDisable
    const TfToken operators;
    /// \brief "orientations"
    /// 
    /// UsdArnoldCurves
    const TfToken orientations;
    /// \brief "oriented"
    /// 
    /// Possible value for UsdArnoldCurvesAPI::GetPrimvarsArnoldModeAttr(), Possible value for UsdArnoldCurves::GetModeAttr()
    const TfToken oriented;
    /// \brief "os"
    /// 
    /// UsdArnoldStringReplace
    const TfToken os;
    /// \brief "os_linux"
    /// 
    /// Possible value for UsdArnoldStringReplace::GetOsAttr()
    const TfToken os_linux;
    /// \brief "osl_includepath"
    /// 
    /// UsdArnoldOptions
    const TfToken osl_includepath;
    /// \brief "output_padded"
    /// 
    /// UsdArnoldDriverTiff, UsdArnoldDriverPng, UsdArnoldDriverJpeg
    const TfToken output_padded;
    /// \brief "outputs"
    /// 
    /// UsdArnoldOptions
    const TfToken outputs;
    /// \brief "over_under"
    /// 
    /// Possible value for UsdArnoldVrCamera::GetModeAttr()
    const TfToken over_under;
    /// \brief "override_nodes"
    /// 
    /// UsdArnoldProceduralCustom, UsdArnoldUsd, UsdArnoldAlembic, UsdArnoldInstancer, UsdArnoldProcedural
    const TfToken override_nodes;
    /// \brief "overrides"
    /// 
    /// UsdArnoldUsd
    const TfToken overrides;
    /// \brief "packbits"
    /// 
    /// Possible value for UsdArnoldDriverTiff::GetCompressionAttr()
    const TfToken packbits;
    /// \brief "parallel_node_init"
    /// 
    /// UsdArnoldOptions
    const TfToken parallel_node_init;
    /// \brief "penumbra_angle"
    /// 
    /// UsdArnoldSpotLight
    const TfToken penumbra_angle;
    /// \brief "pin_borders"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_uv_smoothingAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_uv_smoothingAttr()
    const TfToken pin_borders;
    /// \brief "pin_corners"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_uv_smoothingAttr(), Default value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_uv_smoothingAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_uv_smoothingAttr(), Default value for UsdArnoldPolymesh::GetSubdiv_uv_smoothingAttr()
    const TfToken pin_corners;
    /// \brief "pin_threads"
    /// 
    /// UsdArnoldOptions
    const TfToken pin_threads;
    /// \brief "pixel_aspect_ratio"
    /// 
    /// UsdArnoldOptions
    const TfToken pixel_aspect_ratio;
    /// \brief "piz"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr()
    const TfToken piz;
    /// \brief "plane_distance"
    /// 
    /// UsdArnoldPerspCamera
    const TfToken plane_distance;
    /// \brief "plugin_searchpath"
    /// 
    /// UsdArnoldOptions
    const TfToken plugin_searchpath;
    /// \brief "point"
    /// 
    /// UsdArnoldPlane
    const TfToken point;
    /// \brief "points"
    /// 
    /// UsdArnoldPoints, UsdArnoldCurves
    const TfToken points;
    /// \brief "polygon_holes"
    /// 
    /// UsdArnoldPolymesh
    const TfToken polygon_holes;
    /// \brief "portal"
    /// 
    /// UsdArnoldQuadLight
    const TfToken portal;
    /// \brief "portal_mode"
    /// 
    /// UsdArnoldSkydomeLight
    const TfToken portal_mode;
    /// \brief "position"
    /// 
    /// UsdArnoldDiskLight, UsdArnoldSpotLight, UsdArnoldPointLight, UsdArnoldCamera
    const TfToken position;
    /// \brief "post_bake"
    /// 
    /// UsdArnoldUvCamera
    const TfToken post_bake;
    /// \brief "preserve_layer_name"
    /// 
    /// UsdArnoldDriverExr
    const TfToken preserve_layer_name;
    /// \brief "primvars:arnold:aov"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldAov;
    /// \brief "primvars:arnold:aov_indirect"
    /// 
    /// UsdArnoldSkydomeLightAPI
    const TfToken primvarsArnoldAov_indirect;
    /// \brief "primvars:arnold:aperture_aspect_ratio"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldAperture_aspect_ratio;
    /// \brief "primvars:arnold:aperture_blade_curvature"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldAperture_blade_curvature;
    /// \brief "primvars:arnold:aperture_blades"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldAperture_blades;
    /// \brief "primvars:arnold:aperture_rotation"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldAperture_rotation;
    /// \brief "primvars:arnold:aperture_size"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldAperture_size;
    /// \brief "primvars:arnold:aspect"
    /// 
    /// UsdArnoldPointsAPI
    const TfToken primvarsArnoldAspect;
    /// \brief "primvars:arnold:autobump_visibility"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldAutobump_visibility;
    /// \brief "primvars:arnold:basis"
    /// 
    /// UsdArnoldCurvesAPI
    const TfToken primvarsArnoldBasis;
    /// \brief "primvars:arnold:bevel_angle"
    /// 
    /// UsdArnoldCylinderAPI
    const TfToken primvarsArnoldBevel_angle;
    /// \brief "primvars:arnold:bevel_width"
    /// 
    /// UsdArnoldCylinderAPI
    const TfToken primvarsArnoldBevel_width;
    /// \brief "primvars:arnold:bottom"
    /// 
    /// UsdArnoldConeAPI, UsdArnoldCylinderAPI
    const TfToken primvarsArnoldBottom;
    /// \brief "primvars:arnold:camera"
    /// 
    /// UsdArnoldDiskLightAPI, UsdArnoldSkydomeLightAPI, UsdArnoldQuadLightAPI
    const TfToken primvarsArnoldCamera;
    /// \brief "primvars:arnold:cast_shadows"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldCast_shadows;
    /// \brief "primvars:arnold:cast_volumetric_shadows"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldCast_volumetric_shadows;
    /// \brief "primvars:arnold:center"
    /// 
    /// UsdArnoldSphereAPI
    const TfToken primvarsArnoldCenter;
    /// \brief "primvars:arnold:crease_idxs"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldCrease_idxs;
    /// \brief "primvars:arnold:crease_sharpness"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldCrease_sharpness;
    /// \brief "primvars:arnold:direction"
    /// 
    /// UsdArnoldDiskLightAPI, UsdArnoldDistantLightAPI
    const TfToken primvarsArnoldDirection;
    /// \brief "primvars:arnold:disp_autobump"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldDisp_autobump;
    /// \brief "primvars:arnold:disp_height"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldDisp_height;
    /// \brief "primvars:arnold:disp_map"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldDisp_map;
    /// \brief "primvars:arnold:disp_padding"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldDisp_padding;
    /// \brief "primvars:arnold:disp_zero_value"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldDisp_zero_value;
    /// \brief "primvars:arnold:exposure"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldExposure;
    /// \brief "primvars:arnold:filtermap"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldFiltermap;
    /// \brief "primvars:arnold:filters"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldFilters;
    /// \brief "primvars:arnold:flat_field_focus"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldFlat_field_focus;
    /// \brief "primvars:arnold:fov"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldFov;
    /// \brief "primvars:arnold:handedness"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldHandedness;
    /// \brief "primvars:arnold:id"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldId;
    /// \brief "primvars:arnold:indirect"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldIndirect;
    /// \brief "primvars:arnold:invert_normals"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldInvert_normals;
    /// \brief "primvars:arnold:lens_shift"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldLens_shift;
    /// \brief "primvars:arnold:lens_tilt_angle"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldLens_tilt_angle;
    /// \brief "primvars:arnold:light_group"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldLight_group;
    /// \brief "primvars:arnold:look_at"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldLook_at;
    /// \brief "primvars:arnold:matte"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldMatte;
    /// \brief "primvars:arnold:max_bounces"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldMax_bounces;
    /// \brief "primvars:arnold:min_pixel_width"
    /// 
    /// UsdArnoldPointsAPI, UsdArnoldCurvesAPI
    const TfToken primvarsArnoldMin_pixel_width;
    /// \brief "primvars:arnold:mode"
    /// 
    /// UsdArnoldPointsAPI, UsdArnoldCurvesAPI
    const TfToken primvarsArnoldMode;
    /// \brief "primvars:arnold:motion_end"
    /// 
    /// UsdArnoldCameraAPI, UsdArnoldShapeAPI, UsdArnoldLightAPI
    const TfToken primvarsArnoldMotion_end;
    /// \brief "primvars:arnold:motion_start"
    /// 
    /// UsdArnoldCameraAPI, UsdArnoldShapeAPI, UsdArnoldLightAPI
    const TfToken primvarsArnoldMotion_start;
    /// \brief "primvars:arnold:nlist"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldNlist;
    /// \brief "primvars:arnold:opaque"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldOpaque;
    /// \brief "primvars:arnold:orientations"
    /// 
    /// UsdArnoldCurvesAPI
    const TfToken primvarsArnoldOrientations;
    /// \brief "primvars:arnold:plane_distance"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldPlane_distance;
    /// \brief "primvars:arnold:portal"
    /// 
    /// UsdArnoldQuadLightAPI
    const TfToken primvarsArnoldPortal;
    /// \brief "primvars:arnold:portal_mode"
    /// 
    /// UsdArnoldSkydomeLightAPI
    const TfToken primvarsArnoldPortal_mode;
    /// \brief "primvars:arnold:position"
    /// 
    /// UsdArnoldDiskLightAPI, UsdArnoldCameraAPI
    const TfToken primvarsArnoldPosition;
    /// \brief "primvars:arnold:radial_distortion"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldRadial_distortion;
    /// \brief "primvars:arnold:radial_distortion_type"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldRadial_distortion_type;
    /// \brief "primvars:arnold:ray_bias"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldRay_bias;
    /// \brief "primvars:arnold:receive_shadows"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldReceive_shadows;
    /// \brief "primvars:arnold:resolution"
    /// 
    /// UsdArnoldSkydomeLightAPI, UsdArnoldQuadLightAPI
    const TfToken primvarsArnoldResolution;
    /// \brief "primvars:arnold:rolling_shutter"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldRolling_shutter;
    /// \brief "primvars:arnold:rolling_shutter_duration"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldRolling_shutter_duration;
    /// \brief "primvars:arnold:rotation"
    /// 
    /// UsdArnoldPointsAPI
    const TfToken primvarsArnoldRotation;
    /// \brief "primvars:arnold:roundness"
    /// 
    /// UsdArnoldQuadLightAPI
    const TfToken primvarsArnoldRoundness;
    /// \brief "primvars:arnold:samples"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldSamples;
    /// \brief "primvars:arnold:screen_window_max"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldScreen_window_max;
    /// \brief "primvars:arnold:screen_window_min"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldScreen_window_min;
    /// \brief "primvars:arnold:self_shadows"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldSelf_shadows;
    /// \brief "primvars:arnold:shader"
    /// 
    /// UsdArnoldSkydomeLightAPI, UsdArnoldShapeAPI
    const TfToken primvarsArnoldShader;
    /// \brief "primvars:arnold:shadow_color"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldShadow_color;
    /// \brief "primvars:arnold:shadow_density"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldShadow_density;
    /// \brief "primvars:arnold:shadow_group"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldShadow_group;
    /// \brief "primvars:arnold:shidxs"
    /// 
    /// UsdArnoldCurvesAPI, UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldShidxs;
    /// \brief "primvars:arnold:shutter_curve"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldShutter_curve;
    /// \brief "primvars:arnold:shutter_type"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldShutter_type;
    /// \brief "primvars:arnold:sidedness"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldSidedness;
    /// \brief "primvars:arnold:smoothing"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSmoothing;
    /// \brief "primvars:arnold:soft_edge"
    /// 
    /// UsdArnoldQuadLightAPI
    const TfToken primvarsArnoldSoft_edge;
    /// \brief "primvars:arnold:spread"
    /// 
    /// UsdArnoldDiskLightAPI, UsdArnoldQuadLightAPI
    const TfToken primvarsArnoldSpread;
    /// \brief "primvars:arnold:sss"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldSss;
    /// \brief "primvars:arnold:step_size"
    /// 
    /// UsdArnoldPointsAPI, UsdArnoldBoxAPI, UsdArnoldPolymeshAPI, UsdArnoldSphereAPI
    const TfToken primvarsArnoldStep_size;
    /// \brief "primvars:arnold:subdiv_adaptive_error"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSubdiv_adaptive_error;
    /// \brief "primvars:arnold:subdiv_adaptive_metric"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSubdiv_adaptive_metric;
    /// \brief "primvars:arnold:subdiv_adaptive_space"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSubdiv_adaptive_space;
    /// \brief "primvars:arnold:subdiv_frustum_ignore"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSubdiv_frustum_ignore;
    /// \brief "primvars:arnold:subdiv_iterations"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSubdiv_iterations;
    /// \brief "primvars:arnold:subdiv_smooth_derivs"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSubdiv_smooth_derivs;
    /// \brief "primvars:arnold:subdiv_type"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSubdiv_type;
    /// \brief "primvars:arnold:subdiv_uv_smoothing"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldSubdiv_uv_smoothing;
    /// \brief "primvars:arnold:top"
    /// 
    /// UsdArnoldConeAPI, UsdArnoldCylinderAPI
    const TfToken primvarsArnoldTop;
    /// \brief "primvars:arnold:top_radius"
    /// 
    /// UsdArnoldConeAPI
    const TfToken primvarsArnoldTop_radius;
    /// \brief "primvars:arnold:trace_sets"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldTrace_sets;
    /// \brief "primvars:arnold:transform_type"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldTransform_type;
    /// \brief "primvars:arnold:transmission"
    /// 
    /// UsdArnoldDiskLightAPI, UsdArnoldSkydomeLightAPI, UsdArnoldQuadLightAPI
    const TfToken primvarsArnoldTransmission;
    /// \brief "primvars:arnold:up"
    /// 
    /// UsdArnoldCameraAPI
    const TfToken primvarsArnoldUp;
    /// \brief "primvars:arnold:use_light_group"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldUse_light_group;
    /// \brief "primvars:arnold:use_shadow_group"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldUse_shadow_group;
    /// \brief "primvars:arnold:uv_remap"
    /// 
    /// UsdArnoldPerspCameraAPI
    const TfToken primvarsArnoldUv_remap;
    /// \brief "primvars:arnold:uvidxs"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldUvidxs;
    /// \brief "primvars:arnold:uvlist"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldUvlist;
    /// \brief "primvars:arnold:uvs"
    /// 
    /// UsdArnoldCurvesAPI
    const TfToken primvarsArnoldUvs;
    /// \brief "primvars:arnold:visibility"
    /// 
    /// UsdArnoldShapeAPI
    const TfToken primvarsArnoldVisibility;
    /// \brief "primvars:arnold:vlist"
    /// 
    /// UsdArnoldPolymeshAPI
    const TfToken primvarsArnoldVlist;
    /// \brief "primvars:arnold:volume"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldVolume;
    /// \brief "primvars:arnold:volume_padding"
    /// 
    /// UsdArnoldPointsAPI, UsdArnoldBoxAPI, UsdArnoldPolymeshAPI, UsdArnoldSphereAPI
    const TfToken primvarsArnoldVolume_padding;
    /// \brief "primvars:arnold:volume_samples"
    /// 
    /// UsdArnoldLightAPI
    const TfToken primvarsArnoldVolume_samples;
    /// \brief "procedural_auto_instancing"
    /// 
    /// UsdArnoldOptions
    const TfToken procedural_auto_instancing;
    /// \brief "procedural_searchpath"
    /// 
    /// UsdArnoldOptions
    const TfToken procedural_searchpath;
    /// \brief "projection"
    /// 
    /// UsdArnoldVrCamera
    const TfToken projection;
    /// \brief "projective"
    /// 
    /// UsdArnoldCylCamera
    const TfToken projective;
    /// \brief "pull_user_params"
    /// 
    /// UsdArnoldAlembic
    const TfToken pull_user_params;
    /// \brief "pxr24"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr()
    const TfToken pxr24;
    /// \brief "quad"
    /// 
    /// Possible value for UsdArnoldPointsAPI::GetPrimvarsArnoldModeAttr(), Possible value for UsdArnoldPoints::GetModeAttr()
    const TfToken quad;
    /// \brief "quality"
    /// 
    /// UsdArnoldDriverJpeg
    const TfToken quality;
    /// \brief "radial_distortion"
    /// 
    /// UsdArnoldPerspCamera
    const TfToken radial_distortion;
    /// \brief "radial_distortion_type"
    /// 
    /// UsdArnoldPerspCamera
    const TfToken radial_distortion_type;
    /// \brief "radius"
    /// 
    /// UsdArnoldPoints, UsdArnoldCurves, UsdArnoldDisk, UsdArnoldCylinder, UsdArnoldSphere, UsdArnoldPhotometricLight, UsdArnoldDiskLight, UsdArnoldCylinderLight, UsdArnoldSpotLight, UsdArnoldPointLight
    const TfToken radius;
    /// \brief "radius_attribute"
    /// 
    /// UsdArnoldAlembic
    const TfToken radius_attribute;
    /// \brief "radius_default"
    /// 
    /// UsdArnoldAlembic
    const TfToken radius_default;
    /// \brief "radius_scale"
    /// 
    /// UsdArnoldAlembic
    const TfToken radius_scale;
    /// \brief "random"
    /// 
    /// Possible value for UsdArnoldOptions::GetBucket_scanningAttr()
    const TfToken random;
    /// \brief "rank"
    /// 
    /// UsdArnoldCryptomatteFilter
    const TfToken rank;
    /// \brief "raster"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_adaptive_spaceAttr(), Default value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_adaptive_spaceAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_adaptive_spaceAttr(), Default value for UsdArnoldPolymesh::GetSubdiv_adaptive_spaceAttr()
    const TfToken raster;
    /// \brief "ray_bias"
    /// 
    /// UsdArnoldShape
    const TfToken ray_bias;
    /// \brief "ray_direction"
    /// 
    /// UsdArnoldUvCamera
    const TfToken ray_direction;
    /// \brief "ray_origin"
    /// 
    /// UsdArnoldUvCamera
    const TfToken ray_origin;
    /// \brief "receive_shadows"
    /// 
    /// UsdArnoldShape
    const TfToken receive_shadows;
    /// \brief "reference_time"
    /// 
    /// UsdArnoldOptions
    const TfToken reference_time;
    /// \brief "region_max_x"
    /// 
    /// UsdArnoldOptions
    const TfToken region_max_x;
    /// \brief "region_max_y"
    /// 
    /// UsdArnoldOptions
    const TfToken region_max_y;
    /// \brief "region_min_x"
    /// 
    /// UsdArnoldOptions
    const TfToken region_min_x;
    /// \brief "region_min_y"
    /// 
    /// UsdArnoldOptions
    const TfToken region_min_y;
    /// \brief "render_device"
    /// 
    /// UsdArnoldOptions
    const TfToken render_device;
    /// \brief "render_device_fallback"
    /// 
    /// UsdArnoldOptions
    const TfToken render_device_fallback;
    /// \brief "replace"
    /// 
    /// UsdArnoldStringReplace, Possible value for UsdArnoldSetTransform::GetModeAttr()
    const TfToken replace;
    /// \brief "resolution"
    /// 
    /// UsdArnoldSkydomeLight, UsdArnoldQuadLight
    const TfToken resolution;
    /// \brief "ribbon"
    /// 
    /// Possible value for UsdArnoldCurvesAPI::GetPrimvarsArnoldModeAttr(), Default value for UsdArnoldCurvesAPI::GetPrimvarsArnoldModeAttr(), Possible value for UsdArnoldCurves::GetModeAttr(), Default value for UsdArnoldCurves::GetModeAttr()
    const TfToken ribbon;
    /// \brief "right"
    /// 
    /// Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldHandednessAttr(), Default value for UsdArnoldCameraAPI::GetPrimvarsArnoldHandednessAttr(), Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldRolling_shutterAttr(), Possible value for UsdArnoldCamera::GetHandednessAttr(), Default value for UsdArnoldCamera::GetHandednessAttr(), Possible value for UsdArnoldCamera::GetRolling_shutterAttr()
    const TfToken right;
    /// \brief "right_eye"
    /// 
    /// Possible value for UsdArnoldVrCamera::GetModeAttr()
    const TfToken right_eye;
    /// \brief "rle"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr()
    const TfToken rle;
    /// \brief "rolling_shutter"
    /// 
    /// UsdArnoldCamera
    const TfToken rolling_shutter;
    /// \brief "rolling_shutter_duration"
    /// 
    /// UsdArnoldCamera
    const TfToken rolling_shutter_duration;
    /// \brief "rotate"
    /// 
    /// UsdArnoldSetTransform
    const TfToken rotate;
    /// \brief "rotate_about_center"
    /// 
    /// Possible value for UsdArnoldShapeAPI::GetPrimvarsArnoldTransform_typeAttr(), Default value for UsdArnoldShapeAPI::GetPrimvarsArnoldTransform_typeAttr(), Possible value for UsdArnoldShape::GetTransform_typeAttr(), Default value for UsdArnoldShape::GetTransform_typeAttr()
    const TfToken rotate_about_center;
    /// \brief "rotate_about_origin"
    /// 
    /// Possible value for UsdArnoldShapeAPI::GetPrimvarsArnoldTransform_typeAttr(), Possible value for UsdArnoldShape::GetTransform_typeAttr()
    const TfToken rotate_about_origin;
    /// \brief "rotate_order"
    /// 
    /// UsdArnoldSetTransform
    const TfToken rotate_order;
    /// \brief "rotation"
    /// 
    /// UsdArnoldPoints
    const TfToken rotation;
    /// \brief "roundness"
    /// 
    /// UsdArnoldSpotLight, UsdArnoldQuadLight
    const TfToken roundness;
    /// \brief "rst"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetTransform_orderAttr()
    const TfToken rst;
    /// \brief "rts"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetTransform_orderAttr()
    const TfToken rts;
    /// \brief "samples"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldImplicit, UsdArnoldLight
    const TfToken samples;
    /// \brief "scalar_mode"
    /// 
    /// UsdArnoldVarianceFilter
    const TfToken scalar_mode;
    /// \brief "scale"
    /// 
    /// UsdArnoldSetTransform
    const TfToken scale;
    /// \brief "scene_camera"
    /// 
    /// UsdArnoldAlembic
    const TfToken scene_camera;
    /// \brief "scene_units_in_meters"
    /// 
    /// UsdArnoldOptions
    const TfToken scene_units_in_meters;
    /// \brief "scene_units_name"
    /// 
    /// UsdArnoldOptions
    const TfToken scene_units_name;
    /// \brief "screen_window_max"
    /// 
    /// UsdArnoldCamera
    const TfToken screen_window_max;
    /// \brief "screen_window_min"
    /// 
    /// UsdArnoldCamera
    const TfToken screen_window_min;
    /// \brief "selection"
    /// 
    /// UsdArnoldStringReplace, UsdArnoldCollection, UsdArnoldSetTransform, UsdArnoldDisable, UsdArnoldSetParameter, UsdArnoldMaterialx
    const TfToken selection;
    /// \brief "self_shadows"
    /// 
    /// UsdArnoldShape
    const TfToken self_shadows;
    /// \brief "shader"
    /// 
    /// UsdArnoldSkydomeLight, Possible value for UsdArnoldVrCamera::GetBottom_merge_modeAttr(), Possible value for UsdArnoldVrCamera::GetTop_merge_modeAttr(), UsdArnoldShape
    const TfToken shader;
    /// \brief "shader_override"
    /// 
    /// UsdArnoldOptions
    const TfToken shader_override;
    /// \brief "shaders"
    /// 
    /// UsdArnoldDisable
    const TfToken shaders;
    /// \brief "shadow_color"
    /// 
    /// UsdArnoldLight
    const TfToken shadow_color;
    /// \brief "shadow_density"
    /// 
    /// UsdArnoldLight
    const TfToken shadow_density;
    /// \brief "shadow_group"
    /// 
    /// UsdArnoldShape
    const TfToken shadow_group;
    /// \brief "shapes"
    /// 
    /// UsdArnoldDisable
    const TfToken shapes;
    /// \brief "shidxs"
    /// 
    /// UsdArnoldCurves, UsdArnoldPolymesh
    const TfToken shidxs;
    /// \brief "shutter_curve"
    /// 
    /// UsdArnoldCamera
    const TfToken shutter_curve;
    /// \brief "shutter_end"
    /// 
    /// UsdArnoldAlembic, UsdArnoldCamera
    const TfToken shutter_end;
    /// \brief "shutter_start"
    /// 
    /// UsdArnoldAlembic, UsdArnoldCamera
    const TfToken shutter_start;
    /// \brief "shutter_type"
    /// 
    /// UsdArnoldCamera
    const TfToken shutter_type;
    /// \brief "side_by_side"
    /// 
    /// Possible value for UsdArnoldVrCamera::GetModeAttr(), Default value for UsdArnoldVrCamera::GetModeAttr()
    const TfToken side_by_side;
    /// \brief "sidedness"
    /// 
    /// UsdArnoldShape
    const TfToken sidedness;
    /// \brief "sinc"
    /// 
    /// Possible value for UsdArnoldDiffFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldVarianceFilter::GetFilter_weightsAttr()
    const TfToken sinc;
    /// \brief "skip_alpha"
    /// 
    /// UsdArnoldDriverTiff
    const TfToken skip_alpha;
    /// \brief "skip_background_atmosphere"
    /// 
    /// UsdArnoldOptions
    const TfToken skip_background_atmosphere;
    /// \brief "skip_license_check"
    /// 
    /// UsdArnoldOptions
    const TfToken skip_license_check;
    /// \brief "smooth"
    /// 
    /// Possible value for UsdArnoldPolymeshAPI::GetPrimvarsArnoldSubdiv_uv_smoothingAttr(), Possible value for UsdArnoldPolymesh::GetSubdiv_uv_smoothingAttr()
    const TfToken smooth;
    /// \brief "smoothing"
    /// 
    /// UsdArnoldNurbs, UsdArnoldPolymesh
    const TfToken smoothing;
    /// \brief "soft_edge"
    /// 
    /// UsdArnoldQuadLight
    const TfToken soft_edge;
    /// \brief "software"
    /// 
    /// Possible value for UsdArnoldOptions::GetGpu_sparse_texturesAttr()
    const TfToken software;
    /// \brief "solver"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldImplicit
    const TfToken solver;
    /// \brief "specular"
    /// 
    /// UsdArnoldLight
    const TfToken specular;
    /// \brief "sphere"
    /// 
    /// Possible value for UsdArnoldPointsAPI::GetPrimvarsArnoldModeAttr(), Possible value for UsdArnoldPoints::GetModeAttr()
    const TfToken sphere;
    /// \brief "spiral"
    /// 
    /// Possible value for UsdArnoldOptions::GetBucket_scanningAttr(), Default value for UsdArnoldOptions::GetBucket_scanningAttr()
    const TfToken spiral;
    /// \brief "spread"
    /// 
    /// UsdArnoldDiskLight, UsdArnoldQuadLight
    const TfToken spread;
    /// \brief "srt"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetTransform_orderAttr(), Default value for UsdArnoldSetTransform::GetTransform_orderAttr()
    const TfToken srt;
    /// \brief "sss"
    /// 
    /// UsdArnoldLight
    const TfToken sss;
    /// \brief "sss_use_autobump"
    /// 
    /// UsdArnoldOptions
    const TfToken sss_use_autobump;
    /// \brief "step_scale"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldVolume
    const TfToken step_scale;
    /// \brief "step_size"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldVolume, UsdArnoldGinstance, UsdArnoldImplicit, UsdArnoldPoints, UsdArnoldBox, UsdArnoldNurbs, UsdArnoldPolymesh, UsdArnoldSphere
    const TfToken step_size;
    /// \brief "str"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetTransform_orderAttr()
    const TfToken str;
    /// \brief "subdiv_adaptive_error"
    /// 
    /// UsdArnoldPolymesh
    const TfToken subdiv_adaptive_error;
    /// \brief "subdiv_adaptive_metric"
    /// 
    /// UsdArnoldPolymesh
    const TfToken subdiv_adaptive_metric;
    /// \brief "subdiv_adaptive_space"
    /// 
    /// UsdArnoldPolymesh
    const TfToken subdiv_adaptive_space;
    /// \brief "subdiv_dicing_camera"
    /// 
    /// UsdArnoldOptions
    const TfToken subdiv_dicing_camera;
    /// \brief "subdiv_frustum_culling"
    /// 
    /// UsdArnoldOptions
    const TfToken subdiv_frustum_culling;
    /// \brief "subdiv_frustum_ignore"
    /// 
    /// UsdArnoldPolymesh
    const TfToken subdiv_frustum_ignore;
    /// \brief "subdiv_frustum_padding"
    /// 
    /// UsdArnoldOptions
    const TfToken subdiv_frustum_padding;
    /// \brief "subdiv_iterations"
    /// 
    /// UsdArnoldPolymesh
    const TfToken subdiv_iterations;
    /// \brief "subdiv_smooth_derivs"
    /// 
    /// UsdArnoldPolymesh
    const TfToken subdiv_smooth_derivs;
    /// \brief "subdiv_type"
    /// 
    /// UsdArnoldPolymesh
    const TfToken subdiv_type;
    /// \brief "subdiv_uv_smoothing"
    /// 
    /// UsdArnoldPolymesh
    const TfToken subdiv_uv_smoothing;
    /// \brief "subpixel_merge"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken subpixel_merge;
    /// \brief "target"
    /// 
    /// UsdArnoldIncludeGraph
    const TfToken target;
    /// \brief "tesselate_u"
    /// 
    /// UsdArnoldNurbs
    const TfToken tesselate_u;
    /// \brief "tesselate_v"
    /// 
    /// UsdArnoldNurbs
    const TfToken tesselate_v;
    /// \brief "texture_accept_unmipped"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_accept_unmipped;
    /// \brief "texture_accept_untiled"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_accept_untiled;
    /// \brief "texture_automip"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_automip;
    /// \brief "texture_autotile"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_autotile;
    /// \brief "texture_conservative_lookups"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_conservative_lookups;
    /// \brief "texture_failure_retries"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_failure_retries;
    /// \brief "texture_max_memory_MB"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_max_memory_MB;
    /// \brief "texture_max_open_files"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_max_open_files;
    /// \brief "texture_max_sharpen"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_max_sharpen;
    /// \brief "texture_per_file_stats"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_per_file_stats;
    /// \brief "texture_searchpath"
    /// 
    /// UsdArnoldOptions
    const TfToken texture_searchpath;
    /// \brief "thick"
    /// 
    /// Possible value for UsdArnoldCurvesAPI::GetPrimvarsArnoldModeAttr(), Possible value for UsdArnoldCurves::GetModeAttr()
    const TfToken thick;
    /// \brief "thread_priority"
    /// 
    /// UsdArnoldOptions
    const TfToken thread_priority;
    /// \brief "threads"
    /// 
    /// UsdArnoldUsd, UsdArnoldOptions
    const TfToken threads;
    /// \brief "threshold"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldImplicit
    const TfToken threshold;
    /// \brief "tiled"
    /// 
    /// UsdArnoldDriverExr, UsdArnoldDriverDeepexr, UsdArnoldDriverTiff
    const TfToken tiled;
    /// \brief "top"
    /// 
    /// UsdArnoldCone, UsdArnoldCylinder, UsdArnoldCylinderLight, Possible value for UsdArnoldOptions::GetBucket_scanningAttr(), Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldRolling_shutterAttr(), Possible value for UsdArnoldCamera::GetRolling_shutterAttr()
    const TfToken top;
    /// \brief "top_merge_angle"
    /// 
    /// UsdArnoldVrCamera
    const TfToken top_merge_angle;
    /// \brief "top_merge_mode"
    /// 
    /// UsdArnoldVrCamera
    const TfToken top_merge_mode;
    /// \brief "top_radius"
    /// 
    /// UsdArnoldCone
    const TfToken top_radius;
    /// \brief "trace_sets"
    /// 
    /// UsdArnoldShape
    const TfToken trace_sets;
    /// \brief "transform_order"
    /// 
    /// UsdArnoldSetTransform
    const TfToken transform_order;
    /// \brief "transform_type"
    /// 
    /// UsdArnoldShape
    const TfToken transform_type;
    /// \brief "translate"
    /// 
    /// UsdArnoldSetTransform
    const TfToken translate;
    /// \brief "transmission"
    /// 
    /// UsdArnoldDiskLight, UsdArnoldCylinderLight, UsdArnoldSkydomeLight, UsdArnoldQuadLight, UsdArnoldPointLight
    const TfToken transmission;
    /// \brief "triangle"
    /// 
    /// Possible value for UsdArnoldCryptomatteFilter::GetFilterAttr(), Possible value for UsdArnoldDiffFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldVarianceFilter::GetFilter_weightsAttr(), Possible value for UsdArnoldOptions::GetFis_filterAttr(), Possible value for UsdArnoldCameraAPI::GetPrimvarsArnoldShutter_typeAttr(), Possible value for UsdArnoldCamera::GetShutter_typeAttr()
    const TfToken triangle;
    /// \brief "trs"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetTransform_orderAttr()
    const TfToken trs;
    /// \brief "tsr"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetTransform_orderAttr()
    const TfToken tsr;
    /// \brief "u_offset"
    /// 
    /// UsdArnoldUvCamera
    const TfToken u_offset;
    /// \brief "u_scale"
    /// 
    /// UsdArnoldUvCamera
    const TfToken u_scale;
    /// \brief "uniform"
    /// 
    /// Possible value for UsdArnoldVolumeImplicit::GetSolverAttr(), Default value for UsdArnoldVolumeImplicit::GetSolverAttr(), Possible value for UsdArnoldImplicit::GetSolverAttr(), Default value for UsdArnoldImplicit::GetSolverAttr()
    const TfToken uniform;
    /// \brief "unpremult_alpha"
    /// 
    /// UsdArnoldDriverTiff
    const TfToken unpremult_alpha;
    /// \brief "up"
    /// 
    /// UsdArnoldSpotLight, UsdArnoldCamera
    const TfToken up;
    /// \brief "use_instance_cache"
    /// 
    /// UsdArnoldAlembic
    const TfToken use_instance_cache;
    /// \brief "use_light_group"
    /// 
    /// UsdArnoldShape
    const TfToken use_light_group;
    /// \brief "use_RGB_opacity"
    /// 
    /// UsdArnoldDriverDeepexr
    const TfToken use_RGB_opacity;
    /// \brief "use_shadow_group"
    /// 
    /// UsdArnoldShape
    const TfToken use_shadow_group;
    /// \brief "uv_remap"
    /// 
    /// UsdArnoldPerspCamera
    const TfToken uv_remap;
    /// \brief "uv_set"
    /// 
    /// UsdArnoldUvCamera
    const TfToken uv_set;
    /// \brief "uvidxs"
    /// 
    /// UsdArnoldPolymesh
    const TfToken uvidxs;
    /// \brief "uvlist"
    /// 
    /// UsdArnoldPolymesh
    const TfToken uvlist;
    /// \brief "uvs"
    /// 
    /// UsdArnoldCurves
    const TfToken uvs;
    /// \brief "v_offset"
    /// 
    /// UsdArnoldUvCamera
    const TfToken v_offset;
    /// \brief "v_scale"
    /// 
    /// UsdArnoldUvCamera
    const TfToken v_scale;
    /// \brief "velocity_fps"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldVolume
    const TfToken velocity_fps;
    /// \brief "velocity_grids"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldVolume
    const TfToken velocity_grids;
    /// \brief "velocity_ignore"
    /// 
    /// UsdArnoldAlembic
    const TfToken velocity_ignore;
    /// \brief "velocity_outlier_threshold"
    /// 
    /// UsdArnoldVolumeImplicit, UsdArnoldVolume
    const TfToken velocity_outlier_threshold;
    /// \brief "velocity_scale"
    /// 
    /// UsdArnoldAlembic, UsdArnoldVolumeImplicit, UsdArnoldVolume
    const TfToken velocity_scale;
    /// \brief "vertical_fov"
    /// 
    /// UsdArnoldCylCamera
    const TfToken vertical_fov;
    /// \brief "vertices"
    /// 
    /// UsdArnoldQuadLight
    const TfToken vertices;
    /// \brief "vidxs"
    /// 
    /// UsdArnoldPolymesh
    const TfToken vidxs;
    /// \brief "visibility"
    /// 
    /// UsdArnoldShape
    const TfToken visibility;
    /// \brief "visibility_ignore"
    /// 
    /// UsdArnoldAlembic
    const TfToken visibility_ignore;
    /// \brief "vlist"
    /// 
    /// UsdArnoldPolymesh
    const TfToken vlist;
    /// \brief "volume"
    /// 
    /// UsdArnoldLight
    const TfToken volume;
    /// \brief "volume_padding"
    /// 
    /// UsdArnoldVolume, UsdArnoldPoints, UsdArnoldBox, UsdArnoldNurbs, UsdArnoldPolymesh, UsdArnoldSphere
    const TfToken volume_padding;
    /// \brief "volume_samples"
    /// 
    /// UsdArnoldLight
    const TfToken volume_samples;
    /// \brief "width"
    /// 
    /// UsdArnoldCryptomatteFilter, UsdArnoldDiffFilter, UsdArnoldContourFilter, UsdArnoldVarianceFilter, UsdArnoldBlackmanHarrisFilter, UsdArnoldSincFilter, UsdArnoldGaussianFilter, UsdArnoldTriangleFilter
    const TfToken width;
    /// \brief "windows"
    /// 
    /// Possible value for UsdArnoldStringReplace::GetOsAttr()
    const TfToken windows;
    /// \brief "xres"
    /// 
    /// UsdArnoldOptions
    const TfToken xres;
    /// \brief "xyz"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetRotate_orderAttr(), Default value for UsdArnoldSetTransform::GetRotate_orderAttr()
    const TfToken xyz;
    /// \brief "xzy"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetRotate_orderAttr()
    const TfToken xzy;
    /// \brief "yres"
    /// 
    /// UsdArnoldOptions
    const TfToken yres;
    /// \brief "yxz"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetRotate_orderAttr()
    const TfToken yxz;
    /// \brief "yzx"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetRotate_orderAttr()
    const TfToken yzx;
    /// \brief "zip"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr(), Default value for UsdArnoldDriverExr::GetCompressionAttr(), Possible value for UsdArnoldDriverTiff::GetCompressionAttr()
    const TfToken zip;
    /// \brief "zips"
    /// 
    /// Possible value for UsdArnoldDriverExr::GetCompressionAttr()
    const TfToken zips;
    /// \brief "zxy"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetRotate_orderAttr()
    const TfToken zxy;
    /// \brief "zyx"
    /// 
    /// Possible value for UsdArnoldSetTransform::GetRotate_orderAttr()
    const TfToken zyx;
    /// A vector of all of the tokens listed above.
    const std::vector<TfToken> allTokens;
};

/// \var UsdArnoldTokens
///
/// A global variable with static, efficient \link TfToken TfTokens\endlink
/// for use in all public USD API.  \sa UsdArnoldTokensType
extern USDARNOLD_API TfStaticData<UsdArnoldTokensType> UsdArnoldTokens;

PXR_NAMESPACE_CLOSE_SCOPE

#endif
