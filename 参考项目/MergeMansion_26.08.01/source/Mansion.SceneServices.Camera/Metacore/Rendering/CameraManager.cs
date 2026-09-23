using System;
using System.Collections.Generic;
using GameLogic.Area;
using GameLogic.Hotspots;
using GameLogic.Player;
using MapCharacters3D;
using Metacore.MergeMansion.Common.Options;
using Metacore.MergeMansion.Common.Rollbacks;
using Metacore.MergeMansion.Rendering;
using Metacore.MergeMansion.SystemGroups;
using UnityEngine;

namespace Metacore.Rendering
{
	public class CameraManager : ILocationCamera, ISceneCamera, ILocationDependent, ICameraInputLock, ICameraProjection, ICameraHotspotNavigator, IDirectorCamera, IMapCharacterCamera, IMapUnlockCamera, IHotspotCamera, IDebugCamera, ICutsceneCamera, ICameraMenuInput, IMapSpotCamera, IDecorationCamera, IBoardCamera, ICameraPanning, IApplicationPauseSystem
	{
		public static Action<CameraObject> OnCameraLoaded;

		[SerializeField]
		public CameraObject cameraObject;

		public static Vector3 DefaultCameraPosition;

		public static float DefaultCameraZoom;

		[NonSerialized]
		public readonly List<UnityEngine.Object> disableInputRequesters;

		[NonSerialized]
		public readonly LocationLoader locationLoader;

		[NonSerialized]
		public readonly PlayerModel playerModel;

		[NonSerialized]
		public readonly PlayerClientContext playerContext;

		[NonSerialized]
		public readonly MapCharacterController3D mapCharacterController3D;

		[NonSerialized]
		public Option<ICameraMovePreparer> _movePreparerOption;

		public static CameraManager Instance => null;

		public static bool HasInstance => false;

		public bool HasCamera => false;

		public ITickSystem CameraTickSystem => null;

		public CameraObject CameraObject => null;

		public bool IsInputDisabled => false;

		public float DefaultZoomSize => 0f;

		public bool CameraIsOrthographic => false;

		public Vector3 CameraPosition => default(Vector3);

		public Vector2 CameraPosition2D => default(Vector2);

		public float Size => 0f;

		public float CameraZoom => 0f;

		public float CameraZoomRatio => 0f;

		public CameraZoomTarget CameraZoomTarget => default(CameraZoomTarget);

		public bool CameraIsMoving => false;

		public Option<Camera> GetCamera()
		{
			return default(Option<Camera>);
		}

		public void CalculateNearFar()
		{
		}

		public CameraManager(ISafeRollback rollback, LocationLoader locLoader, PlayerModel player, PlayerClientContext context, MapCharacterController3D mapCharacterController)
		{
		}

		public void Dispose()
		{
		}

		public virtual void InitLocation(ISafeRollback rollback)
		{
		}

		public virtual void DisposeLocation()
		{
		}

		public void SetMovePreparer(ICameraMovePreparer movePreparer)
		{
		}

		public void ClearMovePreparer()
		{
		}

		public CameraObject LoadCamera(LocationId locationId)
		{
			return null;
		}

		public CameraObject LoadCamera(Location location)
		{
			return null;
		}

		public void UnloadCamera()
		{
		}

		public void OnFreeCameraPositionChanged()
		{
		}

		public void OnCameraZoomChanged(float zoomPercentage)
		{
		}

		public void SetCameraPosition(Vector3 position, bool zeroZ = false, bool ignoreLimits = false)
		{
		}

		public void AnimateCameraToPosition(Vector3 worldPosition, Action callback = null, float duration = 1f, float delay = 0f, bool triggerFreeCameraPosition = false, bool zeroZ = false)
		{
		}

		public void AnimateCameraToCameraTarget(CameraTargetName cameraTargetName, CameraZoomTarget cameraZoomTarget, Action callback, float duration = 1f, float delay = 0f)
		{
		}

		public virtual void AnimateCameraToHotspot(IHotspotDefinition hotspotDefinition, Action callback = null, float duration = 1f, float delay = 0f, bool triggerFreeCameraPosition = false, bool invokeCallbackOnFail = false)
		{
		}

