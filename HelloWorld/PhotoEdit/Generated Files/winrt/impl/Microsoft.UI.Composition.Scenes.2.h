// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.230706.1

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_Scenes_2_H
#define WINRT_Microsoft_UI_Composition_Scenes_2_H
#include "winrt/impl/Microsoft.UI.Composition.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Microsoft.UI.Composition.Scenes.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::Scenes
{
    struct WINRT_IMPL_EMPTY_BASES SceneBoundingBox : winrt::Microsoft::UI::Composition::Scenes::ISceneBoundingBox,
        impl::base<SceneBoundingBox, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneBoundingBox, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneBoundingBox(std::nullptr_t) noexcept {}
        SceneBoundingBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneBoundingBox(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneBoundingBox, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneBoundingBox, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneComponent : winrt::Microsoft::UI::Composition::Scenes::ISceneComponent,
        impl::base<SceneComponent, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneComponent, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneComponent(std::nullptr_t) noexcept {}
        SceneComponent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneComponent(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneComponent, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneComponent, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneComponentCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Composition::Scenes::SceneComponent>,
        impl::base<SceneComponentCollection, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneComponentCollection, winrt::Microsoft::UI::Composition::Scenes::ISceneComponentCollection, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneComponentCollection(std::nullptr_t) noexcept {}
        SceneComponentCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Composition::Scenes::SceneComponent>(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneComponentCollection, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneComponentCollection, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneMaterial : winrt::Microsoft::UI::Composition::Scenes::ISceneMaterial,
        impl::base<SceneMaterial, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneMaterial, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneMaterial(std::nullptr_t) noexcept {}
        SceneMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneMaterial(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneMaterial, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneMaterial, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneMaterialInput : winrt::Microsoft::UI::Composition::Scenes::ISceneMaterialInput,
        impl::base<SceneMaterialInput, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneMaterialInput, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneMaterialInput(std::nullptr_t) noexcept {}
        SceneMaterialInput(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneMaterialInput(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneMaterialInput, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneMaterialInput, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneMesh : winrt::Microsoft::UI::Composition::Scenes::ISceneMesh,
        impl::base<SceneMesh, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneMesh, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneMesh(std::nullptr_t) noexcept {}
        SceneMesh(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneMesh(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneMesh, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneMesh, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES SceneMeshMaterialAttributeMap : winrt::Microsoft::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap,
        impl::base<SceneMeshMaterialAttributeMap, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneMeshMaterialAttributeMap, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Microsoft::UI::Composition::Scenes::SceneAttributeSemantic>>, winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Microsoft::UI::Composition::Scenes::SceneAttributeSemantic>, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneMeshMaterialAttributeMap(std::nullptr_t) noexcept {}
        SceneMeshMaterialAttributeMap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneMeshMaterialAttributeMap(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneMeshMaterialAttributeMap, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneMeshMaterialAttributeMap, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneMeshRendererComponent : winrt::Microsoft::UI::Composition::Scenes::ISceneMeshRendererComponent,
        impl::base<SceneMeshRendererComponent, winrt::Microsoft::UI::Composition::Scenes::SceneRendererComponent, winrt::Microsoft::UI::Composition::Scenes::SceneComponent, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneMeshRendererComponent, winrt::Microsoft::UI::Composition::Scenes::ISceneRendererComponent, winrt::Microsoft::UI::Composition::Scenes::ISceneComponent, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneMeshRendererComponent(std::nullptr_t) noexcept {}
        SceneMeshRendererComponent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneMeshRendererComponent(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneMeshRendererComponent, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneMeshRendererComponent, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES SceneMetallicRoughnessMaterial : winrt::Microsoft::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial,
        impl::base<SceneMetallicRoughnessMaterial, winrt::Microsoft::UI::Composition::Scenes::ScenePbrMaterial, winrt::Microsoft::UI::Composition::Scenes::SceneMaterial, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneMetallicRoughnessMaterial, winrt::Microsoft::UI::Composition::Scenes::IScenePbrMaterial, winrt::Microsoft::UI::Composition::Scenes::ISceneMaterial, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneMetallicRoughnessMaterial(std::nullptr_t) noexcept {}
        SceneMetallicRoughnessMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneMetallicRoughnessMaterial(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneMetallicRoughnessMaterial, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneMetallicRoughnessMaterial, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES SceneModelTransform : winrt::Microsoft::UI::Composition::Scenes::ISceneModelTransform,
        impl::base<SceneModelTransform, winrt::Microsoft::UI::Composition::CompositionTransform, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneModelTransform, winrt::Microsoft::UI::Composition::ICompositionTransform, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneModelTransform(std::nullptr_t) noexcept {}
        SceneModelTransform(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneModelTransform(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneModelTransform, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneModelTransform, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneNode : winrt::Microsoft::UI::Composition::Scenes::ISceneNode,
        impl::base<SceneNode, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneNode, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneNode(std::nullptr_t) noexcept {}
        SceneNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneNode(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneNode, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneNode, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES SceneNodeCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Composition::Scenes::SceneNode>,
        impl::base<SceneNodeCollection, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneNodeCollection, winrt::Microsoft::UI::Composition::Scenes::ISceneNodeCollection, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneNodeCollection(std::nullptr_t) noexcept {}
        SceneNodeCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Composition::Scenes::SceneNode>(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneNodeCollection, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneNodeCollection, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneObject : winrt::Microsoft::UI::Composition::Scenes::ISceneObject,
        impl::base<SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneObject(std::nullptr_t) noexcept {}
        SceneObject(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneObject(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneObject, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneObject, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES ScenePbrMaterial : winrt::Microsoft::UI::Composition::Scenes::IScenePbrMaterial,
        impl::base<ScenePbrMaterial, winrt::Microsoft::UI::Composition::Scenes::SceneMaterial, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<ScenePbrMaterial, winrt::Microsoft::UI::Composition::Scenes::ISceneMaterial, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        ScenePbrMaterial(std::nullptr_t) noexcept {}
        ScenePbrMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::IScenePbrMaterial(ptr, take_ownership_from_abi) {}
        using impl::consume_t<ScenePbrMaterial, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<ScenePbrMaterial, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneRendererComponent : winrt::Microsoft::UI::Composition::Scenes::ISceneRendererComponent,
        impl::base<SceneRendererComponent, winrt::Microsoft::UI::Composition::Scenes::SceneComponent, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneRendererComponent, winrt::Microsoft::UI::Composition::Scenes::ISceneComponent, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneRendererComponent(std::nullptr_t) noexcept {}
        SceneRendererComponent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneRendererComponent(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneRendererComponent, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneRendererComponent, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
    };
    struct WINRT_IMPL_EMPTY_BASES SceneSurfaceMaterialInput : winrt::Microsoft::UI::Composition::Scenes::ISceneSurfaceMaterialInput,
        impl::base<SceneSurfaceMaterialInput, winrt::Microsoft::UI::Composition::Scenes::SceneMaterialInput, winrt::Microsoft::UI::Composition::Scenes::SceneObject, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneSurfaceMaterialInput, winrt::Microsoft::UI::Composition::Scenes::ISceneMaterialInput, winrt::Microsoft::UI::Composition::Scenes::ISceneObject, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneSurfaceMaterialInput(std::nullptr_t) noexcept {}
        SceneSurfaceMaterialInput(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneSurfaceMaterialInput(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneSurfaceMaterialInput, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneSurfaceMaterialInput, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
    struct WINRT_IMPL_EMPTY_BASES SceneVisual : winrt::Microsoft::UI::Composition::Scenes::ISceneVisual,
        impl::base<SceneVisual, winrt::Microsoft::UI::Composition::ContainerVisual, winrt::Microsoft::UI::Composition::Visual, winrt::Microsoft::UI::Composition::CompositionObject>,
        impl::require<SceneVisual, winrt::Microsoft::UI::Composition::IContainerVisual, winrt::Microsoft::UI::Composition::IVisual, winrt::Microsoft::UI::Composition::IVisual2, winrt::Microsoft::UI::Composition::IVisual3, winrt::Microsoft::UI::Composition::IVisual4, winrt::Microsoft::UI::Composition::ICompositionObject, winrt::Microsoft::UI::Composition::ICompositionObject2, winrt::Microsoft::UI::Composition::ICompositionObject3, winrt::Microsoft::UI::Composition::ICompositionObject4, winrt::Microsoft::UI::Composition::ICompositionObject5, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::IAnimationObject>
    {
        SceneVisual(std::nullptr_t) noexcept {}
        SceneVisual(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Composition::Scenes::ISceneVisual(ptr, take_ownership_from_abi) {}
        using impl::consume_t<SceneVisual, winrt::Microsoft::UI::Composition::ICompositionObject>::StartAnimation;
        using impl::consume_t<SceneVisual, winrt::Microsoft::UI::Composition::ICompositionObject5>::StartAnimation;
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor);
    };
}
#endif
