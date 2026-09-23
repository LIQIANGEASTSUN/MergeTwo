using System;
using UnityEngine;

namespace Metacore.Rendering
{
	public interface ICutsceneCamera : ICameraHotspotNavigator
	{
		void SetCameraPosition(Vector3 position, bool zeroZ = false, bool ignoreLimits = false);

		void AnimateCameraToPosition(Vector3 worldPosition, Action callback = null, float duration = 1f, float delay = 0f, bool triggerFreeCameraPosition = false, bool zeroZ = false);

		void AnimateCameraToCameraTarget(CameraTargetName cameraTargetName, CameraZoomTarget cameraZoomTarget, Action callback, float duration = 1f, float delay = 0f);

		new void SetCameraPositionToHotspot(HotspotId hotspotId);

		void SetCameraPositionToMapspot(string mapSpotId);

		void AnimateCameraToMapSpot(string mapSpotId, Action callback = null, float duration = 1f, float delay = 0f);

		void SetCameraZoom(CameraZoomTarget zoomTarget);

		void AnimateCameraZoomTo(CameraZoomTarget cameraZoomTarget, float duration = 0.75f);

		void ShakeCamera(float duration, float amount);

		void AllowInputDialogueRunner();

		void AllowInputMergeBoard();

		void AllowInputMenus();

		void AllowInputDebugMenuItemsList();

		void DisableInputDialogueRunner();

		void DisableInputMergeBoard();

		void DisableInputMenus();

		void DisableInputDebugMenuItemsList();
	}
}
