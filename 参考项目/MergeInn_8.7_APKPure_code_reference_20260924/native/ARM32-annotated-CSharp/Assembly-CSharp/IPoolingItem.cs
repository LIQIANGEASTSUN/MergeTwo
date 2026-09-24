// Dll : Assembly-CSharp.dll
// Namespace: 
public interface IPoolingItem // TypeDefIndex: 1221
{

	// Properties
	public abstract Transform transform { get; }
	public abstract string name { get; set; }

	// Methods

	//  Slot: 0
	public abstract Transform get_transform();

	//  Slot: 1
	public abstract string get_name();

	//  Slot: 2
	public abstract void set_name(string value);

	//  Slot: 3
	public abstract void Hide();

	//  Slot: 4
	public abstract void Show();

	//  Slot: 5
	public abstract void ReturnToPool();

	//  Slot: 6
	public abstract void AddReturnToPoolListener(Action<IPoolingItem> onReturnToPool);
}
