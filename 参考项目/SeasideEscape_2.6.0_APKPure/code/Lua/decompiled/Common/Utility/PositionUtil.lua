PositionUtil = {}
PositionUtil.ECameraViewSide = {
  Left = -1,
  Center = 0,
  Right = 1
}

function PositionUtil.UICameraScreen2World(vec3)
  if GM.UIManager == nil then
    return Vector3.zero
  end
  return GM.UIManager.camera:ScreenToWorldPoint(Vector3(vec3.x, vec3.y, vec3.z or 0))
end

function PositionUtil.UICameraWorld2Screen(vec3)
  if GM.UIManager == nil then
    return Vector3.zero
  end
  return GM.UIManager.camera:WorldToScreenPoint(vec3)
end

function PositionUtil.MapWorld2UI(vec3)
  local cam = GM.ModeViewController:GetMapInfo()
  return PositionUtil.UICameraScreen2World(cam:WorldToScreenPoint(vec3))
end

function PositionUtil.FindCorrelativeCamera(targetRectTrans)
  if targetRectTrans == nil then
    return
  end
  local canvas = targetRectTrans.gameObject:GetComponent(typeof(CS.UnityEngine.Canvas))
  if canvas and not canvas:IsNull() and canvas.worldCamera and not canvas.worldCamera:IsNull() then
    return canvas.worldCamera
  end
  local parent = targetRectTrans.parent
  while parent do
    canvas = parent.gameObject:GetComponent(typeof(CS.UnityEngine.Canvas))
    if canvas and not canvas:IsNull() and canvas.worldCamera and not canvas.worldCamera:IsNull() then
      return canvas.worldCamera
    end
    parent = parent.parent
  end
end

function PositionUtil.GameObjectWorld2ScreenPoint(transform)
  if transform == nil then
    return Vector3.zero
  end
  local camera = PositionUtil.FindCorrelativeCamera(transform)
  if camera == nil then
    return Vector3.zero
  end
  return camera:WorldToScreenPoint(transform.position)
end

function PositionUtil.IsWorldPointInCamera(transform, camera)
  if camera == nil then
    return false
  end
  local viewportPos = camera:WorldToViewportPoint(transform)
  return 0 <= viewportPos.x and viewportPos.x <= 1 and 0 <= viewportPos.y and 1 >= viewportPos.y
end

function PositionUtil.GetWorldPointInCameraSideX(transform, camera)
  if camera == nil then
    return PositionUtil.ECameraViewSide.Center
  end
  local viewportPos = camera:WorldToViewportPoint(transform)
  if viewportPos.x < 0 then
    return PositionUtil.ECameraViewSide.Left
  end
  if viewportPos.x > 1 then
    return PositionUtil.ECameraViewSide.Right
  end
  return PositionUtil.ECameraViewSide.Center
end
