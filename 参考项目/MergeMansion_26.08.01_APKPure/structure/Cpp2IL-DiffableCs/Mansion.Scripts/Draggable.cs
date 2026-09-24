//Type is in global namespace

public class Draggable : MonoBehaviour, IBeginDragHandler, IEventSystemHandler, IDragHandler, IEndDragHandler
{
	public static Action<Coordinate> DragStartedCall; //Field offset: 0x0
	public static Action<Coordinate, Coordinate, Coordinate> ItemHoverCall; //Field offset: 0x8
	public static Action<Boolean, Coordinate> InventoryButtonHoverCall; //Field offset: 0x10
	public static Action<Coordinate, Coordinate, Coordinate, Boolean> MergeOrMoveCall; //Field offset: 0x18
	private Coordinate startCoordinate; //Field offset: 0x20
	private Coordinate currentCoordinate; //Field offset: 0x28
	private Coordinate endCoordinate; //Field offset: 0x30
	private Coordinate lastPotentialNearCoordinate; //Field offset: 0x38
	private bool isMovable; //Field offset: 0x40
	private bool dragSafeAreaEnabled; //Field offset: 0x41

	public Draggable() { }

	private static Vector2 CalculateClampedPosition(Vector2 inputPos) { }

	public override void OnBeginDrag(PointerEventData eventData) { }

	public override void OnDrag(PointerEventData eventData) { }

	public override void OnEndDrag(PointerEventData eventData) { }

	public void SetMovable(bool state) { }

	public void SetStartCoordinate(int x, int y) { }

}

