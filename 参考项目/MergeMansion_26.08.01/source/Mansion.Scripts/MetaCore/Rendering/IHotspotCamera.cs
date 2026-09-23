using Metacore.MergeMansion.Common.Options;
using UnityEngine;

namespace Metacore.Rendering
{
	public interface IHotspotCamera : ICameraHotspotNavigator, ICameraInputLock
	{
		Vector3 CameraPosition { get; }

		Vector2 CameraPosition2D { get; }

		CameraZoomTarget CameraZoomTarget { get; }

		Option<Camera> GetCamera();

		bool TryGetHotspotScreenPosition(HotspotId hotspotId, out Vector3 screenPosition);

		void AnimateCameraZoomTo(CameraZoomTarget cameraZoomTarget, float duration = 0.75f);

		void AllowInputDialogueRunner();

		void AllowInputMergeBoard();

		void AllowInputMenus();

		void AllowInputDebugMenuItemsList();
	}
}