		public void AnimateCameraToHotspot(HotspotId hotspotId, Action callback = null, float duration = 1f, float delay = 0f, Vector3 offset = default(Vector3), bool triggerFreeCameraPosition = false, CameraZoomTarget cameraZoomTarget = CameraZoomTarget.None, bool invokeCallbackOnFail = false)
		{
		}

		public void SetCameraPositionToHotspot(HotspotId hotspotId)
		{
		}

		public bool TryGetHotspotScreenPosition(HotspotId hotspotId, out Vector3 screenPosition)
		{
			screenPosition = default(Vector3);
			return false;
		}

		public void SetCameraPositionToMapspot(string mapSpotId)
		{
		}

		public void AnimateCameraToMapSpot(string mapSpotId, Action callback = null, float duration = 1f, float delay = 0f)
		{
		}

		public void AnimateCameraToMapSpot(MapSpotId mapSpotId, Action callback = null, float duration = 1f, float delay = 0f, Vector3 offset = default(Vector3))
		{
		}

		public void AnimateCameraToDecorationSlot(int decorationSlotNumber, CameraZoomTarget zoomTarget = CameraZoomTarget.None, Action callback = null)
		{
		}

		public void AnimateCameraToClosestDecorationSlot(bool allowOnlySlotsWithDecorations = false, Action callback = null)
		{
		}

		public void SavePosition()
		{
		}

		public void OnApplicationPause(bool isPaused)
		{
		}

		public void SetCameraZoomToDefault()
		{
		}

		public void SetCameraZoom(CameraZoomTarget zoomTarget)
		{
		}

		public virtual void ZoomCamera(float offset, float speed)
		{
		}

		public void AnimateCameraZoomTo(CameraZoomTarget cameraZoomTarget, float duration = 0.75f)
		{
		}

		public void AllowInputDialogueRunner()
		{
		}

		public void DisableInputDialogueRunner()
		{
		}

		public void AllowInputMergeBoard()
		{
		}

		public void DisableInputMergeBoard()
		{
		}

		public void AllowInputMenus()
		{
		}

		public void DisableInputMenus()
		{
		}

		public void AllowInputDebugMenuItemsList()
		{
		}

		public void DisableInputDebugMenuItemsList()
		{
		}

		public void SetTutorialInputState(bool isTutorialOn)
		{
		}

		public void AddInputFlag(InputDisableFlags flag)
		{
		}

		public void RemoveInputFlag(InputDisableFlags flag)
		{
		}

		public void DisablePanning()
		{
		}

		public void EnablePanning()
		{
		}

		public void RequestDisableFromInput(UnityEngine.Object from)
		{
		}

		public void EndRequestDisableFromInput(UnityEngine.Object from)
		{
		}

		public void ShakeCamera(float duration, float amount)
		{
		}

		public virtual bool IsVisible(Bounds bounds)
		{
			return false;
		}

		public virtual Vector3 WorldToScreenPosition(Vector3 worldPosition)
		{
			return default(Vector3);
		}

		public virtual Vector3 ScreenToWorldPosition(Vector2 screenPosition)
		{
			return default(Vector3);
		}

		public virtual Vector3 WorldToScreenPoint(Vector3 worldPosition)
		{
			return default(Vector3);
		}

		public virtual Vector3 ScreenToWorldPoint(Vector3 screenPosition)
		{
			return default(Vector3);
		}

		public virtual Vector3 WorldToViewportPoint(Vector3 worldPosition)
		{
			return default(Vector3);
		}

		public virtual Vector3 ScreenToViewportPoint(Vector3 screenPosition)
		{
			return default(Vector3);
		}

		public Vector3? GetHotspotPositionAverage(List<HotspotDefinition> hotspotDefinitions)
		{
			return null;
		}

		public static CameraObject GetCameraPrefab(Location location)
		{
			return null;
		}

		public bool CameraIsInPosition(Vector3 worldPosition)
		{
			return false;
		}
	}
}
