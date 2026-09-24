//Type is in global namespace

public class BoardSlot : MonoBehaviour
{
	public int Row; //Field offset: 0x20
	public int Column; //Field offset: 0x24
	public int BoardSlotItemSortingOrder; //Field offset: 0x28
	public bool IsInteractable; //Field offset: 0x2C
	public bool IsLocked; //Field offset: 0x2D
	[CompilerGenerated]
	private BaseItem <Item>k__BackingField; //Field offset: 0x30
	public GameObject Lock; //Field offset: 0x38
	public GameObject Objective; //Field offset: 0x40
	public Collider2D Collider; //Field offset: 0x48
	public Visual Visual; //Field offset: 0x50
	[SerializeField]
	private SpriteRenderer cellBackground; //Field offset: 0x58
	private float _cornerDistance; //Field offset: 0x60

	public Vector2 BottomLeftPosition
	{
		 get { } //Length: 136
	}

	public Vector2 BottomPosition
	{
		 get { } //Length: 136
	}

	public Vector2 BottomRightPosition
	{
		 get { } //Length: 212
	}

	public Vector2 CenterPosition
	{
		 get { } //Length: 32
	}

	public bool IsEmpty
	{
		 get { } //Length: 96
	}

	public private BaseItem Item
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public Vector2 LeftPosition
	{
		 get { } //Length: 136
	}

	public Vector2 RightPosition
	{
		 get { } //Length: 136
	}

	public Vector2 TopLeftPosition
	{
		 get { } //Length: 212
	}

	public Vector2 TopPosition
	{
		 get { } //Length: 136
	}

	public Vector2 TopRightPosition
	{
		 get { } //Length: 136
	}

	public BoardSlot() { }

	public Vector2 get_BottomLeftPosition() { }

	public Vector2 get_BottomPosition() { }

	public Vector2 get_BottomRightPosition() { }

	public Vector2 get_CenterPosition() { }

	public bool get_IsEmpty() { }

	[CompilerGenerated]
	public BaseItem get_Item() { }

	public Vector2 get_LeftPosition() { }

	public Vector2 get_RightPosition() { }

	public Vector2 get_TopLeftPosition() { }

	public Vector2 get_TopPosition() { }

	public Vector2 get_TopRightPosition() { }

	public void Init(bool isLocked, BaseItem item) { }

	public bool IsTappable() { }

	public void OnSelected() { }

	[CompilerGenerated]
	private void set_Item(BaseItem value) { }

	public void SetBackground(Sprite background) { }

	public void SetItem(BaseItem item, bool setPosition = true) { }

	public void SetLock(bool status) { }

	public void Tap() { }

	public virtual string ToString() { }

}

